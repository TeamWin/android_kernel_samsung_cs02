/************************************************************************************************/
/*                                                                                              */
/*  Copyright 2013  Broadcom Corporation                                                        */
/*                                                                                              */
/*     Unless you and Broadcom execute a separate written software license agreement governing  */
/*     use of this software, this software is licensed to you under the terms of the GNU        */
/*     General Public License version 2 (the GPL), available at                                 */
/*                                                                                              */
/*          http://www.broadcom.com/licenses/GPLv2.php                                          */
/*                                                                                              */
/*     with the following added to such license:                                                */
/*                                                                                              */
/*     As a special exception, the copyright holders of this software give you permission to    */
/*     link this software with independent modules, and to copy and distribute the resulting    */
/*     executable under terms of your choice, provided that you also meet, for each linked      */
/*     independent module, the terms and conditions of the license of that module.              */
/*     An independent module is a module which is not derived from this software.  The special  */
/*     exception does not apply to any modifications of the software.                           */
/*                                                                                              */
/*     Notwithstanding the above, under no circumstances may you combine this software in any   */
/*     way with any other Broadcom software provided under a license other than the GPL,        */
/*     without Broadcom's express prior written consent.                                        */
/*                                                                                              */
/*     Date     : Generated on 6/27/2013 16:58:22                                             */
/*     RDB file : //JAVA/                                                                   */
/************************************************************************************************/

#ifndef __BRCM_RDB_HSDPA_TURBO_DECODER_MODULE_H__
#define __BRCM_RDB_HSDPA_TURBO_DECODER_MODULE_H__

#define HSDPA_TURBO_DECODER_MODULE_CONFIG_OFFSET                          0x00000000
#define HSDPA_TURBO_DECODER_MODULE_CONFIG_TYPE                            UInt32
#define HSDPA_TURBO_DECODER_MODULE_CONFIG_RESERVED_MASK                   0x00000000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_USEEARLYTERM_SHIFT           31
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_USEEARLYTERM_MASK            0x80000000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_TINTLVPRIMENUM_SHIFT         22
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_TINTLVPRIMENUM_MASK          0x7FC00000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_TINTLVROWCNTTSPEC_SHIFT      20
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_TINTLVROWCNTTSPEC_MASK       0x00300000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_TINTLVCOLCNTIND_SHIFT        18
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_TINTLVCOLCNTIND_MASK         0x000C0000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_KISRXC_SHIFT                 17
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_KISRXC_MASK                  0x00020000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_NUMOFPRECODEFILLBITS_SHIFT   15
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_NUMOFPRECODEFILLBITS_MASK    0x00018000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_NUMOFPRECODEDBLKS_SHIFT      13
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_NUMOFPRECODEDBLKS_MASK       0x00006000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_PRECODEDBLKSZ_SHIFT          0
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG_PRECODEDBLKSZ_MASK           0x00001FFF

#define HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR_OFFSET                     0x00000004
#define HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR_TYPE                       UInt32
#define HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR_RESERVED_MASK              0x80008000
#define    HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR_P1ADDRPTR_SHIFT         16
#define    HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR_P1ADDRPTR_MASK          0x7FFF0000
#define    HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR_XADDRPTR_SHIFT          0
#define    HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR_XADDRPTR_MASK           0x00007FFF

#define HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_OFFSET                        0x00000008
#define HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_TYPE                          UInt32
#define HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_RESERVED_MASK                 0x00008000
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_EXTRINSICSCALEEN_SHIFT     31
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_EXTRINSICSCALEEN_MASK      0x80000000
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_STARTMECH_SHIFT            30
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_STARTMECH_MASK             0x40000000
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_IRMEMSEL_SHIFT             29
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_IRMEMSEL_MASK              0x20000000
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_MACMUXMODE_SHIFT           27
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_MACMUXMODE_MASK            0x18000000
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_PERBLKRATEMTCHACTIVE_SHIFT 26
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_PERBLKRATEMTCHACTIVE_MASK  0x04000000
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_CRCMODE_SHIFT              25
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_CRCMODE_MASK               0x02000000
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_RATEMTCHACTIVE_SHIFT       24
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_RATEMTCHACTIVE_MASK        0x01000000
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_CPCNUMTRNSPTFORMAT_SHIFT   22
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_CPCNUMTRNSPTFORMAT_MASK    0x00C00000
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_MAXITERS_SHIFT             16
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_MAXITERS_MASK              0x003F0000
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_P2ADDRPTR_SHIFT            0
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR_P2ADDRPTR_MASK             0x00007FFF

