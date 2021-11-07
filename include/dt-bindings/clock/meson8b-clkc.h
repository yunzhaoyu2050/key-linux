/*
 * include/dt-bindings/clock/meson8b-clkc.h
 *
 * Copyright (C) 2017 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 */

/*
 * CLKID index values
 *
 * These indices are entirely contrived and do not map onto the hardware.
 * Migrate them out of this header and into the DT header file when they need
 * to be exposed to client nodes in DT: include/dt-bindings/clock/meson8b-clkc.h
 */


#ifndef __MESON8B_CLKC_H
#define __MESON8B_CLKC_H

#define CLKID_UNUSED		0
#define CLKID_XTAL		1
#define CLKID_PLL_FIXED		2
#define CLKID_PLL_VID		3
#define CLKID_PLL_SYS		4
#define CLKID_FCLK_DIV2		5
#define CLKID_FCLK_DIV3		6
#define CLKID_FCLK_DIV4		7
#define CLKID_FCLK_DIV5		8
#define CLKID_FCLK_DIV7		9
#define CLKID_CLK81		10
#define CLKID_MALI		11
#define CLKID_CPUCLK		12
#define CLKID_ZERO		13
#define CLKID_MPEG_SEL		14
#define CLKID_MPEG_DIV		15
#define CLKID_DDR		16
#define CLKID_DOS		17
#define CLKID_ISA		18
#define CLKID_PL301		19
#define CLKID_PERIPHS		20
#define CLKID_SPICC		21
#define CLKID_I2C		22
#define CLKID_SAR_ADC		23
#define CLKID_SMART_CARD	24
#define CLKID_RNG0		25
#define CLKID_UART0		26
#define CLKID_SDHC		27
#define CLKID_STREAM		28
#define CLKID_ASYNC_FIFO	29
#define CLKID_SDIO		30
#define CLKID_ABUF		31
#define CLKID_HIU_IFACE		32
#define CLKID_ASSIST_MISC	33
#define CLKID_SPI		34
#define CLKID_I2S_SPDIF		35
#define CLKID_ETH		36
#define CLKID_DEMUX		37
#define CLKID_AIU_GLUE		38
#define CLKID_IEC958		39
#define CLKID_I2S_OUT		40
#define CLKID_AMCLK		41
#define CLKID_AIFIFO2		42
#define CLKID_MIXER		43
#define CLKID_MIXER_IFACE	44
#define CLKID_ADC		45
#define CLKID_BLKMV		46
#define CLKID_AIU		47
#define CLKID_UART1		48
#define CLKID_G2D		49
#define CLKID_USB0		50
#define CLKID_USB1		51
#define CLKID_RESET		52
#define CLKID_NAND		53
#define CLKID_DOS_PARSER	54
#define CLKID_USB		55
#define CLKID_VDIN1		56
#define CLKID_AHB_ARB0		57
#define CLKID_EFUSE		58
#define CLKID_BOOT_ROM		59
#define CLKID_AHB_DATA_BUS	60
#define CLKID_AHB_CTRL_BUS	61
#define CLKID_HDMI_INTR_SYNC	62
#define CLKID_HDMI_PCLK		63
#define CLKID_USB1_DDR_BRIDGE	64
#define CLKID_USB0_DDR_BRIDGE	65
#define CLKID_MMC_PCLK		66
#define CLKID_DVIN		67
#define CLKID_UART2		68
#define CLKID_SANA		69
#define CLKID_VPU_INTR		70
#define CLKID_SEC_AHB_AHB3_BRIDGE	71
#define CLKID_CLK81_A9		72
#define CLKID_VCLK2_VENCI0	73
#define CLKID_VCLK2_VENCI1	74
#define CLKID_VCLK2_VENCP0	75
#define CLKID_VCLK2_VENCP1	76
#define CLKID_GCLK_VENCI_INT	77
#define CLKID_GCLK_VENCP_INT	78
#define CLKID_DAC_CLK		79
#define CLKID_AOCLK_GATE	80
#define CLKID_IEC958_GATE	81
#define CLKID_ENC480P		82
#define CLKID_RNG1		83
#define CLKID_GCLK_VENCL_INT	84
#define CLKID_VCLK2_VENCLMCC	85
#define CLKID_VCLK2_VENCL	86
#define CLKID_VCLK2_OTHER	87
#define CLKID_EDP		88
#define CLKID_AO_MEDIA_CPU	89
#define CLKID_AO_AHB_SRAM	90
#define CLKID_AO_AHB_BUS	91
#define CLKID_AO_IFACE		92
#define CLKID_MPLL0		93
#define CLKID_MPLL1		94
#define CLKID_MPLL2		95

#define OTHER_BASE	96 /*96*/

#define CLKID_STORE_BASE OTHER_BASE
#define CLKID_NAND_CORE_MUX (CLKID_STORE_BASE + 0)
#define CLKID_NAND_CORE_DIV (CLKID_STORE_BASE + 1)
#define CLKID_NAND_CORE_GATE (CLKID_STORE_BASE + 2)
#define CLKID_NAND_CORE_COMP (CLKID_STORE_BASE + 3)

#define CLKID_GPU_BASE (CLKID_STORE_BASE + 4) /*96+4*/
#define CLKID_GPU_P0_MUX (CLKID_GPU_BASE + 0)
#define CLKID_GPU_P0_DIV (CLKID_GPU_BASE + 1)
#define CLKID_GPU_P0_GATE (CLKID_GPU_BASE + 2)
#define CLKID_GPU_P0_COMP (CLKID_GPU_BASE + 3)
#define CLKID_GPU_P1_MUX (CLKID_GPU_BASE + 4)
#define CLKID_GPU_P1_DIV (CLKID_GPU_BASE + 5)
#define CLKID_GPU_P1_GATE (CLKID_GPU_BASE + 6)
#define CLKID_GPU_P1_COMP (CLKID_GPU_BASE + 7)
#define CLKID_GPU_MUX (CLKID_GPU_BASE + 8)

