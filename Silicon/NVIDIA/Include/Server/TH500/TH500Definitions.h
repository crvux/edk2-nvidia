/** @file
*
*  Copyright (c) 2020-2022, NVIDIA CORPORATION. All rights reserved.
*
*  SPDX-License-Identifier: BSD-2-Clause-Patent
*
**/

#ifndef __TH500_DEFINES_H__
#define __TH500_DEFINES_H__

#define TH500_BL_CARVEOUT_OFFSET  0x89F8

// SOCKETS
#define TH500_PRIMARY_SOCKET  0
#define TH500_MAX_SOCKETS     4

// SBSA ACS
#define ARMARCH_TMR_HYPVIRT_PPI  28

// UART0
#define TH500_UART0_INTR  0xCA

// ETHERNET
#define TH500_ETHERNET_BASE_ADDR  0x03B40000
#define TH500_ETHERNET_CAR_SIZE   0x00000100
#define TH500_ETHERNET_INTR       0xFA

// LIC SW IO0 for EINJ
#define TH500_SW_IO0_BASE  0x03F00000

// LIC SW IO1 for GPU _RST
#define TH500_SW_IO1_BASE_SOCKET_0  0x000003F10000ULL
#define TH500_SW_IO1_BASE_SOCKET_1  0x100003F10000ULL
#define TH500_SW_IO1_BASE_SOCKET_2  0x200003F10000ULL
#define TH500_SW_IO1_BASE_SOCKET_3  0x300003F10000ULL
#define TH500_SW_IO1_SIZE           0x1000

// LIC SW IO2 for GENERIC EVENT DEVICE (GED)
#define TH500_SW_IO2_BASE  0x03F20000
#define TH500_SW_IO2_SIZE  0x1000
#define TH500_SW_IO2_INTR  0xE2

// LIC SW IO3 for PCIe DPC
#define TH500_SW_IO3_BASE_SOCKET_0  0x000003F30000ULL
#define TH500_SW_IO3_BASE_SOCKET_1  0x100003F30000ULL
#define TH500_SW_IO3_BASE_SOCKET_2  0x200003F30000ULL
#define TH500_SW_IO3_BASE_SOCKET_3  0x300003F30000ULL
#define TH500_SW_IO3_SIZE           0x1000
#define TH500_SW_IO3_INTR_SOCKET_0  227
#define TH500_SW_IO3_INTR_SOCKET_1  547
#define TH500_SW_IO3_INTR_SOCKET_2  867
#define TH500_SW_IO3_INTR_SOCKET_3  4291

// LIC SW IO4 for PCIE _OST()
#define TH500_SW_IO4_BASE_SOCKET_0  0x000003F40000ULL
#define TH500_SW_IO4_BASE_SOCKET_1  0x100003F40000ULL
#define TH500_SW_IO4_BASE_SOCKET_2  0x200003F40000ULL
#define TH500_SW_IO4_BASE_SOCKET_3  0x300003F40000ULL
#define TH500_SW_IO4_SIZE           0x1000
#define TH500_SW_IO4_INTR_SOCKET_0  228
#define TH500_SW_IO4_INTR_SOCKET_1  548
#define TH500_SW_IO4_INTR_SOCKET_2  868
#define TH500_SW_IO4_INTR_SOCKET_3  4292

// PCIE
#define TH500_PCIE_ADDRESS_BITS  49

// GIC
#define TH500_GIC_DISTRIBUTOR_BASE             0x22000000
#define TH500_GIC_REDISTRIBUTOR_BASE_SOCKET_0  0x000022080000ULL
#define TH500_GIC_REDISTRIBUTOR_BASE_SOCKET_1  0x100022080000ULL
#define TH500_GIC_REDISTRIBUTOR_BASE_SOCKET_2  0x200022080000ULL
#define TH500_GIC_REDISTRIBUTOR_BASE_SOCKET_3  0x300022080000ULL
#define TH500_GIC_REDISTRIBUTOR_INSTANCES      84

// GIC ITS
#define TH500_GIC_ITS_BASE  0x22040000

// WDT
#define TH500_WDT_CTRL_BASE   0x0C6A9000
#define TH500_WDT_RFRSH_BASE  0x0C6A8000

// SCRATCH
#define TH500_SCRATCH_BASE_SOCKET_0  0x00000C390000ULL
#define TH500_SCRATCH_BASE_SOCKET_1  0x10000C390000ULL
#define TH500_SCRATCH_BASE_SOCKET_2  0x20000C390000ULL
#define TH500_SCRATCH_BASE_SOCKET_3  0x30000C390000ULL
#define TH500_SCRATCH_SIZE           SIZE_64KB

// CBB FABRIC
#define TH500_CBB_FABRIC_BASE_SOCKET_0  0x000013a00000ULL
#define TH500_CBB_FABRIC_BASE_SOCKET_1  0x100013a00000ULL
#define TH500_CBB_FABRIC_BASE_SOCKET_2  0x200013a00000ULL
#define TH500_CBB_FABRIC_BASE_SOCKET_3  0x300013a00000ULL
#define TH500_CBB_FABRIC_SIZE           0x10000
#define TH500_CBB_FABRIC_32BIT_LOW      0x0
#define TH500_CBB_FABRIC_32BIT_HIGH     0x4
#define TH500_CBB_FABRIC_32BIT_SIZE     0x8
#define TH500_CBB_FABRIC_64BIT_LOW      0x10
#define TH500_CBB_FABRIC_64BIT_HIGH     0x14
#define TH500_CBB_FABRIC_64BIT_SIZE     0x18

#define TH500_VDM_SIZE   0x10000000
#define TH500_ECAM_SIZE  0x10000000

// MSS
#define TH500_MSS_BASE_SOCKET_0     0x0000004040000
#define TH500_MSS_BASE_SOCKET_1     0x100004040000
#define TH500_MSS_BASE_SOCKET_2     0x200004040000
#define TH500_MSS_BASE_SOCKET_3     0x300004040000
#define TH500_MSS_SIZE              0x20000
#define TH500_MSS_C2C_MODE          0xC910
#define TH500_MSS_C2C_MODE_ONE_GPU  0x0
#define TH500_MSS_C2C_MODE_TWO_GPU  0x1

#define TH500_GPU_PXM_DOMAIN_START       4
#define TH500_GPU_HBM_PXM_DOMAIN_START   8
#define TH500_GPU_MAX_NR_MEM_PARTITIONS  8
#define TH500_GPU_HBM_PXM_DOMAIN_START_FOR_GPU_ID(gpuId)  (TH500_GPU_HBM_PXM_DOMAIN_START + ((gpuId) * TH500_GPU_MAX_NR_MEM_PARTITIONS))
#define TH500_GPU_MAX_PXM_DOMAINS  ((PcdGet32 (PcdTegraMaxSockets)) * TH500_GPU_MAX_NR_MEM_PARTITIONS)

#endif //__TH500_DEFINES_H__
