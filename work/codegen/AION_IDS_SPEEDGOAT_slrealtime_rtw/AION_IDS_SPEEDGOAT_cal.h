#ifndef RTW_HEADER_AION_IDS_SPEEDGOAT_cal_h_
#define RTW_HEADER_AION_IDS_SPEEDGOAT_cal_h_
#include "rtwtypes.h"
#include "AION_IDS_SPEEDGOAT_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct AION_IDS_SPEEDGOAT_cal_type {
  AION_ApplicationBus UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<S1>/Unit Delay'
                                */
  AION_ApplicationBus TmpRTBAtUnitDelayInport1_InitialCondition;
                /* Computed Parameter: TmpRTBAtUnitDelayInport1_InitialCondition
                 * Referenced by: synthesized block
                 */
  CAN_DATATYPE RT2_InitialCondition; /* Computed Parameter: RT2_InitialCondition
                                      * Referenced by: '<S19>/RT2'
                                      */
  real_T IMU2ADCU_CAN_read_P1_Size[2];
                                /* Computed Parameter: IMU2ADCU_CAN_read_P1_Size
                                 * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                 */
  real_T IMU2ADCU_CAN_read_P1;         /* Expression: id
                                        * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                        */
  real_T IMU2ADCU_CAN_read_P2_Size[2];
                                /* Computed Parameter: IMU2ADCU_CAN_read_P2_Size
                                 * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                 */
  real_T IMU2ADCU_CAN_read_P2;         /* Expression: sampleTime
                                        * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                        */
  real_T IMU2ADCU_CAN_read_P3_Size[2];
                                /* Computed Parameter: IMU2ADCU_CAN_read_P3_Size
                                 * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                 */
  real_T IMU2ADCU_CAN_read_P3;         /* Expression: messageType
                                        * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                        */
  real_T IMU2ADCU_CAN_read_P4_Size[2];
                                /* Computed Parameter: IMU2ADCU_CAN_read_P4_Size
                                 * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                 */
  real_T IMU2ADCU_CAN_read_P4[5];    /* Computed Parameter: IMU2ADCU_CAN_read_P4
                                      * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                      */
  real_T IMU2ADCU_CAN_read_P5_Size[2];
                                /* Computed Parameter: IMU2ADCU_CAN_read_P5_Size
                                 * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                 */
  real_T IMU2ADCU_CAN_read_P5;         /* Expression: ptIdx
                                        * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                        */
  real_T IMU2ADCU_CAN_read_P6_Size[2];
                                /* Computed Parameter: IMU2ADCU_CAN_read_P6_Size
                                 * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                 */
  real_T IMU2ADCU_CAN_read_P6;         /* Expression: isFDMod
                                        * Referenced by: '<S11>/IMU2ADCU_CAN_read'
                                        */
  real_T SCU2ADCU_CAN_read_P1_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P1_Size
                                 * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P1;         /* Expression: id
                                        * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                        */
  real_T SCU2ADCU_CAN_read_P2_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P2_Size
                                 * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P2;         /* Expression: sampleTime
                                        * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                        */
  real_T SCU2ADCU_CAN_read_P3_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P3_Size
                                 * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P3;         /* Expression: messageType
                                        * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                        */
  real_T SCU2ADCU_CAN_read_P4_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P4_Size
                                 * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P4[5];    /* Computed Parameter: SCU2ADCU_CAN_read_P4
                                      * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                      */
  real_T SCU2ADCU_CAN_read_P5_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P5_Size
                                 * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P5;         /* Expression: ptIdx
                                        * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                        */
  real_T SCU2ADCU_CAN_read_P6_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P6_Size
                                 * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P6;         /* Expression: isFDMod
                                        * Referenced by: '<S12>/SCU2ADCU_CAN_read'
                                        */
  real_T CANSetup_P1_Size[2];          /* Computed Parameter: CANSetup_P1_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P1;                  /* Expression: id
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P2_Size[2];          /* Computed Parameter: CANSetup_P2_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P2[2];               /* Computed Parameter: CANSetup_P2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P3_Size[2];          /* Computed Parameter: CANSetup_P3_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P3;                  /* Expression: PCISlot
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P4_Size[2];          /* Computed Parameter: CANSetup_P4_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P4;                  /* Expression: port1
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P5_Size[2];          /* Computed Parameter: CANSetup_P5_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P5;                  /* Expression: port2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P6_Size[2];          /* Computed Parameter: CANSetup_P6_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P6;                  /* Expression: port3
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P7_Size[2];          /* Computed Parameter: CANSetup_P7_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P7;                  /* Expression: port4
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P8_Size[2];          /* Computed Parameter: CANSetup_P8_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P8;                  /* Expression: opModeCAN1
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P9_Size[2];          /* Computed Parameter: CANSetup_P9_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P9[4];               /* Expression: usrBdrCAN1
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P10_Size[2];         /* Computed Parameter: CANSetup_P10_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P10[2];              /* Expression: stdAccMaskCAN1
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P11_Size[2];         /* Computed Parameter: CANSetup_P11_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P11[2];              /* Expression: extAccMaskCAN1
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P12_Size[2];         /* Computed Parameter: CANSetup_P12_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P12;                 /* Expression: opModeCAN2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P13_Size[2];         /* Computed Parameter: CANSetup_P13_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P13[4];              /* Expression: usrBdrCAN2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P14_Size[2];         /* Computed Parameter: CANSetup_P14_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P14[2];              /* Expression: stdAccMaskCAN2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P15_Size[2];         /* Computed Parameter: CANSetup_P15_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P15[2];              /* Expression: extAccMaskCAN2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P16_Size[2];         /* Computed Parameter: CANSetup_P16_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P16;                 /* Expression: opModeCAN3
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P17_Size[2];         /* Computed Parameter: CANSetup_P17_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P17[4];              /* Expression: usrBdrCAN3
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P18_Size[2];         /* Computed Parameter: CANSetup_P18_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P18[2];              /* Expression: stdAccMaskCAN3
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P19_Size[2];         /* Computed Parameter: CANSetup_P19_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P19[2];              /* Expression: extAccMaskCAN3
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P20_Size[2];         /* Computed Parameter: CANSetup_P20_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P20;                 /* Expression: opModeCAN4
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P21_Size[2];         /* Computed Parameter: CANSetup_P21_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P21[4];              /* Expression: usrBdrCAN4
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P22_Size[2];         /* Computed Parameter: CANSetup_P22_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P22[2];              /* Expression: stdAccMaskCAN4
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P23_Size[2];         /* Computed Parameter: CANSetup_P23_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P23[2];              /* Expression: extAccMaskCAN4
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P24_Size[2];         /* Computed Parameter: CANSetup_P24_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P24;                 /* Expression: initStruct
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P25_Size[2];         /* Computed Parameter: CANSetup_P25_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P25;                 /* Expression: termStruct
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P26_Size[2];         /* Computed Parameter: CANSetup_P26_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P26[5];              /* Computed Parameter: CANSetup_P26
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P27_Size[2];         /* Computed Parameter: CANSetup_P27_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P27;                 /* Expression: qtyMod
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P28_Size[2];         /* Computed Parameter: CANSetup_P28_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P28[4];              /* Expression: chNo
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P29_Size[2];         /* Computed Parameter: CANSetup_P29_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P29[4];              /* Expression: ptTypes
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P30_Size[2];         /* Computed Parameter: CANSetup_P30_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P30[4];              /* Expression: protlHelpIdx
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P31_Size[2];         /* Computed Parameter: CANSetup_P31_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P31;                 /* Expression: isFDMod
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T ADCU2SCU_Brake_Command_CAN_write_P1_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P1_Size
                  * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P1;/* Expression: id
                                              * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Brake_Command_CAN_write_P2_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P2_Size
                  * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P2;/* Expression: sampleTime
                                              * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Brake_Command_CAN_write_P3_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P3_Size
                  * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P3;/* Expression: messageType
                                              * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Brake_Command_CAN_write_P4_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P4_Size
                  * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P4;/* Expression: enaStatusPort
                                              * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Brake_Command_CAN_write_P5_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P5_Size
                  * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P5[5];
                      /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P5
                       * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                       */
  real_T ADCU2SCU_Brake_Command_CAN_write_P6_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P6_Size
                  * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P6;/* Expression: ptIdx
                                              * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Brake_Command_CAN_write_P7_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P7_Size
                  * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P7;/* Expression: isFDMod
                                              * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Gear_Command_CAN_write_P1_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P1_Size
                   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P1;/* Expression: id
                                             * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T ADCU2SCU_Gear_Command_CAN_write_P2_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P2_Size
                   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P2;/* Expression: sampleTime
                                             * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T ADCU2SCU_Gear_Command_CAN_write_P3_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P3_Size
                   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P3;/* Expression: messageType
                                             * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T ADCU2SCU_Gear_Command_CAN_write_P4_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P4_Size
                   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P4;/* Expression: enaStatusPort
                                             * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T ADCU2SCU_Gear_Command_CAN_write_P5_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P5_Size
                   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P5[5];
                       /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P5
                        * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                        */
  real_T ADCU2SCU_Gear_Command_CAN_write_P6_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P6_Size
                   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P6;/* Expression: ptIdx
                                             * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T ADCU2SCU_Gear_Command_CAN_write_P7_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P7_Size
                   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P7;/* Expression: isFDMod
                                             * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T LegacySerialRead_P1_Size[2];
                                 /* Computed Parameter: LegacySerialRead_P1_Size
                                  * Referenced by: '<S16>/Legacy Serial Read'
                                  */
  real_T LegacySerialRead_P1;          /* Expression: port
                                        * Referenced by: '<S16>/Legacy Serial Read'
                                        */
  real_T LegacySerialRead_P2_Size[2];
                                 /* Computed Parameter: LegacySerialRead_P2_Size
                                  * Referenced by: '<S16>/Legacy Serial Read'
                                  */
  real_T LegacySerialRead_P2;          /* Expression: count
                                        * Referenced by: '<S16>/Legacy Serial Read'
                                        */
  real_T LegacySerialRead_P3_Size[2];
                                 /* Computed Parameter: LegacySerialRead_P3_Size
                                  * Referenced by: '<S16>/Legacy Serial Read'
                                  */
  real_T LegacySerialRead_P3;          /* Expression: dtype
                                        * Referenced by: '<S16>/Legacy Serial Read'
                                        */
  real_T LegacySerialRead_P4_Size[2];
                                 /* Computed Parameter: LegacySerialRead_P4_Size
                                  * Referenced by: '<S16>/Legacy Serial Read'
                                  */
  real_T LegacySerialRead_P4;          /* Expression: sampletime
                                        * Referenced by: '<S16>/Legacy Serial Read'
                                        */
  real_T LegacySerialWrite_P1_Size[2];
                                /* Computed Parameter: LegacySerialWrite_P1_Size
                                 * Referenced by: '<S16>/Legacy Serial Write'
                                 */
  real_T LegacySerialWrite_P1;         /* Expression: port
                                        * Referenced by: '<S16>/Legacy Serial Write'
                                        */
  real_T LegacySerialWrite_P2_Size[2];
                                /* Computed Parameter: LegacySerialWrite_P2_Size
                                 * Referenced by: '<S16>/Legacy Serial Write'
                                 */
  real_T LegacySerialWrite_P2;         /* Expression: dtype
                                        * Referenced by: '<S16>/Legacy Serial Write'
                                        */
  real_T LegacySerialWrite_P3_Size[2];
                                /* Computed Parameter: LegacySerialWrite_P3_Size
                                 * Referenced by: '<S16>/Legacy Serial Write'
                                 */
  real_T LegacySerialWrite_P3;         /* Expression: sampletime
                                        * Referenced by: '<S16>/Legacy Serial Write'
                                        */
  real_T Setup_P1_Size[2];             /* Computed Parameter: Setup_P1_Size
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T Setup_P1;                     /* Expression: port
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T Setup_P2_Size[2];             /* Computed Parameter: Setup_P2_Size
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T Setup_P2;                     /* Expression: baud
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T Setup_P3_Size[2];             /* Computed Parameter: Setup_P3_Size
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T Setup_P3;                     /* Expression: width
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T Setup_P4_Size[2];             /* Computed Parameter: Setup_P4_Size
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T Setup_P4;                     /* Expression: nstop
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T Setup_P5_Size[2];             /* Computed Parameter: Setup_P5_Size
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T Setup_P5;                     /* Expression: parity
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T Setup_P6_Size[2];             /* Computed Parameter: Setup_P6_Size
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T Setup_P6;                     /* Expression: ctsmode
                                        * Referenced by: '<S16>/Setup'
                                        */
  real_T FIFOASCIIread_P1_Size[2];  /* Computed Parameter: FIFOASCIIread_P1_Size
                                     * Referenced by: '<S15>/FIFO ASCII read'
                                     */
  real_T FIFOASCIIread_P1;             /* Expression: maxsize
                                        * Referenced by: '<S15>/FIFO ASCII read'
                                        */
  real_T FIFOASCIIread_P2_Size[2];  /* Computed Parameter: FIFOASCIIread_P2_Size
                                     * Referenced by: '<S15>/FIFO ASCII read'
                                     */
  real_T FIFOASCIIread_P2;             /* Expression: outputtype
                                        * Referenced by: '<S15>/FIFO ASCII read'
                                        */
  real_T FIFOASCIIread_P3_Size[2];  /* Computed Parameter: FIFOASCIIread_P3_Size
                                     * Referenced by: '<S15>/FIFO ASCII read'
                                     */
  real_T FIFOASCIIread_P3;             /* Expression: sampletime
                                        * Referenced by: '<S15>/FIFO ASCII read'
                                        */
  real_T FIFOASCIIread_P4_Size[2];  /* Computed Parameter: FIFOASCIIread_P4_Size
                                     * Referenced by: '<S15>/FIFO ASCII read'
                                     */
  real_T FIFOASCIIread_P4[6];          /* Computed Parameter: FIFOASCIIread_P4
                                        * Referenced by: '<S15>/FIFO ASCII read'
                                        */
  real_T FIFOASCIIread_P5_Size[2];  /* Computed Parameter: FIFOASCIIread_P5_Size
                                     * Referenced by: '<S15>/FIFO ASCII read'
                                     */
  real_T FIFOASCIIread_P5;             /* Expression: hlengths
                                        * Referenced by: '<S15>/FIFO ASCII read'
                                        */
  real_T FIFOASCIIread_P6_Size[2];  /* Computed Parameter: FIFOASCIIread_P6_Size
                                     * Referenced by: '<S15>/FIFO ASCII read'
                                     */
  real_T FIFOASCIIread_P6[2];          /* Computed Parameter: FIFOASCIIread_P6
                                        * Referenced by: '<S15>/FIFO ASCII read'
                                        */
  real_T FIFOASCIIread_P7_Size[2];  /* Computed Parameter: FIFOASCIIread_P7_Size
                                     * Referenced by: '<S15>/FIFO ASCII read'
                                     */
  real_T FIFOASCIIread_P7;             /* Expression: hold
                                        * Referenced by: '<S15>/FIFO ASCII read'
                                        */
  real_T FIFOASCIIread_P8_Size[2];  /* Computed Parameter: FIFOASCIIread_P8_Size
                                     * Referenced by: '<S15>/FIFO ASCII read'
                                     */
  real_T FIFOASCIIread_P8;             /* Expression: enable
                                        * Referenced by: '<S15>/FIFO ASCII read'
                                        */
  real_T TmpRTBAtSwitch1Inport1_InitialCondition;/* Expression: 0
                                                  * Referenced by: synthesized block
                                                  */
  real_T TmpRTBAtSwitch2Inport1_InitialCondition;/* Expression: 0
                                                  * Referenced by: synthesized block
                                                  */
  real_T TmpRTBAtSwitch3Inport1_InitialCondition;/* Expression: 0
                                                  * Referenced by: synthesized block
                                                  */
  real_T TmpRTBAtSwitch4Inport1_InitialCondition;/* Expression: 0
                                                  * Referenced by: synthesized block
                                                  */
  real_T TmpRTBAtSwitch5Inport1_InitialCondition;/* Expression: 0
                                                  * Referenced by: synthesized block
                                                  */
  real_T TmpRTBAtSwitch6Inport1_InitialCondition;/* Expression: 0
                                                  * Referenced by: synthesized block
                                                  */
  real_T TmpRTBAtSwitch7Inport1_InitialCondition;/* Expression: 0
                                                  * Referenced by: synthesized block
                                                  */
  real_T TmpRTBAtSwitch8Inport1_InitialCondition;/* Expression: 0
                                                  * Referenced by: synthesized block
                                                  */
  real_T TmpRTBAtSwitch9Inport1_InitialCondition;/* Expression: 0
                                                  * Referenced by: synthesized block
                                                  */
  real_T TmpRTBAtSwitchInport1_InitialCondition;/* Expression: 0
                                                 * Referenced by: synthesized block
                                                 */
  real_T S_GPSTime_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S15>/S_GPSTime'
                                        */
  real_T S_GPSWeek_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S15>/S_GPSWeek'
                                        */
  real_T S_IMUWorkStatus_InitialCondition;/* Expression: 0
                                           * Referenced by: '<S15>/S_IMUWorkStatus'
                                           */
  real_T S_Pitch_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S15>/S_Pitch'
                                        */
  real_T S_Roll_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S15>/S_Roll'
                                        */
  real_T count_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S15>/count'
                                        */
  real_T S_AccelerationX_InitialCondition;/* Expression: 0
                                           * Referenced by: synthesized block
                                           */
  real_T S_AccelerationY_InitialCondition;/* Expression: 0
                                           * Referenced by: synthesized block
                                           */
  real_T S_AccelerationZ_InitialCondition;/* Expression: 0
                                           * Referenced by: synthesized block
                                           */
  real_T S_Altitude_InitialCondition;  /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T S_AngleSpeedX_InitialCondition;/* Expression: 0
                                         * Referenced by: synthesized block
                                         */
  real_T S_AngleSpeedY_InitialCondition;/* Expression: 0
                                         * Referenced by: synthesized block
                                         */
  real_T S_AngleSpeedZ_InitialCondition;/* Expression: 0
                                         * Referenced by: synthesized block
                                         */
  real_T S_Heading_InitialCondition;   /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T S_Latitude_InitialCondition;  /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T S_Longitude_InitialCondition; /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T AutoTrqWhlReq_test_InitialCondition;/* Expression: 0
                                              * Referenced by: synthesized block
                                              */
  real_T BrakeReq_test_InitialCondition;/* Expression: 0
                                         * Referenced by: synthesized block
                                         */
  real_T TmpRTBAtAION_auto_mode_requestInport2_InitialCondition;/* Expression: 0
                                                                 * Referenced by: synthesized block
                                                                 */
  real_T TmpRTBAtAION_auto_mode_requestInport3_InitialCondition;/* Expression: 0
                                                                 * Referenced by: synthesized block
                                                                 */
  real_T get_AccelerationX_InitialCondition;/* Expression: 0
                                             * Referenced by: synthesized block
                                             */
  real_T get_AccelerationY_InitialCondition;/* Expression: 0
                                             * Referenced by: synthesized block
                                             */
  real_T get_AccelerationZ_InitialCondition;/* Expression: 0
                                             * Referenced by: synthesized block
                                             */
  real_T get_ActVehLaltrlAccel_InitialCondition;/* Expression: 0
                                                 * Referenced by: synthesized block
                                                 */
  real_T get_ActVehLongAccel_InitialCondition;/* Expression: 0
                                               * Referenced by: synthesized block
                                               */
  real_T get_Altitude_InitialCondition;/* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T get_AngleSpeedX_InitialCondition;/* Expression: 0
                                           * Referenced by: synthesized block
                                           */
  real_T get_AngleSpeedY_InitialCondition;/* Expression: 0
                                           * Referenced by: synthesized block
                                           */
  real_T get_AngleSpeedZ_InitialCondition;/* Expression: 0
                                           * Referenced by: synthesized block
                                           */
  real_T get_GPSTime_InitialCondition; /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T get_GPSWeek_InitialCondition; /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T get_GasPedalActPst_InitialCondition;/* Expression: 0
                                              * Referenced by: synthesized block
                                              */
  real_T get_Heading_InitialCondition; /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T get_Latitude_InitialCondition;/* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T get_Longitude_InitialCondition;/* Expression: 0
                                         * Referenced by: synthesized block
                                         */
  real_T get_Pitch_InitialCondition;   /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T get_Roll_InitialCondition;    /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T get_SteeringAngle_InitialCondition;/* Expression: 0
                                             * Referenced by: synthesized block
                                             */
  real_T get_StrngWhlTorq_InitialCondition;/* Expression: 0
                                            * Referenced by: synthesized block
                                            */
  real_T get_VehSpd_InitialCondition;  /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T get_YawRate_InitialCondition; /* Expression: 0
                                        * Referenced by: synthesized block
                                        */
  real_T ADCU2SCU_Steer_Command_CAN_write_P1_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P1_Size
                  * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P1;/* Expression: id
                                              * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Steer_Command_CAN_write_P2_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P2_Size
                  * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P2;/* Expression: sampleTime
                                              * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Steer_Command_CAN_write_P3_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P3_Size
                  * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P3;/* Expression: messageType
                                              * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Steer_Command_CAN_write_P4_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P4_Size
                  * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P4;/* Expression: enaStatusPort
                                              * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Steer_Command_CAN_write_P5_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P5_Size
                  * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P5[5];
                      /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P5
                       * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                       */
  real_T ADCU2SCU_Steer_Command_CAN_write_P6_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P6_Size
                  * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P6;/* Expression: ptIdx
                                              * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Steer_Command_CAN_write_P7_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P7_Size
                  * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P7;/* Expression: isFDMod
                                              * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  real_T Constant6_Value;              /* Expression: 1
                                        * Referenced by: '<S17>/Constant6'
                                        */
  real_T Constant11_Value;             /* Expression: 0
                                        * Referenced by: '<S17>/Constant11'
                                        */
  real_T Constant5_Value;              /* Expression: 0
                                        * Referenced by: '<S17>/Constant5'
                                        */
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S17>/Constant'
                                        */
  real_T Constant7_Value;              /* Expression: 0
                                        * Referenced by: '<S17>/Constant7'
                                        */
  real_T Constant8_Value;              /* Expression: 0
                                        * Referenced by: '<S17>/Constant8'
                                        */
  real_T Constant9_Value;              /* Expression: 0
                                        * Referenced by: '<S17>/Constant9'
                                        */
  real_T Constant10_Value;             /* Expression: 0
                                        * Referenced by: '<S17>/Constant10'
                                        */
  real_T Constant1_Value;              /* Expression: 23
                                        * Referenced by: '<S17>/Constant1'
                                        */
  Active_request TmpRTBAtAION_auto_mode_requestInport17_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport17_InitialCondition
   * Referenced by: synthesized block
   */
  Active_status get_HazardLampSt_InitialCondition;
                        /* Computed Parameter: get_HazardLampSt_InitialCondition
                         * Referenced by: synthesized block
                         */
  Active_status get_HighBeamSt_InitialCondition;
                          /* Computed Parameter: get_HighBeamSt_InitialCondition
                           * Referenced by: synthesized block
                           */
  Active_status get_HornSt_InitialCondition;
                              /* Computed Parameter: get_HornSt_InitialCondition
                               * Referenced by: synthesized block
                               */
  Active_status get_LeftTurnLampSt_InitialCondition;
                      /* Computed Parameter: get_LeftTurnLampSt_InitialCondition
                       * Referenced by: synthesized block
                       */
  Active_status get_LowBeamSt_InitialCondition;
                           /* Computed Parameter: get_LowBeamSt_InitialCondition
                            * Referenced by: synthesized block
                            */
  Active_status get_RightTurnLampSt_InitialCondition;
                     /* Computed Parameter: get_RightTurnLampSt_InitialCondition
                      * Referenced by: synthesized block
                      */
  Available_status get_CtrlAvailable_InitialCondition;
                       /* Computed Parameter: get_CtrlAvailable_InitialCondition
                        * Referenced by: synthesized block
                        */
  Beam_request TmpRTBAtAION_auto_mode_requestInport15_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport15_InitialCondition
   * Referenced by: synthesized block
   */
  Control_request TmpRTBAtAION_auto_mode_requestInport1_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport1_InitialCondition
   * Referenced by: synthesized block
   */
  Control_request TmpRTBAtAION_auto_mode_requestInport4_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport4_InitialCondition
   * Referenced by: synthesized block
   */
  Control_status get_LatCtrlMode_InitialCondition;
                         /* Computed Parameter: get_LatCtrlMode_InitialCondition
                          * Referenced by: synthesized block
                          */
  Control_status get_LngCtrlMode_InitialCondition;
                         /* Computed Parameter: get_LngCtrlMode_InitialCondition
                          * Referenced by: synthesized block
                          */
  Drive_status get_VehDrvMod_InitialCondition;
                           /* Computed Parameter: get_VehDrvMod_InitialCondition
                            * Referenced by: synthesized block
                            */
  Enable_request TmpRTBAtAION_auto_mode_requestInport16_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport16_InitialCondition
   * Referenced by: synthesized block
   */
  Gear_request TmpRTBAtAION_auto_mode_requestInport7_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport7_InitialCondition
   * Referenced by: synthesized block
   */
  Gear_status get_CrntGearLvl_InitialCondition;
                         /* Computed Parameter: get_CrntGearLvl_InitialCondition
                          * Referenced by: synthesized block
                          */
  IMU_Status get_IMUWorkStatus_InitialCondition;
                       /* Computed Parameter: get_IMUWorkStatus_InitialCondition
                        * Referenced by: synthesized block
                        */
  Light_request TmpRTBAtAION_auto_mode_requestInport18_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport18_InitialCondition
   * Referenced by: synthesized block
   */
  Ready_status get_VehRdySt_InitialCondition;
                            /* Computed Parameter: get_VehRdySt_InitialCondition
                             * Referenced by: synthesized block
                             */
  Validation_status TmpRTBAtAION_auto_mode_requestInport8_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport8_InitialCondition
   * Referenced by: synthesized block
   */
  uint32_T get_ActVehWheelTorq_InitialCondition;
                     /* Computed Parameter: get_ActVehWheelTorq_InitialCondition
                      * Referenced by: synthesized block
                      */
  uint32_T get_LatAutoCheckReport_InitialCondition;
                  /* Computed Parameter: get_LatAutoCheckReport_InitialCondition
                   * Referenced by: synthesized block
                   */
  uint32_T get_LatQuitReport_InitialCondition;
                       /* Computed Parameter: get_LatQuitReport_InitialCondition
                        * Referenced by: synthesized block
                        */
  uint32_T get_LngAutoCheckIReport_InitialCondition;
                 /* Computed Parameter: get_LngAutoCheckIReport_InitialCondition
                  * Referenced by: synthesized block
                  */
  uint32_T get_LngQuitReport_InitialCondition;
                       /* Computed Parameter: get_LngQuitReport_InitialCondition
                        * Referenced by: synthesized block
                        */
  uint32_T get_SteeringAngleSpd_InitialCondition;
                    /* Computed Parameter: get_SteeringAngleSpd_InitialCondition
                     * Referenced by: synthesized block
                     */
  uint32_T get_VehRng_InitialCondition;
                              /* Computed Parameter: get_VehRng_InitialCondition
                               * Referenced by: synthesized block
                               */
  uint32_T get_VehWheelTorqMax_InitialCondition;
                     /* Computed Parameter: get_VehWheelTorqMax_InitialCondition
                      * Referenced by: synthesized block
                      */
  uint32_T set_Checksum1_InitialCondition;
                           /* Computed Parameter: set_Checksum1_InitialCondition
                            * Referenced by: synthesized block
                            */
  uint32_T set_Checksum2_InitialCondition;
                           /* Computed Parameter: set_Checksum2_InitialCondition
                            * Referenced by: synthesized block
                            */
  uint32_T set_Checksum3_InitialCondition;
                           /* Computed Parameter: set_Checksum3_InitialCondition
                            * Referenced by: synthesized block
                            */
  uint32_T set_MsgCounter1_InitialCondition;
                         /* Computed Parameter: set_MsgCounter1_InitialCondition
                          * Referenced by: synthesized block
                          */
  uint32_T set_MsgCounter2_InitialCondition;
                         /* Computed Parameter: set_MsgCounter2_InitialCondition
                          * Referenced by: synthesized block
                          */
  uint32_T set_MsgCounter3_InitialCondition;
                         /* Computed Parameter: set_MsgCounter3_InitialCondition
                          * Referenced by: synthesized block
                          */
};

/* Storage class 'PageSwitching' */
extern AION_IDS_SPEEDGOAT_cal_type AION_IDS_SPEEDGOAT_cal_impl;
extern AION_IDS_SPEEDGOAT_cal_type *AION_IDS_SPEEDGOAT_cal;

#endif                                /* RTW_HEADER_AION_IDS_SPEEDGOAT_cal_h_ */