#define HSDPA_TURBO_DECODER_MODULE_OUTDATAPNTR_OFFSET                     0x0000000C
#define HSDPA_TURBO_DECODER_MODULE_OUTDATAPNTR_TYPE                       UInt32
#define HSDPA_TURBO_DECODER_MODULE_OUTDATAPNTR_RESERVED_MASK              0x00000000
#define    HSDPA_TURBO_DECODER_MODULE_OUTDATAPNTR_OUTPUTPTR_SHIFT         0
#define    HSDPA_TURBO_DECODER_MODULE_OUTDATAPNTR_OUTPUTPTR_MASK          0xFFFFFFFF

#define HSDPA_TURBO_DECODER_MODULE_RMEINI_OFFSET                          0x00000010
#define HSDPA_TURBO_DECODER_MODULE_RMEINI_TYPE                            UInt32
#define HSDPA_TURBO_DECODER_MODULE_RMEINI_RESERVED_MASK                   0x00000000
#define    HSDPA_TURBO_DECODER_MODULE_RMEINI_P2EINI_SHIFT                 16
#define    HSDPA_TURBO_DECODER_MODULE_RMEINI_P2EINI_MASK                  0xFFFF0000
#define    HSDPA_TURBO_DECODER_MODULE_RMEINI_P1EINI_SHIFT                 0
#define    HSDPA_TURBO_DECODER_MODULE_RMEINI_P1EINI_MASK                  0x0000FFFF

#define HSDPA_TURBO_DECODER_MODULE_RMP1_OFFSET                            0x00000014
#define HSDPA_TURBO_DECODER_MODULE_RMP1_TYPE                              UInt32
#define HSDPA_TURBO_DECODER_MODULE_RMP1_RESERVED_MASK                     0x00000000
#define    HSDPA_TURBO_DECODER_MODULE_RMP1_P1EPLUS_SHIFT                  16
#define    HSDPA_TURBO_DECODER_MODULE_RMP1_P1EPLUS_MASK                   0xFFFF0000
#define    HSDPA_TURBO_DECODER_MODULE_RMP1_P1EMINUS_SHIFT                 0
#define    HSDPA_TURBO_DECODER_MODULE_RMP1_P1EMINUS_MASK                  0x0000FFFF

#define HSDPA_TURBO_DECODER_MODULE_RMP2_OFFSET                            0x00000018
#define HSDPA_TURBO_DECODER_MODULE_RMP2_TYPE                              UInt32
#define HSDPA_TURBO_DECODER_MODULE_RMP2_RESERVED_MASK                     0x00000000
#define    HSDPA_TURBO_DECODER_MODULE_RMP2_P2EPLUS_SHIFT                  16
#define    HSDPA_TURBO_DECODER_MODULE_RMP2_P2EPLUS_MASK                   0xFFFF0000
#define    HSDPA_TURBO_DECODER_MODULE_RMP2_P2EMINUS_SHIFT                 0
#define    HSDPA_TURBO_DECODER_MODULE_RMP2_P2EMINUS_MASK                  0x0000FFFF

#define HSDPA_TURBO_DECODER_MODULE_HOUTDATAPNTR_OFFSET                    0x0000001C
#define HSDPA_TURBO_DECODER_MODULE_HOUTDATAPNTR_TYPE                      UInt32
#define HSDPA_TURBO_DECODER_MODULE_HOUTDATAPNTR_RESERVED_MASK             0x00000000
#define    HSDPA_TURBO_DECODER_MODULE_HOUTDATAPNTR_MACRLCHDRPTR_SHIFT     0
#define    HSDPA_TURBO_DECODER_MODULE_HOUTDATAPNTR_MACRLCHDRPTR_MASK      0xFFFFFFFF

