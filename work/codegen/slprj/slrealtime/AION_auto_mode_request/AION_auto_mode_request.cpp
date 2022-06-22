/*
 * Code generation for system model 'AION_auto_mode_request'
 *
 * Model                      : AION_auto_mode_request
 * Model version              : 1.109
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Tue Jun 21 15:24:41 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "AION_auto_mode_request.h"
#include "AION_auto_mode_request_private.h"
#include "look1_binlxpw.h"

/* Named constants for Chart: '<Root>/Chart' */
const uint32_T AION_auto_mode_request_IN_Name = 1U;
const uint32_T AION_auto_mode_request_IN_Name1 = 2U;
P_AION_auto_mode_request_T AION_auto_mode_request_P = {
  /* Mask Parameter: BitwiseAND_BitMask
   * Referenced by: '<Root>/Bitwise AND'
   */
  1U,

  /* Expression: [76 77 78 79 72]
   * Referenced by: '<Root>/SPK_Chk'
   */
  { 76.0, 77.0, 78.0, 79.0, 72.0 },

  /* Expression: [0:4]
   * Referenced by: '<Root>/SPK_Chk'
   */
  { 0.0, 1.0, 2.0, 3.0, 4.0 }
};

/* System initialize for referenced model: 'AION_auto_mode_request' */
void AION_auto_mode_request_Init(B_AION_auto_mode_request_c_T *localB,
  DW_AION_auto_mode_request_f_T *localDW)
{
  /* SystemInitialize for Chart: '<Root>/Chart' */
  localDW->is_active_c3_AION_auto_mode_request = 0U;
  localDW->is_c3_AION_auto_mode_request = 0U;
  localB->LatCtrlReq = 0.0;
  localB->QlightChannel_f = 0U;

  /* SystemInitialize for Chart: '<Root>/Chart2' */
  localDW->is_active_c2_AION_auto_mode_request = 0U;
  localDW->is_c2_AION_auto_mode_request = 0U;
  localB->LngCtrlReq = 0.0;
}

/* System reset for referenced model: 'AION_auto_mode_request' */
void AION_auto_mode_request_Reset(B_AION_auto_mode_request_c_T *localB,
  DW_AION_auto_mode_request_f_T *localDW)
{
  /* SystemReset for Chart: '<Root>/Chart' */
  localDW->is_active_c3_AION_auto_mode_request = 0U;
  localDW->is_c3_AION_auto_mode_request = 0U;
  localB->LatCtrlReq = 0.0;
  localB->QlightChannel_f = 0U;

  /* SystemReset for Chart: '<Root>/Chart2' */
  localDW->is_active_c2_AION_auto_mode_request = 0U;
  localDW->is_c2_AION_auto_mode_request = 0U;
  localB->LngCtrlReq = 0.0;
}

