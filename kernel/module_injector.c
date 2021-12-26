// SPDX-License-Identifier: GPL-2.0+
/*
 * Inject loadable kernel modules as built-in source code
 *
 * Copyright (C) 2021, Devries <therkduan@gmail.com>
 */

#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/types.h>
#include <uapi/linux/module.h>
#include "module-internal.h"

#define TAG "[Module Injector] "

extern int hdd_driver_load(void);

struct inject_module {
	const char *name;
	bool force_load;
	int (*init_func)(void);
};

static const struct inject_module inject_modules[] = {
	// Force load modules
	{ "texfat", true, NULL },
	{ "somc_battchg_ext", true, NULL },
	// WLAN driver
	{ "wlan", false, hdd_driver_load },
	// Bluetooth driver
	{ "btpower", false, NULL },
	{ "bt_fm_slim", false, NULL },
	// Slimbus driver
	{ "slimbus", false, NULL },
	{ "slimbus_ngd", false, NULL },
	// RMNET modules
	{ "rmnet_core", false, NULL },
	{ "rmnet_ctl", false, NULL },
	{ "rmnet_offload", false, NULL },
	{ "rmnet_shs", false, NULL },
	// Audio modules
	{ "native_dlkm", false, NULL },
	{ "platform_dlkm", false, NULL },
	{ "pinctrl_wcd_dlkm", false, NULL },
	{ "wsa_macro_dlkm", false, NULL },
	{ "hdmi_dlkm", false, NULL },
	{ "swr_dmic_dlkm", false, NULL },
	{ "wcd937x_slave_dlkm", false, NULL },
	{ "machine_dlkm", false, NULL },
	{ "rx_macro_dlkm", false, NULL },
	{ "wsa883x_dlkm", false, NULL },
	{ "va_macro_dlkm", false, NULL },
	{ "tx_macro_dlkm", false, NULL },
	{ "wcd937x_dlkm", false, NULL },
	{ "swr_ctrl_dlkm", false, NULL },
	{ "wcd938x_dlkm", false, NULL },
	{ "pinctrl_lpi_dlkm", false, NULL },
	{ "bolero_cdc_dlkm", false, NULL },
	{ "mbhc_dlkm", false, NULL },
	{ "wcd9xxx_dlkm", false, NULL },
	{ "q6_dlkm", false, NULL },
	{ "adsp_loader_dlkm", false, NULL },
	{ "stub_dlkm", false, NULL },
	{ "swr_haptics_dlkm", false, NULL },
	{ "wcd938x_slave_dlkm", false, NULL },
	{ "apr_dlkm", false, NULL },
	{ "q6_notifier_dlkm", false, NULL },
	{ "q6_pdr_dlkm", false, NULL },
	{ "swr_dlkm", false, NULL },
	{ "snd_event_dlkm", false, NULL },
	{ "wcd_core_dlkm", false, NULL },
	// Unused modules
	{ "rdbg", false, NULL },
	{ "wakeup_irq_debug", false, NULL },
};

bool mod_inject(struct load_info *info, int *flags)
{
	int index;
	bool injected = false;

	for (index = 0; index < ARRAY_SIZE(inject_modules); index++) {
		if (strlen(inject_modules[index].name) == strlen(info->name) &&
		    strncmp(inject_modules[index].name, info->name,
			    strlen(inject_modules[index].name)) == 0) {
			if (inject_modules[index].force_load) {
				printk(TAG "force load module: %s", info->name);
				info->index.vers = 0;
				*flags |= MODULE_INIT_IGNORE_MODVERSIONS;
				*flags |= MODULE_INIT_IGNORE_VERMAGIC;
			} else {
				printk(TAG "inject module: %s", info->name);
				injected = true;
				if (inject_modules[index].init_func != NULL) {
					printk(TAG "call module: %s init function", info->name);
					inject_modules[index].init_func();
				}
			}

			break;
		}
	}

	if (index == ARRAY_SIZE(inject_modules)) {
		printk(TAG "bypass module: %s", info->name);
	}

	return injected;
}