#define HSDPA_TURBO_DECODER_MODULE_RLCPDUMODEIND_OFFSET                   0x00000020
#define HSDPA_TURBO_DECODER_MODULE_RLCPDUMODEIND_TYPE                     UInt32
#define HSDPA_TURBO_DECODER_MODULE_RLCPDUMODEIND_RESERVED_MASK            0xFF000000
#define    HSDPA_TURBO_DECODER_MODULE_RLCPDUMODEIND_RLCPDUMODEINDQID0TO7_SHIFT 16
#define    HSDPA_TURBO_DECODER_MODULE_RLCPDUMODEIND_RLCPDUMODEINDQID0TO7_MASK 0x00FF0000
#define    HSDPA_TURBO_DECODER_MODULE_RLCPDUMODEIND_RLCPDUMODEINDCTX0TO15_SHIFT 0
#define    HSDPA_TURBO_DECODER_MODULE_RLCPDUMODEIND_RLCPDUMODEINDCTX0TO15_MASK 0x0000FFFF

#define HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_OFFSET                     0x00000024
#define HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_TYPE                       UInt32
#define HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_RESERVED_MASK              0xE00880C0
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_HDEARLYTERMIND_SHIFT    20
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_HDEARLYTERMIND_MASK     0x1FF00000
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_LASTCPCFORMAT_SHIFT     17
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_LASTCPCFORMAT_MASK      0x00060000
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_IR_MEM_SEL_SHIFT        16
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_IR_MEM_SEL_MASK         0x00010000
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_SDEARLYTERMIND_SHIFT    14
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_SDEARLYTERMIND_MASK     0x00004000
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_LASTITERINDEX_SHIFT     8
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_LASTITERINDEX_MASK      0x00003F00
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_STARTERROR_SHIFT        5
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_STARTERROR_MASK         0x00000020
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_DMAWRTIMEERROR_SHIFT    4
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_DMAWRTIMEERROR_MASK     0x00000010
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_DMAINTFCSTATUS_SHIFT    3
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_DMAINTFCSTATUS_MASK     0x00000008
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_DECODERSTATUS_SHIFT     2
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_DECODERSTATUS_MASK      0x00000004
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_QUEUESTATUS_SHIFT       1
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_QUEUESTATUS_MASK        0x00000002
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_CRCPASSFAILIND_SHIFT    0
#define    HSDPA_TURBO_DECODER_MODULE_ABORTSTATUS_CRCPASSFAILIND_MASK     0x00000001

#define HSDPA_TURBO_DECODER_MODULE_MACSIDLUTSETUP_OFFSET                  0x00000028
#define HSDPA_TURBO_DECODER_MODULE_MACSIDLUTSETUP_TYPE                    UInt32
#define HSDPA_TURBO_DECODER_MODULE_MACSIDLUTSETUP_RESERVED_MASK           0xFFFFFEF8
#define    HSDPA_TURBO_DECODER_MODULE_MACSIDLUTSETUP_CTXBIT_SHIFT         8
#define    HSDPA_TURBO_DECODER_MODULE_MACSIDLUTSETUP_CTXBIT_MASK          0x00000100
#define    HSDPA_TURBO_DECODER_MODULE_MACSIDLUTSETUP_QIDSEL_SHIFT         0
#define    HSDPA_TURBO_DECODER_MODULE_MACSIDLUTSETUP_QIDSEL_MASK          0x00000007