/* Output and update for referenced model: 'AION_auto_mode_request' */
void AION_auto_mode_request(const real_T
  *rtu_InBus_set_lateral_control_info_set_SteerAngReq, const real_T
  *rtu_InBus_set_lateral_control_info_set_SteerWhlTorqReq, const real_T
  *rtu_InBus_set_longitudinal_control_info_set_AutoTrqWhlReq, const real_T
  *rtu_InBus_set_longitudinal_control_info_set_BrakeReq, const Gear_request
  *rtu_InBus_set_longitudinal_control_info_set_GearLvlReq, const
  Validation_status *rtu_InBus_set_longitudinal_control_info_set_GearLvlReqVD,
  const uint32_T *rtu_InBus_set_ADCU_info_set_Checksum1, const uint32_T
  *rtu_InBus_set_ADCU_info_set_MsgCounter1, const uint32_T
  *rtu_InBus_set_ADCU_info_set_Checksum2, const uint32_T
  *rtu_InBus_set_ADCU_info_set_MsgCounter2, const uint32_T
  *rtu_InBus_set_ADCU_info_set_Checksum3, const uint32_T
  *rtu_InBus_set_ADCU_info_set_MsgCounter3, const Beam_request
  *rtu_InBus_set_ADCU_info_set_BeamReq, const Enable_request
  *rtu_InBus_set_ADCU_info_set_BodyCtrlReq, const Active_request
  *rtu_InBus_set_ADCU_info_set_HornRingReq, const Light_request
  *rtu_InBus_set_ADCU_info_set_TurnLightReq, const real_T
  *rtu_InBus_set_SPK_info_set_Stx, const real_T
  *rtu_InBus_set_SPK_info_set_FunctionCode, const real_T
  *rtu_InBus_set_SPK_info_set_VolumeCode, const real_T
  *rtu_InBus_set_SPK_info_set_Parameter, const real_T
  *rtu_InBus_set_SPK_info_set_Etx, const uint8_T
  *rtu_InBus_get_BCS_info_get_ABSActiveSt, const real_T
  *rtu_InBus_get_BCS_info_get_VehSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_VehSpdVD, const real_T
  *rtu_InBus_get_BCS_info_get_YawRate, const real_T
  *rtu_InBus_get_BCS_info_get_ActVehLaltrlAccel, const real_T
  *rtu_InBus_get_BCS_info_get_ActVehLongAccel, const uint32_T
  *rtu_InBus_get_VCU_info_get_ActVehWheelTorq, const uint8_T
  *rtu_InBus_get_VCU_info_get_GearLeverIntv, const Drive_status
  *rtu_InBus_get_VCU_info_get_VehDrvMod, const Ready_status
  *rtu_InBus_get_VCU_info_get_VehRdySt, const uint32_T
  *rtu_InBus_get_VCU_info_get_VehRng, const Gear_status
  *rtu_InBus_get_VCU_info_get_CrntGearLvl, const uint8_T
  *rtu_InBus_get_VCU_info_get_CrntGearLvlVD, const real_T
  *rtu_InBus_get_VCU_info_get_GasPedalActPst, const uint8_T
  *rtu_InBus_get_VCU_info_get_AccElecECFail, const uint32_T
  *rtu_InBus_get_VCU_info_get_VehWheelTorqMax, const uint8_T
  *rtu_InBus_get_VCU_info_get_BrkPedalSt, const uint32_T
  *rtu_InBus_get_VCU_info_get_ACCButtInfo, const uint32_T
  *rtu_InBus_get_SCU_info_get_LatAutoCheckReport, const Control_status
  *rtu_InBus_get_SCU_info_get_LatCtrlMode, const uint32_T
  *rtu_InBus_get_SCU_info_get_LatQuitReport, const uint32_T
  *rtu_InBus_get_SCU_info_get_LngAutoCheckIReport, const Control_status
  *rtu_InBus_get_SCU_info_get_LngCtrlMode, const uint32_T
  *rtu_InBus_get_SCU_info_get_LngQuitReport, const uint8_T
  *rtu_InBus_get_SCU_info_get_StrngWhlIntv, const uint8_T
  *rtu_InBus_get_EPB_info_get_SysSt, const uint8_T
  *rtu_InBus_get_SRS_info_get_DriverSeatBeltSt, const uint8_T
  *rtu_InBus_get_SRS_info_get_PsngrSeatBeltSt, const real_T
  *rtu_InBus_get_EPS_info_get_SteeringAngle, const uint32_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleSpd, const uint8_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleSpdVD, const uint8_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleVD, const real_T
  *rtu_InBus_get_EPS_info_get_StrngWhlTorq, const Available_status
  *rtu_InBus_get_BCM_info_get_CtrlAvailable, const Active_status
  *rtu_InBus_get_BCM_info_get_HazardLampSt, const Active_status
  *rtu_InBus_get_BCM_info_get_HighBeamSt, const Active_status
  *rtu_InBus_get_BCM_info_get_HornSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_KeySt, const Active_status
  *rtu_InBus_get_BCM_info_get_LeftTurnLampSt, const Active_status
  *rtu_InBus_get_BCM_info_get_LowBeamSt, const Active_status
  *rtu_InBus_get_BCM_info_get_RightTurnLampSt, const real_T
  *rtu_InBus_get_IMU_info_get_GPSWeek, const real_T
  *rtu_InBus_get_IMU_info_get_GPSTime, const real_T
  *rtu_InBus_get_IMU_info_get_Heading, const real_T
  *rtu_InBus_get_IMU_info_get_Pitch, const real_T
  *rtu_InBus_get_IMU_info_get_Roll, const IMU_Status
  *rtu_InBus_get_IMU_info_get_IMUWorkStatus, const real_T
  *rtu_InBus_get_IMU_info_get_AngleSpeedX, const real_T
  *rtu_InBus_get_IMU_info_get_AngleSpeedY, const real_T
  *rtu_InBus_get_IMU_info_get_AngleSpeedZ, const real_T
  *rtu_InBus_get_IMU_info_get_AccelerationX, const real_T
  *rtu_InBus_get_IMU_info_get_AccelerationY, const real_T
  *rtu_InBus_get_IMU_info_get_AccelerationZ, const real_T
  *rtu_InBus_get_IMU_info_get_Latitude, const real_T
  *rtu_InBus_get_IMU_info_get_Longitude, const real_T
  *rtu_InBus_get_IMU_info_get_Altitude, Control_request
  *rty_OutBus_set_lateral_control_info_set_LatCtrlReq, real_T
  *rty_OutBus_set_lateral_control_info_set_SteerAngReq, real_T
  *rty_OutBus_set_lateral_control_info_set_SteerWhlTorqReq, Control_request
  *rty_OutBus_set_longitudinal_control_info_set_LngCtrlReq, real_T
  *rty_OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq, real_T
  *rty_OutBus_set_longitudinal_control_info_set_BrakeReq, Gear_request
  *rty_OutBus_set_longitudinal_control_info_set_GearLvlReq, Validation_status
  *rty_OutBus_set_longitudinal_control_info_set_GearLvlReqVD, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum1, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter1, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum2, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter2, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum3, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter3, Beam_request
  *rty_OutBus_set_ADCU_info_set_BeamReq, Enable_request
  *rty_OutBus_set_ADCU_info_set_BodyCtrlReq, Active_request
  *rty_OutBus_set_ADCU_info_set_HornRingReq, Light_request
  *rty_OutBus_set_ADCU_info_set_TurnLightReq, real_T
  *rty_OutBus_set_SPK_info_set_Stx, real_T
  *rty_OutBus_set_SPK_info_set_FunctionCode, real_T
  *rty_OutBus_set_SPK_info_set_SoundSourceCode, real_T
  *rty_OutBus_set_SPK_info_set_VolumeCode, real_T
  *rty_OutBus_set_SPK_info_set_Parameter, real_T
  *rty_OutBus_set_SPK_info_set_Chk, real_T *rty_OutBus_set_SPK_info_set_Etx,
  uint8_T *rty_OutBus_get_BCS_info_get_ABSActiveSt, real_T
  *rty_OutBus_get_BCS_info_get_VehSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_VehSpdVD, real_T
  *rty_OutBus_get_BCS_info_get_YawRate, real_T
  *rty_OutBus_get_BCS_info_get_ActVehLaltrlAccel, real_T
  *rty_OutBus_get_BCS_info_get_ActVehLongAccel, uint32_T
  *rty_OutBus_get_VCU_info_get_ActVehWheelTorq, uint8_T
  *rty_OutBus_get_VCU_info_get_GearLeverIntv, Drive_status
  *rty_OutBus_get_VCU_info_get_VehDrvMod, Ready_status
  *rty_OutBus_get_VCU_info_get_VehRdySt, uint32_T
  *rty_OutBus_get_VCU_info_get_VehRng, Gear_status
  *rty_OutBus_get_VCU_info_get_CrntGearLvl, uint8_T
  *rty_OutBus_get_VCU_info_get_CrntGearLvlVD, real_T
  *rty_OutBus_get_VCU_info_get_GasPedalActPst, uint8_T
  *rty_OutBus_get_VCU_info_get_AccElecECFail, uint32_T
  *rty_OutBus_get_VCU_info_get_VehWheelTorqMax, uint8_T
  *rty_OutBus_get_VCU_info_get_BrkPedalSt, uint32_T
  *rty_OutBus_get_VCU_info_get_ACCButtInfo, uint32_T
  *rty_OutBus_get_SCU_info_get_LatAutoCheckReport, Control_status
  *rty_OutBus_get_SCU_info_get_LatCtrlMode, uint32_T
  *rty_OutBus_get_SCU_info_get_LatQuitReport, uint32_T
  *rty_OutBus_get_SCU_info_get_LngAutoCheckIReport, Control_status
  *rty_OutBus_get_SCU_info_get_LngCtrlMode, uint32_T
  *rty_OutBus_get_SCU_info_get_LngQuitReport, uint8_T
  *rty_OutBus_get_SCU_info_get_StrngWhlIntv, uint8_T
  *rty_OutBus_get_EPB_info_get_SysSt, uint8_T
  *rty_OutBus_get_SRS_info_get_DriverSeatBeltSt, uint8_T
  *rty_OutBus_get_SRS_info_get_PsngrSeatBeltSt, real_T
  *rty_OutBus_get_EPS_info_get_SteeringAngle, uint32_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleSpd, uint8_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleSpdVD, uint8_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleVD, real_T
  *rty_OutBus_get_EPS_info_get_StrngWhlTorq, Available_status
  *rty_OutBus_get_BCM_info_get_CtrlAvailable, Active_status
  *rty_OutBus_get_BCM_info_get_HazardLampSt, Active_status
  *rty_OutBus_get_BCM_info_get_HighBeamSt, Active_status
  *rty_OutBus_get_BCM_info_get_HornSt, uint8_T
  *rty_OutBus_get_BCM_info_get_KeySt, Active_status
  *rty_OutBus_get_BCM_info_get_LeftTurnLampSt, Active_status
  *rty_OutBus_get_BCM_info_get_LowBeamSt, Active_status
  *rty_OutBus_get_BCM_info_get_RightTurnLampSt, real_T
  *rty_OutBus_get_IMU_info_get_GPSWeek, real_T
  *rty_OutBus_get_IMU_info_get_GPSTime, real_T
  *rty_OutBus_get_IMU_info_get_Heading, real_T
  *rty_OutBus_get_IMU_info_get_Pitch, real_T *rty_OutBus_get_IMU_info_get_Roll,
  IMU_Status *rty_OutBus_get_IMU_info_get_IMUWorkStatus, real_T
  *rty_OutBus_get_IMU_info_get_AngleSpeedX, real_T
  *rty_OutBus_get_IMU_info_get_AngleSpeedY, real_T
  *rty_OutBus_get_IMU_info_get_AngleSpeedZ, real_T
  *rty_OutBus_get_IMU_info_get_AccelerationX, real_T
  *rty_OutBus_get_IMU_info_get_AccelerationY, real_T
  *rty_OutBus_get_IMU_info_get_AccelerationZ, real_T
  *rty_OutBus_get_IMU_info_get_Latitude, real_T
  *rty_OutBus_get_IMU_info_get_Longitude, real_T
  *rty_OutBus_get_IMU_info_get_Altitude, B_AION_auto_mode_request_c_T *localB,
  DW_AION_auto_mode_request_f_T *localDW)
{
  real_T tmp;
  boolean_T guard1 = false;
  boolean_T sf_internal_predicateOutput;

  /* S-Function (sfix_bitop): '<Root>/Bitwise AND' */
  localB->BitwiseAND = *rtu_InBus_get_VCU_info_get_ACCButtInfo &
    AION_auto_mode_request_P.BitwiseAND_BitMask;

  /* Chart: '<Root>/Chart' */
  /* Gateway: Chart */
  /* During: Chart */
  if (localDW->is_active_c3_AION_auto_mode_request == 0U) {
    /* Entry: Chart */
    localDW->is_active_c3_AION_auto_mode_request = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:17' */
    localDW->is_c3_AION_auto_mode_request = AION_auto_mode_request_IN_Name1;

    /* Entry 'Name1': '<S1>:16' */
    localB->LatCtrlReq = 0.0;
  } else if (localDW->is_c3_AION_auto_mode_request ==
             AION_auto_mode_request_IN_Name) {
    /* During 'Name': '<S1>:3' */
    guard1 = false;
    if (localB->BitwiseAND == 0U) {
      /* Transition: '<S1>:7' */
      localB->QlightChannel_f = 2U;
      guard1 = true;
    } else {
      sf_internal_predicateOutput = ((static_cast<int32_T>
        (*rtu_InBus_get_SCU_info_get_LatCtrlMode) == 1) || (static_cast<int32_T>
        (*rtu_InBus_get_SCU_info_get_LatCtrlMode) == 3));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S1>:5' */
        localB->QlightChannel_f = 3U;
        guard1 = true;
      } else {
        localB->LatCtrlReq = 1.0;
        localB->QlightChannel_f = 0U;
      }
    }

    if (guard1) {
      localDW->is_c3_AION_auto_mode_request = AION_auto_mode_request_IN_Name1;

      /* Entry 'Name1': '<S1>:16' */
      localB->LatCtrlReq = 0.0;
    }
  } else {
    /* During 'Name1': '<S1>:16' */
    sf_internal_predicateOutput = ((static_cast<int32_T>
      (*rtu_InBus_get_SCU_info_get_LatCtrlMode) == 0) && (localB->BitwiseAND ==
      1U));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S1>:6' */
      localB->QlightChannel_f = 1U;
      localDW->is_c3_AION_auto_mode_request = AION_auto_mode_request_IN_Name;

      /* Entry 'Name': '<S1>:3' */
      localB->LatCtrlReq = 1.0;
    } else {
      localB->LatCtrlReq = 0.0;
      localB->QlightChannel_f = 0U;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  localB->QlightChannel = localB->QlightChannel_f;

  /* Lookup_n-D: '<Root>/SPK_Chk' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   */
  localB->SPK_Chk = look1_binlxpw(localB->QlightChannel,
    AION_auto_mode_request_P.SPK_Chk_bp01Data,
    AION_auto_mode_request_P.SPK_Chk_tableData, 4U);

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_SPK_info_set_SoundSourceCode = localB->QlightChannel;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_SPK_info_set_Chk = localB->SPK_Chk;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_MsgCounter1 =
    *rtu_InBus_set_ADCU_info_set_MsgCounter1;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_Checksum2 =
    *rtu_InBus_set_ADCU_info_set_Checksum2;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_MsgCounter2 =
    *rtu_InBus_set_ADCU_info_set_MsgCounter2;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_Checksum3 =
    *rtu_InBus_set_ADCU_info_set_Checksum3;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_MsgCounter3 =
    *rtu_InBus_set_ADCU_info_set_MsgCounter3;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_BeamReq = *rtu_InBus_set_ADCU_info_set_BeamReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_BodyCtrlReq =
    *rtu_InBus_set_ADCU_info_set_BodyCtrlReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_HornRingReq =
    *rtu_InBus_set_ADCU_info_set_HornRingReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_TurnLightReq =
    *rtu_InBus_set_ADCU_info_set_TurnLightReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_SPK_info_set_Stx = *rtu_InBus_set_SPK_info_set_Stx;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_lateral_control_info_set_SteerAngReq =
    *rtu_InBus_set_lateral_control_info_set_SteerAngReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_SPK_info_set_FunctionCode =
    *rtu_InBus_set_SPK_info_set_FunctionCode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_SPK_info_set_VolumeCode =
    *rtu_InBus_set_SPK_info_set_VolumeCode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_SPK_info_set_Parameter = *rtu_InBus_set_SPK_info_set_Parameter;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_SPK_info_set_Etx = *rtu_InBus_set_SPK_info_set_Etx;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_ABSActiveSt =
    *rtu_InBus_get_BCS_info_get_ABSActiveSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_VehSpd = *rtu_InBus_get_BCS_info_get_VehSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_VehSpdVD = *rtu_InBus_get_BCS_info_get_VehSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_YawRate = *rtu_InBus_get_BCS_info_get_YawRate;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_lateral_control_info_set_SteerWhlTorqReq =
    *rtu_InBus_set_lateral_control_info_set_SteerWhlTorqReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_ActVehLaltrlAccel =
    *rtu_InBus_get_BCS_info_get_ActVehLaltrlAccel;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_ActVehLongAccel =
    *rtu_InBus_get_BCS_info_get_ActVehLongAccel;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_ActVehWheelTorq =
    *rtu_InBus_get_VCU_info_get_ActVehWheelTorq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_GearLeverIntv =
    *rtu_InBus_get_VCU_info_get_GearLeverIntv;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_VehDrvMod = *rtu_InBus_get_VCU_info_get_VehDrvMod;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_VehRdySt = *rtu_InBus_get_VCU_info_get_VehRdySt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_VehRng = *rtu_InBus_get_VCU_info_get_VehRng;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_CrntGearLvl =
    *rtu_InBus_get_VCU_info_get_CrntGearLvl;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_CrntGearLvlVD =
    *rtu_InBus_get_VCU_info_get_CrntGearLvlVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_GasPedalActPst =
    *rtu_InBus_get_VCU_info_get_GasPedalActPst;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_AccElecECFail =
    *rtu_InBus_get_VCU_info_get_AccElecECFail;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_VehWheelTorqMax =
    *rtu_InBus_get_VCU_info_get_VehWheelTorqMax;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_BrkPedalSt =
    *rtu_InBus_get_VCU_info_get_BrkPedalSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_ACCButtInfo =
    *rtu_InBus_get_VCU_info_get_ACCButtInfo;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_LatAutoCheckReport =
    *rtu_InBus_get_SCU_info_get_LatAutoCheckReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_LatCtrlMode =
    *rtu_InBus_get_SCU_info_get_LatCtrlMode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_LatQuitReport =
    *rtu_InBus_get_SCU_info_get_LatQuitReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_LngAutoCheckIReport =
    *rtu_InBus_get_SCU_info_get_LngAutoCheckIReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_LngCtrlMode =
    *rtu_InBus_get_SCU_info_get_LngCtrlMode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_LngQuitReport =
    *rtu_InBus_get_SCU_info_get_LngQuitReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq =
    *rtu_InBus_set_longitudinal_control_info_set_AutoTrqWhlReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_StrngWhlIntv =
    *rtu_InBus_get_SCU_info_get_StrngWhlIntv;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPB_info_get_SysSt = *rtu_InBus_get_EPB_info_get_SysSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SRS_info_get_DriverSeatBeltSt =
    *rtu_InBus_get_SRS_info_get_DriverSeatBeltSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SRS_info_get_PsngrSeatBeltSt =
    *rtu_InBus_get_SRS_info_get_PsngrSeatBeltSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPS_info_get_SteeringAngle =
    *rtu_InBus_get_EPS_info_get_SteeringAngle;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPS_info_get_SteeringAngleSpd =
    *rtu_InBus_get_EPS_info_get_SteeringAngleSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPS_info_get_SteeringAngleSpdVD =
    *rtu_InBus_get_EPS_info_get_SteeringAngleSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPS_info_get_SteeringAngleVD =
    *rtu_InBus_get_EPS_info_get_SteeringAngleVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPS_info_get_StrngWhlTorq =
    *rtu_InBus_get_EPS_info_get_StrngWhlTorq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_CtrlAvailable =
    *rtu_InBus_get_BCM_info_get_CtrlAvailable;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_set_BrakeReq =
    *rtu_InBus_set_longitudinal_control_info_set_BrakeReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_HazardLampSt =
    *rtu_InBus_get_BCM_info_get_HazardLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_HighBeamSt =
    *rtu_InBus_get_BCM_info_get_HighBeamSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_HornSt = *rtu_InBus_get_BCM_info_get_HornSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_KeySt = *rtu_InBus_get_BCM_info_get_KeySt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_LeftTurnLampSt =
    *rtu_InBus_get_BCM_info_get_LeftTurnLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_LowBeamSt = *rtu_InBus_get_BCM_info_get_LowBeamSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_RightTurnLampSt =
    *rtu_InBus_get_BCM_info_get_RightTurnLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_GPSWeek = *rtu_InBus_get_IMU_info_get_GPSWeek;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_GPSTime = *rtu_InBus_get_IMU_info_get_GPSTime;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_Heading = *rtu_InBus_get_IMU_info_get_Heading;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_set_GearLvlReq =
    *rtu_InBus_set_longitudinal_control_info_set_GearLvlReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_Pitch = *rtu_InBus_get_IMU_info_get_Pitch;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_Roll = *rtu_InBus_get_IMU_info_get_Roll;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_IMUWorkStatus =
    *rtu_InBus_get_IMU_info_get_IMUWorkStatus;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_AngleSpeedX =
    *rtu_InBus_get_IMU_info_get_AngleSpeedX;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_AngleSpeedY =
    *rtu_InBus_get_IMU_info_get_AngleSpeedY;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_AngleSpeedZ =
    *rtu_InBus_get_IMU_info_get_AngleSpeedZ;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_AccelerationX =
    *rtu_InBus_get_IMU_info_get_AccelerationX;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_AccelerationY =
    *rtu_InBus_get_IMU_info_get_AccelerationY;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_AccelerationZ =
    *rtu_InBus_get_IMU_info_get_AccelerationZ;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_Latitude = *rtu_InBus_get_IMU_info_get_Latitude;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_set_GearLvlReqVD =
    *rtu_InBus_set_longitudinal_control_info_set_GearLvlReqVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_Longitude = *rtu_InBus_get_IMU_info_get_Longitude;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_IMU_info_get_Altitude = *rtu_InBus_get_IMU_info_get_Altitude;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_Checksum1 =
    *rtu_InBus_set_ADCU_info_set_Checksum1;

  /* Chart: '<Root>/Chart2' */
  /* Gateway: Chart2 */
  /* During: Chart2 */
  if (localDW->is_active_c2_AION_auto_mode_request == 0U) {
    /* Entry: Chart2 */
    localDW->is_active_c2_AION_auto_mode_request = 1U;

    /* Entry Internal: Chart2 */
    /* Transition: '<S2>:1' */
    localDW->is_c2_AION_auto_mode_request = AION_auto_mode_request_IN_Name1;

    /* Entry 'Name1': '<S2>:3' */
    localB->LngCtrlReq = 0.0;
  } else if (localDW->is_c2_AION_auto_mode_request ==
             AION_auto_mode_request_IN_Name) {
    /* During 'Name': '<S2>:2' */
    guard1 = false;
    if (localB->BitwiseAND == 0U) {
      /* Transition: '<S2>:6' */
      guard1 = true;
    } else {
      sf_internal_predicateOutput = ((static_cast<int32_T>
        (*rtu_InBus_get_SCU_info_get_LngCtrlMode) == 1) || (static_cast<int32_T>
        (*rtu_InBus_get_SCU_info_get_LngCtrlMode) == 3));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S2>:5' */
        guard1 = true;
      } else {
        localB->LngCtrlReq = 1.0;
      }
    }

    if (guard1) {
      localDW->is_c2_AION_auto_mode_request = AION_auto_mode_request_IN_Name1;

      /* Entry 'Name1': '<S2>:3' */
      localB->LngCtrlReq = 0.0;
    }
  } else {
    /* During 'Name1': '<S2>:3' */
    sf_internal_predicateOutput = ((static_cast<int32_T>
      (*rtu_InBus_get_SCU_info_get_LngCtrlMode) == 0) && (localB->BitwiseAND ==
      1U));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S2>:4' */
      localDW->is_c2_AION_auto_mode_request = AION_auto_mode_request_IN_Name;

      /* Entry 'Name': '<S2>:2' */
      localB->LngCtrlReq = 1.0;
    } else {
      localB->LngCtrlReq = 0.0;
    }
  }

  /* End of Chart: '<Root>/Chart2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  tmp = std::floor(localB->LatCtrlReq);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  localB->DataTypeConversion2 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  *rty_OutBus_set_lateral_control_info_set_LatCtrlReq =
    static_cast<Control_request>(localB->DataTypeConversion2);

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  tmp = std::floor(localB->LngCtrlReq);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  localB->DataTypeConversion10 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  *rty_OutBus_set_longitudinal_control_info_set_LngCtrlReq =
    static_cast<Control_request>(localB->DataTypeConversion10);
}

/* Model initialize function */
void AION_auto_mode_request_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AION_auto_mode_request_T *const AION_auto_mode_request_M,
  B_AION_auto_mode_request_c_T *localB, DW_AION_auto_mode_request_f_T *localDW)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(AION_auto_mode_request_M, rt_errorStatus);

  /* block I/O */
  (void) std::memset((static_cast<void *>(localB)), 0,
                     sizeof(B_AION_auto_mode_request_c_T));

  {
    localB->QlightChannel = 0.0;
    localB->SPK_Chk = 0.0;
    localB->LngCtrlReq = 0.0;
    localB->LatCtrlReq = 0.0;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(localDW), 0,
                     sizeof(DW_AION_auto_mode_request_f_T));
}