#define CLKID_MEDIA_BASE (CLKID_GPU_BASE + 9) /*96+4+9*/
#define CLKID_VDEC_P0_MUX (CLKID_MEDIA_BASE + 0)
#define CLKID_VDEC_P0_DIV (CLKID_MEDIA_BASE + 1)
#define CLKID_VDEC_P0_GATE (CLKID_MEDIA_BASE + 2)
#define CLKID_VDEC_P0_COMP (CLKID_MEDIA_BASE + 3)
#define CLKID_VDEC_P1_MUX (CLKID_MEDIA_BASE + 4)
#define CLKID_VDEC_P1_DIV (CLKID_MEDIA_BASE + 5)
#define CLKID_VDEC_P1_GATE (CLKID_MEDIA_BASE + 6)
#define CLKID_VDEC_P1_COMP (CLKID_MEDIA_BASE + 7)
#define CLKID_VDEC_MUX (CLKID_MEDIA_BASE + 8)
#define CLKID_HCODEC_P0_MUX (CLKID_MEDIA_BASE + 9)
#define CLKID_HCODEC_P0_DIV (CLKID_MEDIA_BASE + 10)
#define CLKID_HCODEC_P0_GATE (CLKID_MEDIA_BASE + 11)
#define CLKID_HCODEC_P0_COMP (CLKID_MEDIA_BASE + 12)
#define CLKID_HCODEC_P1_MUX (CLKID_MEDIA_BASE + 13)
#define CLKID_HCODEC_P1_DIV (CLKID_MEDIA_BASE + 14)
#define CLKID_HCODEC_P1_GATE (CLKID_MEDIA_BASE + 15)
#define CLKID_HCODEC_P1_COMP (CLKID_MEDIA_BASE + 16)
#define CLKID_HCODEC_MUX (CLKID_MEDIA_BASE + 17)
#define CLKID_HEVC_P0_MUX (CLKID_MEDIA_BASE + 18)
#define CLKID_HEVC_P0_DIV (CLKID_MEDIA_BASE + 19)
#define CLKID_HEVC_P0_GATE (CLKID_MEDIA_BASE + 20)
#define CLKID_HEVC_P0_COMP (CLKID_MEDIA_BASE + 21)
#define CLKID_HEVC_P1_MUX (CLKID_MEDIA_BASE + 22)
#define CLKID_HEVC_P1_DIV (CLKID_MEDIA_BASE + 23)
#define CLKID_HEVC_P1_GATE (CLKID_MEDIA_BASE + 24)
#define CLKID_HEVC_P1_COMP (CLKID_MEDIA_BASE + 25)
#define CLKID_HEVC_MUX (CLKID_MEDIA_BASE + 26)
#define CLKID_VPU_P0_MUX (CLKID_MEDIA_BASE + 27)
#define CLKID_VPU_P0_DIV (CLKID_MEDIA_BASE + 28)
#define CLKID_VPU_P0_GATE (CLKID_MEDIA_BASE + 29)
#define CLKID_VPU_P0_COMP (CLKID_MEDIA_BASE + 30)
#define CLKID_VPU_P1_MUX (CLKID_MEDIA_BASE + 31)
#define CLKID_VPU_P1_DIV (CLKID_MEDIA_BASE + 32)
#define CLKID_VPU_P1_GATE (CLKID_MEDIA_BASE + 33)
#define CLKID_VPU_P1_COMP (CLKID_MEDIA_BASE + 34)
#define CLKID_VPU_MUX (CLKID_MEDIA_BASE + 35)

#define CLKID_MISC_BASE (CLKID_MEDIA_BASE + 36) /*96+4+9+36*/
#define CLKID_VDIN_MEAS_MUX (CLKID_MISC_BASE + 0)
#define CLKID_VDIN_MEAS_DIV (CLKID_MISC_BASE + 1)
#define CLKID_VDIN_MEAS_GATE (CLKID_MISC_BASE + 2)
#define CLKID_VDIN_MEAS_COMP (CLKID_MISC_BASE + 3)
#define CLKID_AMCLK_MUX (CLKID_MISC_BASE + 4)
#define CLKID_AMCLK_DIV (CLKID_MISC_BASE + 5)
#define CLKID_AMCLK_GATE (CLKID_MISC_BASE + 6)
#define CLKID_AMCLK_COMP (CLKID_MISC_BASE + 7)
#define CLKID_I958_MUX (CLKID_MISC_BASE + 8)
#define CLKID_I958_DIV (CLKID_MISC_BASE + 9)
#define CLKID_I958_GATE (CLKID_MISC_BASE + 10)
#define CLKID_I958_COMP (CLKID_MISC_BASE + 11)
#define CLKID_PCM_MCLK_MUX (CLKID_MISC_BASE + 12)
#define CLKID_PCM_MCLK_DIV (CLKID_MISC_BASE + 13)
#define CLKID_PCM_MCLK_GATE (CLKID_MISC_BASE + 14)
#define CLKID_PCM_MCLK_COMP (CLKID_MISC_BASE + 15)
#define CLKID_PCM_SCLK_DIV (CLKID_MISC_BASE + 16)
#define CLKID_PCM_SCLK_GATE (CLKID_MISC_BASE + 17)
#define CLKID_I958_COMP_SPDIF (CLKID_MISC_BASE + 18)

#define NR_CLKS		165 /*96+4+9+36+18*/


#endif /* __MESON8B_CLKC_H */