#define HSDPA_TURBO_DECODER_MODULE_MACSIDLUTACCESS_OFFSET                 0x0000002C
#define HSDPA_TURBO_DECODER_MODULE_MACSIDLUTACCESS_TYPE                   UInt32
#define HSDPA_TURBO_DECODER_MODULE_MACSIDLUTACCESS_RESERVED_MASK          0xE000E000
#define    HSDPA_TURBO_DECODER_MODULE_MACSIDLUTACCESS_SIDLUTVALUENPLUS1_SHIFT 16
#define    HSDPA_TURBO_DECODER_MODULE_MACSIDLUTACCESS_SIDLUTVALUENPLUS1_MASK 0x1FFF0000
#define    HSDPA_TURBO_DECODER_MODULE_MACSIDLUTACCESS_SIDLUTVALUEN_SHIFT  0
#define    HSDPA_TURBO_DECODER_MODULE_MACSIDLUTACCESS_SIDLUTVALUEN_MASK   0x00001FFF

#define HSDPA_TURBO_DECODER_MODULE_MACSIDLUTINDICATOR_OFFSET              0x00000030
#define HSDPA_TURBO_DECODER_MODULE_MACSIDLUTINDICATOR_TYPE                UInt32
#define HSDPA_TURBO_DECODER_MODULE_MACSIDLUTINDICATOR_RESERVED_MASK       0x00000000
#define    HSDPA_TURBO_DECODER_MODULE_MACSIDLUTINDICATOR_MACSIDLUTUPDATEIND_SHIFT 0
#define    HSDPA_TURBO_DECODER_MODULE_MACSIDLUTINDICATOR_MACSIDLUTUPDATEIND_MASK 0xFFFFFFFF

#define HSDPA_TURBO_DECODER_MODULE_MISCTEST_OFFSET                        0x00000034
#define HSDPA_TURBO_DECODER_MODULE_MISCTEST_TYPE                          UInt32
#define HSDPA_TURBO_DECODER_MODULE_MISCTEST_RESERVED_MASK                 0xFFFFFFF8
#define    HSDPA_TURBO_DECODER_MODULE_MISCTEST_HARQID_SHIFT               0
#define    HSDPA_TURBO_DECODER_MODULE_MISCTEST_HARQID_MASK                0x00000007

#define HSDPA_TURBO_DECODER_MODULE_UEID_OFFSET                            0x00000038
#define HSDPA_TURBO_DECODER_MODULE_UEID_TYPE                              UInt32
#define HSDPA_TURBO_DECODER_MODULE_UEID_RESERVED_MASK                     0xFFFE0000
#define    HSDPA_TURBO_DECODER_MODULE_UEID_UEID_BIT_ORDER_SHIFT           16
#define    HSDPA_TURBO_DECODER_MODULE_UEID_UEID_BIT_ORDER_MASK            0x00010000
#define    HSDPA_TURBO_DECODER_MODULE_UEID_UEID_SHIFT                     0
#define    HSDPA_TURBO_DECODER_MODULE_UEID_UEID_MASK                      0x0000FFFF

#define HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_OFFSET                    0x00000040
#define HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_TYPE                      UInt32
#define HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_RESERVED_MASK             0xFFF0F800
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_ENAPBIRBFRWRITES_SHIFT 19
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_ENAPBIRBFRWRITES_MASK  0x00080000
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_DUMPIRMEMORY_SHIFT     18
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_DUMPIRMEMORY_MASK      0x00040000
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_OUTPUTCORRUPTDATA_SHIFT 17
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_OUTPUTCORRUPTDATA_MASK 0x00020000
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_ENDIANSELECT_SHIFT     16
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_ENDIANSELECT_MASK      0x00010000
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_ALLWDDMAWRTIME_RB_11111010000_SHIFT 0
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS_ALLWDDMAWRTIME_RB_11111010000_MASK 0x000007FF

