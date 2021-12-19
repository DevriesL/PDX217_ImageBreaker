// SPDX-License-Identifier: GPL-2.0+
/*
 * Inject loadable kernel modules as built-in source code
 *
 * Copyright (C) 2021, Devries <therkduan@gmail.com>
 */

#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/types.h>

#define TAG "[Module Injector] "

struct inject_module {
	const char *name;
	void (*init_func)(void);
};

static const struct inject_module inject_modules[] = {
	{ "native_dlkm", NULL },	{ "platform_dlkm", NULL },
	{ "pinctrl_wcd_dlkm", NULL },	{ "wsa_macro_dlkm", NULL },
	{ "hdmi_dlkm", NULL },		{ "swr_dmic_dlkm", NULL },
	{ "wcd937x_slave_dlkm", NULL }, { "machine_dlkm", NULL },
	{ "rx_macro_dlkm", NULL },	{ "wsa883x_dlkm", NULL },
	{ "va_macro_dlkm", NULL },	{ "tx_macro_dlkm", NULL },
	{ "wcd937x_dlkm", NULL },	{ "swr_ctrl_dlkm", NULL },
	{ "wcd938x_dlkm", NULL },	{ "pinctrl_lpi_dlkm", NULL },
	{ "bolero_cdc_dlkm", NULL },	{ "mbhc_dlkm", NULL },
	{ "wcd9xxx_dlkm", NULL },	{ "q6_dlkm", NULL },
	{ "adsp_loader_dlkm", NULL },	{ "stub_dlkm", NULL },
	{ "swr_haptics_dlkm", NULL },	{ "wcd938x_slave_dlkm", NULL },
	{ "apr_dlkm", NULL },		{ "q6_notifier_dlkm", NULL },
	{ "q6_pdr_dlkm", NULL },	{ "swr_dlkm", NULL },
	{ "snd_event_dlkm", NULL },	{ "wcd_core_dlkm", NULL },
};

bool mod_inject(const char *module_name)
{
	int index;
	bool inject = false;

	for (index = 0; index < ARRAY_SIZE(inject_modules); index++) {
		if (strlen(inject_modules[index].name) == strlen(module_name) &&
		    strncmp(inject_modules[index].name, module_name,
			    strlen(inject_modules[index].name)) == 0) {
			inject = true;
			printk(TAG "inject module: %s", module_name);
			if (inject_modules[index].init_func != NULL) {
				printk(TAG "call module: %s init function",
				       module_name);
				inject_modules[index].init_func();
			}
			break;
		}
	}

	if (!inject) {
		printk(TAG "bypass module: %s", module_name);
	}

	return inject;
}
