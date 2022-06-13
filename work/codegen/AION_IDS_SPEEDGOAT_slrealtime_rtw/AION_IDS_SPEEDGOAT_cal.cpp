#include "AION_IDS_SPEEDGOAT.h"

/* Storage class 'PageSwitching' */
AION_IDS_SPEEDGOAT_cal_type AION_IDS_SPEEDGOAT_cal_impl = {
  /* Computed Parameter: UnitDelay_InitialCondition
   * Referenced by: '<S1>/Unit Delay'
   */
  {
    {
      Manual,                          /* set_LatCtrlReq */
      0.0,                             /* set_SteerAngReq */
      0.0                              /* set_SteerWhlTorqReq */
    },                                 /* set_lateral_control_info */

    {
      Manual,                          /* set_LngCtrlReq */
      0.0,                             /* set_AutoTrqWhlReq */
      0.0,                             /* set_BrakeReq */
      NoRequest,                       /* set_GearLvlReq */
      Invalid                          /* set_GearLvlReqVD */
    },                                 /* set_longitudinal_control_info */

    {
      0U,                              /* set_Checksum1 */
      0U,                              /* set_MsgCounter1 */
      0U,                              /* set_Checksum2 */
      0U,                              /* set_MsgCounter2 */
      0U,                              /* set_Checksum3 */
      0U,                              /* set_MsgCounter3 */
      NoBeamRequest,                   /* set_BeamReq */
      Disable,                         /* set_BodyCtrlReq */
      NotActiveRequest,                /* set_HornRingReq */
      NoLightRequest                   /* set_TurnLightReq */
    },                                 /* set_ADCU_info */

    {
      0U,                              /* get_ABSActiveSt */
      0.0,                             /* get_VehSpd */
      0U,                              /* get_VehSpdVD */
      0.0,                             /* get_YawRate */
      0.0,                             /* get_ActVehLaltrlAccel */
      0.0                              /* get_ActVehLongAccel */
    },                                 /* get_BCS_info */

    {
      0U,                              /* get_ActVehWheelTorq */
      0U,                              /* get_GearLeverIntv */
      InvalidDriveStatus,              /* get_VehDrvMod */
      NotReady,                        /* get_VehRdySt */
      0U,                              /* get_VehRng */
      InvalidGearStatus,               /* get_CrntGearLvl */
      0U,                              /* get_CrntGearLvlVD */
      0.0,                             /* get_GasPedalActPst */
      0U,                              /* get_AccElecECFail */
      0U,                              /* get_VehWheelTorqMax */
      0U                               /* get_BrkPedalSt */
    },                                 /* get_VCU_info */

    {
      0U,                              /* get_LatAutoCheckReport */
      ManualStatus,                    /* get_LatCtrlMode */
      0U,                              /* get_LatQuitReport */
      0U,                              /* get_LngAutoCheckIReport */
      ManualStatus,                    /* get_LngCtrlMode */
      0U,                              /* get_LngQuitReport */
      0U                               /* get_StrngWhlIntv */
    },                                 /* get_SCU_info */

    {
      0U                               /* get_SysSt */
    },                                 /* get_EPB_info */

    {
      0U,                              /* get_DriverSeatBeltSt */
      0U                               /* get_PsngrSeatBeltSt */
    },                                 /* get_SRS_info */

    {
      0.0,                             /* get_SteeringAngle */
      0U,                              /* get_SteeringAngleSpd */
      0U,                              /* get_SteeringAngleSpdVD */
      0U,                              /* get_SteeringAngleVD */
      0.0                              /* get_StrngWhlTorq */
    },                                 /* get_EPS_info */

    {
      NotAvailable,                    /* get_CtrlAvailable */
      NotActiveStatus,                 /* get_HazardLampSt */
      NotActiveStatus,                 /* get_HighBeamSt */
      NotActiveStatus,                 /* get_HornSt */
      0U,                              /* get_KeySt */
      NotActiveStatus,                 /* get_LeftTurnLampSt */
      NotActiveStatus,                 /* get_LowBeamSt */
      NotActiveStatus                  /* get_RightTurnLampSt */
    },                                 /* get_BCM_info */

    {
      0.0,                             /* get_GPSWeek */
      0.0,                             /* get_GPSTime */
      0.0,                             /* get_Heading */
      0.0,                             /* get_Pitch */
      0.0,                             /* get_Roll */
      Initialization,                  /* get_IMUWorkStatus */
      0.0,                             /* get_AngleSpeedX */
      0.0,                             /* get_AngleSpeedY */
      0.0,                             /* get_AngleSpeedZ */
      0.0,                             /* get_AccelerationX */
      0.0,                             /* get_AccelerationY */
      0.0,                             /* get_AccelerationZ */
      0.0,                             /* get_Latitude */
      0.0,                             /* get_Longitude */
      0.0                              /* get_Altitude */
    }                                  /* get_IMU_info */
  },

  /* Computed Parameter: TmpRTBAtUnitDelayInport1_InitialCondition
   * Referenced by: synthesized block
   */
  {
    {
      Manual,                          /* set_LatCtrlReq */
      0.0,                             /* set_SteerAngReq */
      0.0                              /* set_SteerWhlTorqReq */
    },                                 /* set_lateral_control_info */

    {
      Manual,                          /* set_LngCtrlReq */
      0.0,                             /* set_AutoTrqWhlReq */
      0.0,                             /* set_BrakeReq */
      NoRequest,                       /* set_GearLvlReq */
      Invalid                          /* set_GearLvlReqVD */
    },                                 /* set_longitudinal_control_info */

    {
      0U,                              /* set_Checksum1 */
      0U,                              /* set_MsgCounter1 */
      0U,                              /* set_Checksum2 */
      0U,                              /* set_MsgCounter2 */
      0U,                              /* set_Checksum3 */
      0U,                              /* set_MsgCounter3 */
      NoBeamRequest,                   /* set_BeamReq */
      Disable,                         /* set_BodyCtrlReq */
      NotActiveRequest,                /* set_HornRingReq */
      NoLightRequest                   /* set_TurnLightReq */
    },                                 /* set_ADCU_info */

    {
      0U,                              /* get_ABSActiveSt */
      0.0,                             /* get_VehSpd */
      0U,                              /* get_VehSpdVD */
      0.0,                             /* get_YawRate */
      0.0,                             /* get_ActVehLaltrlAccel */
      0.0                              /* get_ActVehLongAccel */
    },                                 /* get_BCS_info */

    {
      0U,                              /* get_ActVehWheelTorq */
      0U,                              /* get_GearLeverIntv */
      InvalidDriveStatus,              /* get_VehDrvMod */
      NotReady,                        /* get_VehRdySt */
      0U,                              /* get_VehRng */
      InvalidGearStatus,               /* get_CrntGearLvl */
      0U,                              /* get_CrntGearLvlVD */
      0.0,                             /* get_GasPedalActPst */
      0U,                              /* get_AccElecECFail */
      0U,                              /* get_VehWheelTorqMax */
      0U                               /* get_BrkPedalSt */
    },                                 /* get_VCU_info */

    {
      0U,                              /* get_LatAutoCheckReport */
      ManualStatus,                    /* get_LatCtrlMode */
      0U,                              /* get_LatQuitReport */
      0U,                              /* get_LngAutoCheckIReport */
      ManualStatus,                    /* get_LngCtrlMode */
      0U,                              /* get_LngQuitReport */
      0U                               /* get_StrngWhlIntv */
    },                                 /* get_SCU_info */

    {
      0U                               /* get_SysSt */
    },                                 /* get_EPB_info */

    {
      0U,                              /* get_DriverSeatBeltSt */
      0U                               /* get_PsngrSeatBeltSt */
    },                                 /* get_SRS_info */

    {
      0.0,                             /* get_SteeringAngle */
      0U,                              /* get_SteeringAngleSpd */
      0U,                              /* get_SteeringAngleSpdVD */
      0U,                              /* get_SteeringAngleVD */
      0.0                              /* get_StrngWhlTorq */
    },                                 /* get_EPS_info */

    {
      NotAvailable,                    /* get_CtrlAvailable */
      NotActiveStatus,                 /* get_HazardLampSt */
      NotActiveStatus,                 /* get_HighBeamSt */
      NotActiveStatus,                 /* get_HornSt */
      0U,                              /* get_KeySt */
      NotActiveStatus,                 /* get_LeftTurnLampSt */
      NotActiveStatus,                 /* get_LowBeamSt */
      NotActiveStatus                  /* get_RightTurnLampSt */
    },                                 /* get_BCM_info */

    {
      0.0,                             /* get_GPSWeek */
      0.0,                             /* get_GPSTime */
      0.0,                             /* get_Heading */
      0.0,                             /* get_Pitch */
      0.0,                             /* get_Roll */
      Initialization,                  /* get_IMUWorkStatus */
      0.0,                             /* get_AngleSpeedX */
      0.0,                             /* get_AngleSpeedY */
      0.0,                             /* get_AngleSpeedZ */
      0.0,                             /* get_AccelerationX */
      0.0,                             /* get_AccelerationY */
      0.0,                             /* get_AccelerationZ */
      0.0,                             /* get_Latitude */
      0.0,                             /* get_Longitude */
      0.0                              /* get_Altitude */
    }                                  /* get_IMU_info */
  },

  /* Computed Parameter: RT2_InitialCondition
   * Referenced by: '<S19>/RT2'
   */
  { 0, 0, 0, 0, 0, 0.0, { 0, 0, 0, 0, 0, 0, 0, 0 } },

  /* Computed Parameter: IMU2ADCU_CAN_read_P1_Size
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  1.0,

  /* Computed Parameter: IMU2ADCU_CAN_read_P2_Size
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  -1.0,

  /* Computed Parameter: IMU2ADCU_CAN_read_P3_Size
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: messageType
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  1.0,

  /* Computed Parameter: IMU2ADCU_CAN_read_P4_Size
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: IMU2ADCU_CAN_read_P4
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  { 73.0, 79.0, 54.0, 49.0, 50.0 },

  /* Computed Parameter: IMU2ADCU_CAN_read_P5_Size
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: ptIdx
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  1.0,

  /* Computed Parameter: IMU2ADCU_CAN_read_P6_Size
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S11>/IMU2ADCU_CAN_read'
   */
  0.0,

  /* Computed Parameter: SCU2ADCU_CAN_read_P1_Size
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  1.0,

  /* Computed Parameter: SCU2ADCU_CAN_read_P2_Size
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  -1.0,

  /* Computed Parameter: SCU2ADCU_CAN_read_P3_Size
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: messageType
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  1.0,

  /* Computed Parameter: SCU2ADCU_CAN_read_P4_Size
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: SCU2ADCU_CAN_read_P4
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  { 73.0, 79.0, 54.0, 49.0, 50.0 },

  /* Computed Parameter: SCU2ADCU_CAN_read_P5_Size
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: ptIdx
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  0.0,

  /* Computed Parameter: SCU2ADCU_CAN_read_P6_Size
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S12>/SCU2ADCU_CAN_read'
   */
  0.0,

  /* Computed Parameter: CANSetup_P1_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P2_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Computed Parameter: CANSetup_P2
   * Referenced by: '<S2>/CAN Setup'
   */
  { 67.0, 58.0 },

  /* Computed Parameter: CANSetup_P3_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: PCISlot
   * Referenced by: '<S2>/CAN Setup'
   */
  -1.0,

  /* Computed Parameter: CANSetup_P4_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: port1
   * Referenced by: '<S2>/CAN Setup'
   */
  2.0,

  /* Computed Parameter: CANSetup_P5_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: port2
   * Referenced by: '<S2>/CAN Setup'
   */
  2.0,

  /* Computed Parameter: CANSetup_P6_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: port3
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P7_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: port4
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P8_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: opModeCAN1
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P9_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: usrBdrCAN1
   * Referenced by: '<S2>/CAN Setup'
   */
  { 10.0, 1.0, 13.0, 2.0 },

  /* Computed Parameter: CANSetup_P10_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: stdAccMaskCAN1
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P11_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: extAccMaskCAN1
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P12_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: opModeCAN2
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P13_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: usrBdrCAN2
   * Referenced by: '<S2>/CAN Setup'
   */
  { 10.0, 1.0, 13.0, 2.0 },

  /* Computed Parameter: CANSetup_P14_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: stdAccMaskCAN2
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P15_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: extAccMaskCAN2
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P16_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: opModeCAN3
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P17_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: usrBdrCAN3
   * Referenced by: '<S2>/CAN Setup'
   */
  { 10.0, 1.0, 13.0, 2.0 },

  /* Computed Parameter: CANSetup_P18_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: stdAccMaskCAN3
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P19_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: extAccMaskCAN3
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P20_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: opModeCAN4
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P21_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: usrBdrCAN4
   * Referenced by: '<S2>/CAN Setup'
   */
  { 10.0, 1.0, 13.0, 2.0 },

  /* Computed Parameter: CANSetup_P22_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: stdAccMaskCAN4
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P23_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: extAccMaskCAN4
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P24_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: initStruct
   * Referenced by: '<S2>/CAN Setup'
   */
  0.0,

  /* Computed Parameter: CANSetup_P25_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: termStruct
   * Referenced by: '<S2>/CAN Setup'
   */
  0.0,

  /* Computed Parameter: CANSetup_P26_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: CANSetup_P26
   * Referenced by: '<S2>/CAN Setup'
   */
  { 73.0, 79.0, 54.0, 49.0, 50.0 },

  /* Computed Parameter: CANSetup_P27_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: qtyMod
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P28_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: chNo
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0, 3.0, 4.0 },

  /* Computed Parameter: CANSetup_P29_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: ptTypes
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: CANSetup_P30_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: protlHelpIdx
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 1.0, 2.0, 3.0 },

  /* Computed Parameter: CANSetup_P31_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S2>/CAN Setup'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P1_Size
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P2_Size
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  0.02,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P3_Size
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: messageType
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P4_Size
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: enaStatusPort
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P5_Size
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P5
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 73.0, 79.0, 54.0, 49.0, 50.0 },

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P6_Size
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: ptIdx
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P7_Size
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S19>/ADCU2SCU_Brake_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P1_Size
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P2_Size
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  0.02,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P3_Size
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: messageType
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P4_Size
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: enaStatusPort
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P5_Size
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P5
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 73.0, 79.0, 54.0, 49.0, 50.0 },

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P6_Size
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: ptIdx
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P7_Size
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S19>/ADCU2SCU_Gear_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: LegacySerialRead_P1_Size
   * Referenced by: '<S16>/Legacy Serial Read'
   */
  { 1.0, 1.0 },

  /* Expression: port
   * Referenced by: '<S16>/Legacy Serial Read'
   */
  1.0,

  /* Computed Parameter: LegacySerialRead_P2_Size
   * Referenced by: '<S16>/Legacy Serial Read'
   */
  { 1.0, 1.0 },

  /* Expression: count
   * Referenced by: '<S16>/Legacy Serial Read'
   */
  51.0,

  /* Computed Parameter: LegacySerialRead_P3_Size
   * Referenced by: '<S16>/Legacy Serial Read'
   */
  { 1.0, 1.0 },

  /* Expression: dtype
   * Referenced by: '<S16>/Legacy Serial Read'
   */
  4.0,

  /* Computed Parameter: LegacySerialRead_P4_Size
   * Referenced by: '<S16>/Legacy Serial Read'
   */
  { 1.0, 1.0 },

  /* Expression: sampletime
   * Referenced by: '<S16>/Legacy Serial Read'
   */
  0.02,

  /* Computed Parameter: LegacySerialWrite_P1_Size
   * Referenced by: '<S16>/Legacy Serial Write'
   */
  { 1.0, 1.0 },

  /* Expression: port
   * Referenced by: '<S16>/Legacy Serial Write'
   */
  1.0,

  /* Computed Parameter: LegacySerialWrite_P2_Size
   * Referenced by: '<S16>/Legacy Serial Write'
   */
  { 1.0, 1.0 },

  /* Expression: dtype
   * Referenced by: '<S16>/Legacy Serial Write'
   */
  6.0,

  /* Computed Parameter: LegacySerialWrite_P3_Size
   * Referenced by: '<S16>/Legacy Serial Write'
   */
  { 1.0, 1.0 },

  /* Expression: sampletime
   * Referenced by: '<S16>/Legacy Serial Write'
   */
  -1.0,

  /* Computed Parameter: Setup_P1_Size
   * Referenced by: '<S16>/Setup'
   */
  { 1.0, 1.0 },

  /* Expression: port
   * Referenced by: '<S16>/Setup'
   */
  1.0,

  /* Computed Parameter: Setup_P2_Size
   * Referenced by: '<S16>/Setup'
   */
  { 1.0, 1.0 },

  /* Expression: baud
   * Referenced by: '<S16>/Setup'
   */
  1.0,

  /* Computed Parameter: Setup_P3_Size
   * Referenced by: '<S16>/Setup'
   */
  { 1.0, 1.0 },

  /* Expression: width
   * Referenced by: '<S16>/Setup'
   */
  4.0,

  /* Computed Parameter: Setup_P4_Size
   * Referenced by: '<S16>/Setup'
   */
  { 1.0, 1.0 },

  /* Expression: nstop
   * Referenced by: '<S16>/Setup'
   */
  1.0,

  /* Computed Parameter: Setup_P5_Size
   * Referenced by: '<S16>/Setup'
   */
  { 1.0, 1.0 },

  /* Expression: parity
   * Referenced by: '<S16>/Setup'
   */
  1.0,

  /* Computed Parameter: Setup_P6_Size
   * Referenced by: '<S16>/Setup'
   */
  { 1.0, 1.0 },

  /* Expression: ctsmode
   * Referenced by: '<S16>/Setup'
   */
  0.0,

  /* Computed Parameter: FIFOASCIIread_P1_Size
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  { 1.0, 1.0 },

  /* Expression: maxsize
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  1024.0,

  /* Computed Parameter: FIFOASCIIread_P2_Size
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  { 1.0, 1.0 },

  /* Expression: outputtype
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  6.0,

  /* Computed Parameter: FIFOASCIIread_P3_Size
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  { 1.0, 1.0 },

  /* Expression: sampletime
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  -1.0,

  /* Computed Parameter: FIFOASCIIread_P4_Size
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  { 1.0, 6.0 },

  /* Computed Parameter: FIFOASCIIread_P4
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  { 36.0, 71.0, 80.0, 67.0, 72.0, 67.0 },

  /* Computed Parameter: FIFOASCIIread_P5_Size
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  { 1.0, 1.0 },

  /* Expression: hlengths
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  6.0,

  /* Computed Parameter: FIFOASCIIread_P6_Size
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  { 1.0, 2.0 },

  /* Computed Parameter: FIFOASCIIread_P6
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  { 13.0, 10.0 },

  /* Computed Parameter: FIFOASCIIread_P7_Size
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  { 1.0, 1.0 },

  /* Expression: hold
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  1.0,

  /* Computed Parameter: FIFOASCIIread_P8_Size
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  { 1.0, 1.0 },

  /* Expression: enable
   * Referenced by: '<S15>/FIFO ASCII read'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/S_GPSTime'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/S_GPSWeek'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/S_IMUWorkStatus'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/S_Pitch'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/S_Roll'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S15>/count'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P1_Size
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P2_Size
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  0.05,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P3_Size
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: messageType
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P4_Size
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: enaStatusPort
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P5_Size
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P5
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 73.0, 79.0, 54.0, 49.0, 50.0 },

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P6_Size
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: ptIdx
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P7_Size
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S19>/ADCU2SCU_Steer_Command_CAN_write'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S17>/Constant6'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S17>/Constant11'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S17>/Constant5'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S17>/Constant'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S17>/Constant7'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S17>/Constant8'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S17>/Constant9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S17>/Constant10'
   */
  0.0,

  /* Expression: 23
   * Referenced by: '<S17>/Constant1'
   */
  23.0,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport17_InitialCondition
   * Referenced by: synthesized block
   */
  NotActiveRequest,

  /* Computed Parameter: get_HazardLampSt_InitialCondition
   * Referenced by: synthesized block
   */
  NotActiveStatus,

  /* Computed Parameter: get_HighBeamSt_InitialCondition
   * Referenced by: synthesized block
   */
  NotActiveStatus,

  /* Computed Parameter: get_HornSt_InitialCondition
   * Referenced by: synthesized block
   */
  NotActiveStatus,

  /* Computed Parameter: get_LeftTurnLampSt_InitialCondition
   * Referenced by: synthesized block
   */
  NotActiveStatus,

  /* Computed Parameter: get_LowBeamSt_InitialCondition
   * Referenced by: synthesized block
   */
  NotActiveStatus,

  /* Computed Parameter: get_RightTurnLampSt_InitialCondition
   * Referenced by: synthesized block
   */
  NotActiveStatus,

  /* Computed Parameter: get_CtrlAvailable_InitialCondition
   * Referenced by: synthesized block
   */
  NotAvailable,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport15_InitialCondition
   * Referenced by: synthesized block
   */
  NoBeamRequest,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport1_InitialCondition
   * Referenced by: synthesized block
   */
  Manual,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport4_InitialCondition
   * Referenced by: synthesized block
   */
  Manual,

  /* Computed Parameter: get_LatCtrlMode_InitialCondition
   * Referenced by: synthesized block
   */
  ManualStatus,

  /* Computed Parameter: get_LngCtrlMode_InitialCondition
   * Referenced by: synthesized block
   */
  ManualStatus,

  /* Computed Parameter: get_VehDrvMod_InitialCondition
   * Referenced by: synthesized block
   */
  InvalidDriveStatus,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport16_InitialCondition
   * Referenced by: synthesized block
   */
  Disable,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport7_InitialCondition
   * Referenced by: synthesized block
   */
  NoRequest,

  /* Computed Parameter: get_CrntGearLvl_InitialCondition
   * Referenced by: synthesized block
   */
  InvalidGearStatus,

  /* Computed Parameter: get_IMUWorkStatus_InitialCondition
   * Referenced by: synthesized block
   */
  Initialization,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport18_InitialCondition
   * Referenced by: synthesized block
   */
  NoLightRequest,

  /* Computed Parameter: get_VehRdySt_InitialCondition
   * Referenced by: synthesized block
   */
  NotReady,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport8_InitialCondition
   * Referenced by: synthesized block
   */
  Invalid,

  /* Computed Parameter: get_ActVehWheelTorq_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: get_LatAutoCheckReport_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: get_LatQuitReport_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: get_LngAutoCheckIReport_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: get_LngQuitReport_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: get_SteeringAngleSpd_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: get_VehRng_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: get_VehWheelTorqMax_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: set_Checksum1_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: set_Checksum2_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: set_Checksum3_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: set_MsgCounter1_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: set_MsgCounter2_InitialCondition
   * Referenced by: synthesized block
   */
  0U,

  /* Computed Parameter: set_MsgCounter3_InitialCondition
   * Referenced by: synthesized block
   */
  0U
};

AION_IDS_SPEEDGOAT_cal_type *AION_IDS_SPEEDGOAT_cal =
  &AION_IDS_SPEEDGOAT_cal_impl;