#define HSDPA_TURBO_DECODER_MODULE_CONFIG2_OFFSET                         0x00000044
#define HSDPA_TURBO_DECODER_MODULE_CONFIG2_TYPE                           UInt32
#define HSDPA_TURBO_DECODER_MODULE_CONFIG2_RESERVED_MASK                  0x00000000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_USECRCBASEDEARLYTERM_SHIFT  31
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_USECRCBASEDEARLYTERM_MASK   0x80000000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_TINTLVPRIMENUM_SHIFT        22
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_TINTLVPRIMENUM_MASK         0x7FC00000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_TINTLVROWCNTTSPEC_SHIFT     20
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_TINTLVROWCNTTSPEC_MASK      0x00300000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_TINTLVCOLCNTIND_SHIFT       18
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_TINTLVCOLCNTIND_MASK        0x000C0000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_KISRXC_SHIFT                17
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_KISRXC_MASK                 0x00020000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_NUMOFPRECODEFILLBITS_SHIFT  15
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_NUMOFPRECODEFILLBITS_MASK   0x00018000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_NUMOFPRECODEDBLKS_SHIFT     13
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_NUMOFPRECODEDBLKS_MASK      0x00006000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_PRECODEDBLKSZ_SHIFT         0
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG2_PRECODEDBLKSZ_MASK          0x00001FFF

#define HSDPA_TURBO_DECODER_MODULE_CONFIG3_OFFSET                         0x00000048
#define HSDPA_TURBO_DECODER_MODULE_CONFIG3_TYPE                           UInt32
#define HSDPA_TURBO_DECODER_MODULE_CONFIG3_RESERVED_MASK                  0x00000000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_USECRCBASEDEARLYTERM_SHIFT  31
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_USECRCBASEDEARLYTERM_MASK   0x80000000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_TINTLVPRIMENUM_SHIFT        22
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_TINTLVPRIMENUM_MASK         0x7FC00000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_TINTLVROWCNTTSPEC_SHIFT     20
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_TINTLVROWCNTTSPEC_MASK      0x00300000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_TINTLVCOLCNTIND_SHIFT       18
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_TINTLVCOLCNTIND_MASK        0x000C0000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_KISRXC_SHIFT                17
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_KISRXC_MASK                 0x00020000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_NUMOFPRECODEFILLBITS_SHIFT  15
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_NUMOFPRECODEFILLBITS_MASK   0x00018000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_NUMOFPRECODEDBLKS_SHIFT     13
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_NUMOFPRECODEDBLKS_MASK      0x00006000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_PRECODEDBLKSZ_SHIFT         0
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG3_PRECODEDBLKSZ_MASK          0x00001FFF

#define HSDPA_TURBO_DECODER_MODULE_CONFIG4_OFFSET                         0x0000004C
#define HSDPA_TURBO_DECODER_MODULE_CONFIG4_TYPE                           UInt32
#define HSDPA_TURBO_DECODER_MODULE_CONFIG4_RESERVED_MASK                  0x00000000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_USECRCBASEDEARLYTERM_SHIFT  31
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_USECRCBASEDEARLYTERM_MASK   0x80000000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_TINTLVPRIMENUM_SHIFT        22
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_TINTLVPRIMENUM_MASK         0x7FC00000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_TINTLVROWCNTTSPEC_SHIFT     20
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_TINTLVROWCNTTSPEC_MASK      0x00300000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_TINTLVCOLCNTIND_SHIFT       18
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_TINTLVCOLCNTIND_MASK        0x000C0000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_KISRXC_SHIFT                17
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_KISRXC_MASK                 0x00020000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_NUMOFPRECODEFILLBITS_SHIFT  15
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_NUMOFPRECODEFILLBITS_MASK   0x00018000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_NUMOFPRECODEDBLKS_SHIFT     13
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_NUMOFPRECODEDBLKS_MASK      0x00006000
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_PRECODEDBLKSZ_SHIFT         0
#define    HSDPA_TURBO_DECODER_MODULE_CONFIG4_PRECODEDBLKSZ_MASK          0x00001FFF

#define HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR1_OFFSET                    0x00000050
#define HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR1_TYPE                      UInt32
#define HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR1_RESERVED_MASK             0x80008000
#define    HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR1_P1ADDRPTR1_SHIFT       16
#define    HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR1_P1ADDRPTR1_MASK        0x7FFF0000
#define    HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR1_XADDRPTR1_SHIFT        0
#define    HSDPA_TURBO_DECODER_MODULE_SYSPAR1PNTR1_XADDRPTR1_MASK         0x00007FFF

