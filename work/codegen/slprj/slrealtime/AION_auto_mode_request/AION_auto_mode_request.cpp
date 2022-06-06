/*
 * Code generation for system model 'AION_auto_mode_request'
 *
 * Model                      : AION_auto_mode_request
 * Model version              : 1.98
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Mon Jun  6 13:08:50 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "AION_auto_mode_request.h"
#include "AION_auto_mode_request_private.h"

/* Output and update for referenced model: 'AION_auto_mode_request' */
void AION_auto_mode_request(const Control_request
  *rtu_InBus_set_lateral_control_info_set_LatCtrlReq, const real_T
  *rtu_InBus_set_lateral_control_info_set_SteerAngReq, const Control_request
  *rtu_InBus_set_longitudinal_control_info_set_LngCtrlReq, const real_T
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
  *rtu_InBus_set_ADCU_info_set_TurnLightReq, const uint8_T
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
  *rtu_InBus_get_BCM_info_get_RightTurnLampSt, Control_request
  *rty_OutBus_set_lateral_control_info_set_LatCtrlReq, real_T
  *rty_OutBus_set_lateral_control_info_set_SteerAngReq, Control_request
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
  *rty_OutBus_set_ADCU_info_set_TurnLightReq, uint8_T
  *rty_OutBus_get_BCS_info_get_ABSActiveSt, real_T
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
  *rty_OutBus_get_BCM_info_get_RightTurnLampSt, B_AION_auto_mode_request_c_T
  *localB)
{
  /* MATLAB Function: '<Root>/Lateral_control_status_judge' */
  /* MATLAB Function 'Lateral_control_status_judge': '<S1>:1' */
  if (*rtu_InBus_set_lateral_control_info_set_LatCtrlReq == Auto) {
    /* '<S1>:1:10' */
    /* '<S1>:1:12' */
    switch (*rtu_InBus_get_SCU_info_get_LatCtrlMode) {
     case QuitStatus:
      /* '<S1>:1:14' */
      localB->lateral_control_req = Manual;
      break;

     case ManualStatus:
      /* '<S1>:1:16' */
      localB->lateral_control_req = Auto;
      break;

     case AutoStatus:
      /* '<S1>:1:18' */
      localB->lateral_control_req = Auto;
      break;

     default:
      /* '<S1>:1:20' */
      localB->lateral_control_req = Manual;
      break;
    }
  } else {
    /* '<S1>:1:23' */
    localB->lateral_control_req = Manual;
  }

  /* End of MATLAB Function: '<Root>/Lateral_control_status_judge' */
  /* MATLAB Function: '<Root>/Longitudinal_control_status_judge' */
  /* MATLAB Function 'Longitudinal_control_status_judge': '<S2>:1' */
  if (*rtu_InBus_set_longitudinal_control_info_set_LngCtrlReq == Auto) {
    /* '<S2>:1:11' */
    /* '<S2>:1:13' */
    switch (*rtu_InBus_get_SCU_info_get_LngCtrlMode) {
     case QuitStatus:
      /* '<S2>:1:15' */
      localB->longitudinal_control_req = Manual;
      break;

     case ManualStatus:
      /* '<S2>:1:17' */
      localB->longitudinal_control_req = Auto;
      break;

     case AutoStatus:
      /* '<S2>:1:19' */
      localB->longitudinal_control_req = Auto;
      break;

     default:
      /* '<S2>:1:21' */
      localB->longitudinal_control_req = Manual;
      break;
    }
  } else {
    /* '<S2>:1:24' */
    localB->longitudinal_control_req = Manual;
  }

  /* End of MATLAB Function: '<Root>/Longitudinal_control_status_judge' */
  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_lateral_control_info_set_LatCtrlReq =
    localB->lateral_control_req;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_set_LngCtrlReq =
    localB->longitudinal_control_req;

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
  *rty_OutBus_get_BCS_info_get_ABSActiveSt =
    *rtu_InBus_get_BCS_info_get_ABSActiveSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_VehSpd = *rtu_InBus_get_BCS_info_get_VehSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_lateral_control_info_set_SteerAngReq =
    *rtu_InBus_set_lateral_control_info_set_SteerAngReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_VehSpdVD = *rtu_InBus_get_BCS_info_get_VehSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_YawRate = *rtu_InBus_get_BCS_info_get_YawRate;

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
  *rty_OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq =
    *rtu_InBus_set_longitudinal_control_info_set_AutoTrqWhlReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_LngQuitReport =
    *rtu_InBus_get_SCU_info_get_LngQuitReport;

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
  *rty_OutBus_set_longitudinal_control_info_set_BrakeReq =
    *rtu_InBus_set_longitudinal_control_info_set_BrakeReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_CtrlAvailable =
    *rtu_InBus_get_BCM_info_get_CtrlAvailable;

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
  *rty_OutBus_set_longitudinal_control_info_set_GearLvlReq =
    *rtu_InBus_set_longitudinal_control_info_set_GearLvlReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_set_GearLvlReqVD =
    *rtu_InBus_set_longitudinal_control_info_set_GearLvlReqVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_Checksum1 =
    *rtu_InBus_set_ADCU_info_set_Checksum1;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_MsgCounter1 =
    *rtu_InBus_set_ADCU_info_set_MsgCounter1;
}

/* Model initialize function */
void AION_auto_mode_request_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AION_auto_mode_request_T *const AION_auto_mode_request_M,
  B_AION_auto_mode_request_c_T *localB, DW_AION_auto_mode_request_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(AION_auto_mode_request_M, rt_errorStatus);

  /* block I/O */
  {
    localB->longitudinal_control_req = Manual;
    localB->lateral_control_req = Manual;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(localDW), 0,
                     sizeof(DW_AION_auto_mode_request_f_T));
}
