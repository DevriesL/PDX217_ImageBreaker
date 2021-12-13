/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright 2017 Texas Instruments, Inc.
 */
#ifndef __DT_BINDINGS_CLK_OMAP5_H
#define __DT_BINDINGS_CLK_OMAP5_H

#define OMAP5_CLKCTRL_OFFSET	0x20
#define OMAP5_CLKCTRL_INDEX(offset)	((offset) - OMAP5_CLKCTRL_OFFSET)

/* mpu clocks */
#define OMAP5_MPU_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)

/* dsp clocks */
#define OMAP5_MMU_DSP_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)

/* abe clocks */
#define OMAP5_L4_ABE_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)
#define OMAP5_MCPDM_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x30)
#define OMAP5_DMIC_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x38)
#define OMAP5_MCBSP1_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x48)
#define OMAP5_MCBSP2_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x50)
#define OMAP5_MCBSP3_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x58)
#define OMAP5_TIMER5_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x68)
#define OMAP5_TIMER6_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x70)
#define OMAP5_TIMER7_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x78)
#define OMAP5_TIMER8_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x80)

/* l3main1 clocks */
#define OMAP5_L3_MAIN_1_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)

/* l3main2 clocks */
#define OMAP5_L3_MAIN_2_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)

/* ipu clocks */
#define OMAP5_MMU_IPU_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)

/* dma clocks */
#define OMAP5_DMA_SYSTEM_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)

/* emif clocks */
#define OMAP5_DMM_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)
#define OMAP5_EMIF1_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x30)
#define OMAP5_EMIF2_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x38)

/* l4cfg clocks */
#define OMAP5_L4_CFG_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)
#define OMAP5_SPINLOCK_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x28)
#define OMAP5_MAILBOX_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x30)

/* l3instr clocks */
#define OMAP5_L3_MAIN_3_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)
#define OMAP5_L3_INSTR_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x28)

/* l4per clocks */
#define OMAP5_TIMER10_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x28)
#define OMAP5_TIMER11_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x30)
#define OMAP5_TIMER2_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x38)
#define OMAP5_TIMER3_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x40)
#define OMAP5_TIMER4_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x48)
#define OMAP5_TIMER9_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x50)
#define OMAP5_GPIO2_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x60)
#define OMAP5_GPIO3_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x68)
#define OMAP5_GPIO4_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x70)
#define OMAP5_GPIO5_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x78)
#define OMAP5_GPIO6_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x80)
#define OMAP5_I2C1_CLKCTRL	OMAP5_CLKCTRL_INDEX(0xa0)
#define OMAP5_I2C2_CLKCTRL	OMAP5_CLKCTRL_INDEX(0xa8)
#define OMAP5_I2C3_CLKCTRL	OMAP5_CLKCTRL_INDEX(0xb0)
#define OMAP5_I2C4_CLKCTRL	OMAP5_CLKCTRL_INDEX(0xb8)
#define OMAP5_L4_PER_CLKCTRL	OMAP5_CLKCTRL_INDEX(0xc0)
#define OMAP5_MCSPI1_CLKCTRL	OMAP5_CLKCTRL_INDEX(0xf0)
#define OMAP5_MCSPI2_CLKCTRL	OMAP5_CLKCTRL_INDEX(0xf8)
#define OMAP5_MCSPI3_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x100)
#define OMAP5_MCSPI4_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x108)
#define OMAP5_GPIO7_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x110)
#define OMAP5_GPIO8_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x118)
#define OMAP5_MMC3_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x120)
#define OMAP5_MMC4_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x128)
#define OMAP5_UART1_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x140)
#define OMAP5_UART2_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x148)
#define OMAP5_UART3_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x150)
#define OMAP5_UART4_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x158)
#define OMAP5_MMC5_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x160)
#define OMAP5_I2C5_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x168)
#define OMAP5_UART5_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x170)
#define OMAP5_UART6_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x178)

/* dss clocks */
#define OMAP5_DSS_CORE_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)

/* gpu clocks */
#define OMAP5_GPU_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)

/* l3init clocks */
#define OMAP5_MMC1_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x28)
#define OMAP5_MMC2_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x30)
#define OMAP5_USB_HOST_HS_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x58)
#define OMAP5_USB_TLL_HS_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x68)
#define OMAP5_SATA_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x88)
#define OMAP5_OCP2SCP1_CLKCTRL	OMAP5_CLKCTRL_INDEX(0xe0)
#define OMAP5_OCP2SCP3_CLKCTRL	OMAP5_CLKCTRL_INDEX(0xe8)
#define OMAP5_USB_OTG_SS_CLKCTRL	OMAP5_CLKCTRL_INDEX(0xf0)

/* wkupaon clocks */
#define OMAP5_L4_WKUP_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x20)
#define OMAP5_WD_TIMER2_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x30)
#define OMAP5_GPIO1_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x38)
#define OMAP5_TIMER1_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x40)
#define OMAP5_COUNTER_32K_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x50)
#define OMAP5_KBD_CLKCTRL	OMAP5_CLKCTRL_INDEX(0x78)

#endif