#define HSDPA_TURBO_DECODER_MODULE_PAR2PNTR1_OFFSET                       0x00000054
#define HSDPA_TURBO_DECODER_MODULE_PAR2PNTR1_TYPE                         UInt32
#define HSDPA_TURBO_DECODER_MODULE_PAR2PNTR1_RESERVED_MASK                0xFFFF8000
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR1_P2ADDRPTR1_SHIFT          0
#define    HSDPA_TURBO_DECODER_MODULE_PAR2PNTR1_P2ADDRPTR1_MASK           0x00007FFF

#define HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_OFFSET                   0x00000058
#define HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_TYPE                     UInt32
#define HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_RESERVED_MASK            0x00000000
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_CORE312MHZCLOCKIND_SHIFT 31
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_CORE312MHZCLOCKIND_MASK 0x80000000
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_MACMUXMODEEXTENSION_SHIFT 30
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_MACMUXMODEEXTENSION_MASK 0x40000000
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_MODEXTRINSICSCALEEN_SHIFT 29
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_MODEXTRINSICSCALEEN_MASK 0x20000000
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_NEWBETAWARMUPEN_SHIFT 28
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_NEWBETAWARMUPEN_MASK  0x10000000
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_EARLYTERMMINITER_SHIFT 22
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_EARLYTERMMINITER_MASK 0x0FC00000
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_EARLYTERMMINLLRTH_SHIFT 8
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_EARLYTERMMINLLRTH_MASK 0x003FFF00
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_EARLYTERMMAXLLRTH_SHIFT 1
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_EARLYTERMMAXLLRTH_MASK 0x000000FE
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_ENABLESDANDHDTERM_SHIFT 0
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS2_ENABLESDANDHDTERM_MASK 0x00000001

#define HSDPA_TURBO_DECODER_MODULE_ALTPARAMS1_OFFSET                      0x0000005C
#define HSDPA_TURBO_DECODER_MODULE_ALTPARAMS1_TYPE                        UInt32
#define HSDPA_TURBO_DECODER_MODULE_ALTPARAMS1_RESERVED_MASK               0x7FE00000
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS1_ALTPARAMS1EN_SHIFT       31
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS1_ALTPARAMS1EN_MASK        0x80000000
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS1_NUMOFPRECODEFILLBITSALT_SHIFT 17
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS1_NUMOFPRECODEFILLBITSALT_MASK 0x001E0000
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS1_P1EPLUSALT_SHIFT         0
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS1_P1EPLUSALT_MASK          0x0001FFFF

#define HSDPA_TURBO_DECODER_MODULE_ALTPARAMS2_OFFSET                      0x00000060
#define HSDPA_TURBO_DECODER_MODULE_ALTPARAMS2_TYPE                        UInt32
#define HSDPA_TURBO_DECODER_MODULE_ALTPARAMS2_RESERVED_MASK               0x7FE00000
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS2_ALTPARAMS2EN_SHIFT       31
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS2_ALTPARAMS2EN_MASK        0x80000000
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS2_NUMOFPRECODEDBLKSALT_SHIFT 17
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS2_NUMOFPRECODEDBLKSALT_MASK 0x001E0000
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS2_P1EMINUSALT_SHIFT        0
#define    HSDPA_TURBO_DECODER_MODULE_ALTPARAMS2_P1EMINUSALT_MASK         0x0001FFFF

#define HSDPA_TURBO_DECODER_MODULE_STATICPARAMS3_OFFSET                   0x0000007C
#define HSDPA_TURBO_DECODER_MODULE_STATICPARAMS3_TYPE                     UInt32
#define HSDPA_TURBO_DECODER_MODULE_STATICPARAMS3_RESERVED_MASK            0xFFFFFF00
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS3_HTDMMAXTTIMEM_RH_1B_SHIFT 0
#define    HSDPA_TURBO_DECODER_MODULE_STATICPARAMS3_HTDMMAXTTIMEM_RH_1B_MASK 0x000000FF

#endif /* __BRCM_RDB_HSDPA_TURBO_DECODER_MODULE_H__ */


