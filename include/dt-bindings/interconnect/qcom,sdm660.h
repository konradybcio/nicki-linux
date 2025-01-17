/* SPDX-License-Identifier: GPL-2.0 */
/*
 * SDM660 interconnect IDs
 *
 * Copyright (c) 2020, Konrad Dybcio
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_SDM660_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_SDM660_H

/* A2NOC */
#define MASTER_IPA			0
#define MASTER_CNOC_A2NOC			1
#define MASTER_SDCC_1		2
#define MASTER_SDCC_2		3
#define MASTER_BLSP_1			4
#define MASTER_BLSP_2			5
#define MASTER_UFS			6
#define MASTER_USB_HS			7
#define MASTER_USB3			8
#define MASTER_CRYPTO_C0			9
#define SLAVE_A2NOC_SNOC			10

/* BIMC */
#define MASTER_GNOC_BIMC			0
#define MASTER_OXILI			1
#define MASTER_MNOC_BIMC			2
#define MASTER_SNOC_BIMC		3
#define MASTER_PIMEM			4
#define SLAVE_EBI			5
#define SLAVE_HMSS_L3			6
#define SLAVE_BIMC_SNOC		7

/* CNOC */
#define MASTER_SNOC_CNOC			0
#define MASTER_QDSS_DAP		1
#define SLAVE_CNOC_A2NOC		2
#define SLAVE_MPM			3
#define SLAVE_PMIC_ARB			4
#define SLAVE_TLMM_NORTH			5
#define SLAVE_TCSR			6
#define SLAVE_PIMEM_CFG			7
#define SLAVE_IMEM_CFG			8
#define SLAVE_MESSAGE_RAM			9
#define SLAVE_GLM			10
#define SLAVE_BIMC_CFG			11
#define SLAVE_PRNG			12
#define SLAVE_SPDM			13
#define SLAVE_QDSS_CFG			14
#define SLAVE_CNOC_MNOC_CFG			15
#define SLAVE_SNOC_CFG			16
#define SLAVE_QM_CFG			17
#define SLAVE_CLK_CTL			18
#define SLAVE_MSS_CFG			19
#define SLAVE_TLMM_SOUTH			20
#define SLAVE_UFS_CFG			21
#define SLAVE_A2NOC_CFG			22
#define SLAVE_A2NOC_SMMU_CFG			23
#define SLAVE_GPUSS_CFG			24
#define SLAVE_AHB2PHY			25
#define SLAVE_BLSP_1			26
#define SLAVE_SDCC_1			27
#define SLAVE_SDCC_2		28
#define SLAVE_TLMM_CENTER		29
#define SLAVE_BLSP_2			30
#define SLAVE_PDM			31
#define SLAVE_CNOC_MNOC_MMSS_CFG			32
#define SLAVE_USB_HS		33
#define SLAVE_USB3_0			34
#define SLAVE_SRVC_CNOC			35

/* GNOC */
#define MASTER_APSS_PROC			0
#define SLAVE_GNOC_BIMC		1
#define SLAVE_GNOC_SNOC		2

/* MNOC */
#define MASTER_CPP			0
#define MASTER_JPEG		1
#define MASTER_MDP_P0		2
#define MASTER_MDP_P1			3
#define MASTER_VENUS			4
#define MASTER_VFE			5
#define SLAVE_MNOC_BIMC			6

/* MNOC_AHB */
#define MASTER_CNOC_MNOC_MMSS_CFG			0
#define MASTER_CNOC_MNOC_CFG		1
#define SLAVE_CAMERA_CFG		2
#define SLAVE_CAMERA_THROTTLE_CFG			3
#define SLAVE_MISC_CFG			4
#define SLAVE_VENUS_THROTTLE_CFG			5
#define SLAVE_VENUS_CFG			6
#define SLAVE_MMSS_CLK_XPU_CFG			7
#define SLAVE_MMSS_CLK_CFG			8
#define SLAVE_MNOC_MPU_CFG			9
#define SLAVE_DISPLAY_CFG			10
#define SLAVE_CSI_PHY_CFG			11
#define SLAVE_DISPLAY_THROTTLE_CFG			12
#define SLAVE_SMMU_CFG		13
#define SLAVE_SRVC_MNOC			14

/* SNOC */
#define MASTER_QDSS_ETR			0
#define MASTER_QDSS_BAM		1
#define MASTER_SNOC_CFG		2
#define MASTER_BIMC_SNOC			3
#define MASTER_A2NOC_SNOC			4
#define MASTER_GNOC_SNOC			5
#define SLAVE_HMSS			6
#define SLAVE_LPASS			7
#define SLAVE_WLAN			8
#define SLAVE_CDSP			9
#define SLAVE_IPA			10
#define SLAVE_SNOC_BIMC			11
#define SLAVE_SNOC_CNOC			12
#define SLAVE_IMEM		13
#define SLAVE_PIMEM			14
#define SLAVE_QDSS_STM		15
#define SLAVE_SRVC_SNOC			16

#endif
