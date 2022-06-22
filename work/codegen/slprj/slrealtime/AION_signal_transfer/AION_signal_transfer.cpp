/*
 * Code generation for system model 'AION_signal_transfer'
 *
 * Model                      : AION_signal_transfer
 * Model version              : 4.110
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Mon Jun 20 15:44:32 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "AION_signal_transfer.h"
#include "AION_signal_transfer_private.h"

/* Output and update for referenced model: 'AION_signal_transfer' */
void AION_signal_transfer(const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt,
  const real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HornSt,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRdySt,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_ACCButtInfo,
  const real_T *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_GPSWeek, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_GPSTime, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Heading, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Pitch, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Roll, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_IMUWorkStatus, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedX, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedY, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedZ, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationX, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationY, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationZ, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Latitude, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Longitude, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Altitude, const Control_request *
  rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_LatCtrlReq, const
  real_T *rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_SteerAngReq,
  const real_T
  *rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_SteerWhlTorqReq,
  const Control_request
  *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_LngCtrlReq,
  const real_T
  *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_AutoTrqWhlReq,
  const real_T
  *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_BrakeReq, const
  Gear_request
  *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReq,
  const Validation_status
  *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReqVD,
  const Beam_request *rtu_ADCU_InternalOutputPort_set_ADCU_info_set_BeamReq,
  const Enable_request
  *rtu_ADCU_InternalOutputPort_set_ADCU_info_set_BodyCtrlReq, const
  Active_request *rtu_ADCU_InternalOutputPort_set_ADCU_info_set_HornRingReq,
  const Light_request
  *rtu_ADCU_InternalOutputPort_set_ADCU_info_set_TurnLightReq, const real_T
  *rtu_ADCU_InternalOutputPort_set_SPK_info_set_Stx, const real_T
  *rtu_ADCU_InternalOutputPort_set_SPK_info_set_FunctionCode, const real_T
  *rtu_ADCU_InternalOutputPort_set_SPK_info_set_SoundSourceCode, const real_T
  *rtu_ADCU_InternalOutputPort_set_SPK_info_set_VolumeCode, const real_T
  *rtu_ADCU_InternalOutputPort_set_SPK_info_set_Parameter, const real_T
  *rtu_ADCU_InternalOutputPort_set_SPK_info_set_Chk, const real_T
  *rtu_ADCU_InternalOutputPort_set_SPK_info_set_Etx, Control_request
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_LatCtrlReq, real_T
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_SteerAngReq, real_T
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_SteerWhlTorqReq,
  Control_request
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_LngCtrlReq,
  real_T
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_AutoTrqWhlReq,
  real_T *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_BrakeReq,
  Gear_request
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReq,
  Validation_status
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReqVD,
  uint32_T *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum1, uint32_T
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter1, uint32_T
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum2, uint32_T
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter2, uint32_T
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum3, uint32_T
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter3, Beam_request
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_BeamReq, Enable_request
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_BodyCtrlReq, Active_request
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_HornRingReq, Light_request
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_TurnLightReq, real_T
  *rty_ADCU_InternalInputPort_set_SPK_info_set_Stx, real_T
  *rty_ADCU_InternalInputPort_set_SPK_info_set_FunctionCode, real_T
  *rty_ADCU_InternalInputPort_set_SPK_info_set_SoundSourceCode, real_T
  *rty_ADCU_InternalInputPort_set_SPK_info_set_VolumeCode, real_T
  *rty_ADCU_InternalInputPort_set_SPK_info_set_Parameter, real_T
  *rty_ADCU_InternalInputPort_set_SPK_info_set_Chk, real_T
  *rty_ADCU_InternalInputPort_set_SPK_info_set_Etx, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ABSActiveSt, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehSpd, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehSpdVD, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_YawRate, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLaltrlAccel, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLongAccel, uint32_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ActVehWheelTorq, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GearLeverIntv, Drive_status
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehDrvMod, Ready_status
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehRdySt, uint32_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehRng, Gear_status
  *rty_ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvl, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvlVD, real_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GasPedalActPst, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_AccElecECFail, uint32_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehWheelTorqMax, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_BrkPedalSt, uint32_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ACCButtInfo, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LatAutoCheckReport,
  Control_status *rty_ADCU_InternalInputPort_get_SCU_info_get_LatCtrlMode,
  uint32_T *rty_ADCU_InternalInputPort_get_SCU_info_get_LatQuitReport, uint32_T *
  rty_ADCU_InternalInputPort_get_SCU_info_get_LngAutoCheckIReport,
  Control_status *rty_ADCU_InternalInputPort_get_SCU_info_get_LngCtrlMode,
  uint32_T *rty_ADCU_InternalInputPort_get_SCU_info_get_LngQuitReport, uint8_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_StrngWhlIntv, uint8_T
  *rty_ADCU_InternalInputPort_get_EPB_info_get_SysSt, uint8_T
  *rty_ADCU_InternalInputPort_get_SRS_info_get_DriverSeatBeltSt, uint8_T
  *rty_ADCU_InternalInputPort_get_SRS_info_get_PsngrSeatBeltSt, real_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngle, uint32_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpd, uint8_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpdVD, uint8_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleVD, real_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_StrngWhlTorq, Available_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_CtrlAvailable, Active_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HazardLampSt, Active_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HighBeamSt, Active_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HornSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCM_info_get_KeySt, Active_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_LeftTurnLampSt, Active_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_LowBeamSt, Active_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_RightTurnLampSt, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_GPSWeek, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_GPSTime, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Heading, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Pitch, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Roll, IMU_Status
  *rty_ADCU_InternalInputPort_get_IMU_info_get_IMUWorkStatus, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedX, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedY, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedZ, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AccelerationX, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AccelerationY, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AccelerationZ, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Latitude, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Longitude, real_T
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Altitude, real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_Stx, real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_FunctionCode, real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_SoundSourceCode, real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_VolumeCode, real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_Parameter, real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_Chk, real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_Etx,
  B_AION_signal_transfer_c_T *localB)
{
  real_T tmp;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SRS_info_get_DriverSeatBeltSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SRS_info_get_PsngrSeatBeltSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpd = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpdVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_StrngWhlTorq = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_KeySt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_LatCtrlReq = Manual;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_SteerAngReq = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_SteerWhlTorqReq = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_LngCtrlReq =
    Manual;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_AutoTrqWhlReq =
    0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_BrakeReq = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReq =
    NoRequest;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReqVD =
    Invalid;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum1 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_TurnLightReq = NoLightRequest;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter1 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum2 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter2 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum3 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter3 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_BeamReq = NoBeamRequest;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_BodyCtrlReq = Disable;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_HornRingReq = NotActiveRequest;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_SPK_info_set_Stx = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_SPK_info_set_FunctionCode = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_SPK_info_set_SoundSourceCode = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_SPK_info_set_VolumeCode = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_SPK_info_set_Parameter = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_SPK_info_set_Chk = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_SPK_info_set_Etx = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ABSActiveSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehSpdVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_YawRate = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLaltrlAccel = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLongAccel = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ActVehWheelTorq = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehWheelTorqMax = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_BrkPedalSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GearLeverIntv = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehRng = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvlVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GasPedalActPst = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_AccElecECFail = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LatAutoCheckReport = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LatQuitReport = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LngAutoCheckIReport = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LngQuitReport = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_StrngWhlIntv = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPB_info_get_SysSt = 0U;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  localB->DataTypeConversion1 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion12' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehSpd =
    *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd;

  /* DataTypeConversion: '<Root>/Data Type Conversion13' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion13' */
  localB->DataTypeConversion13 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion17' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LngCtrlMode =
    static_cast<Control_status>(localB->DataTypeConversion13);

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode);
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

  /* DataTypeConversion: '<Root>/Data Type Conversion18' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LatCtrlMode =
    static_cast<Control_status>(localB->DataTypeConversion2);

  /* DataTypeConversion: '<Root>/Data Type Conversion20' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_CtrlAvailable =
    static_cast<Available_status>(localB->DataTypeConversion1);

  /* DataTypeConversion: '<Root>/Data Type Conversion23' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_GPSTime =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_GPSTime;

  /* DataTypeConversion: '<Root>/Data Type Conversion24' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Heading =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Heading;

  /* DataTypeConversion: '<Root>/Data Type Conversion30' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Pitch =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Pitch;

  /* DataTypeConversion: '<Root>/Data Type Conversion31' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Roll =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Roll;

  /* DataTypeConversion: '<Root>/Data Type Conversion32' */
  tmp = std::floor(*rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_IMUWorkStatus);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion32' */
  localB->DataTypeConversion32 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion33' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedX =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedX;

  /* DataTypeConversion: '<Root>/Data Type Conversion35' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion35' */
  localB->DataTypeConversion35 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion34' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvl =
    static_cast<Gear_status>(localB->DataTypeConversion35);

  /* DataTypeConversion: '<Root>/Data Type Conversion36' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion36' */
  localB->DataTypeConversion36 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion37' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HazardLampSt =
    static_cast<Active_status>(localB->DataTypeConversion36);

  /* DataTypeConversion: '<Root>/Data Type Conversion38' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HornSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion38' */
  localB->DataTypeConversion38 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion39' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HornSt =
    static_cast<Active_status>(localB->DataTypeConversion38);

  /* DataTypeConversion: '<Root>/Data Type Conversion40' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion40' */
  localB->DataTypeConversion40 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion41' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_LowBeamSt =
    static_cast<Active_status>(localB->DataTypeConversion40);

  /* DataTypeConversion: '<Root>/Data Type Conversion42' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion42' */
  localB->DataTypeConversion42 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion43' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HighBeamSt =
    static_cast<Active_status>(localB->DataTypeConversion42);

  /* DataTypeConversion: '<Root>/Data Type Conversion44' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion44' */
  localB->DataTypeConversion44 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion45' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_LeftTurnLampSt =
    static_cast<Active_status>(localB->DataTypeConversion44);

  /* DataTypeConversion: '<Root>/Data Type Conversion46' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion46' */
  localB->DataTypeConversion46 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion47' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_RightTurnLampSt =
    static_cast<Active_status>(localB->DataTypeConversion46);

  /* DataTypeConversion: '<Root>/Data Type Conversion48' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRdySt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion48' */
  localB->DataTypeConversion48 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion49' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehRdySt =
    static_cast<Ready_status>(localB->DataTypeConversion48);

  /* DataTypeConversion: '<Root>/Data Type Conversion51' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion51' */
  localB->DataTypeConversion51 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion50' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehDrvMod =
    static_cast<Drive_status>(localB->DataTypeConversion51);

  /* DataTypeConversion: '<Root>/Data Type Conversion52' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedY =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedY;

  /* DataTypeConversion: '<Root>/Data Type Conversion53' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedZ =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedZ;

  /* DataTypeConversion: '<Root>/Data Type Conversion54' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AccelerationX =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationX;

  /* DataTypeConversion: '<Root>/Data Type Conversion55' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AccelerationY =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationY;

  /* DataTypeConversion: '<Root>/Data Type Conversion56' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_AccelerationZ =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationZ;

  /* DataTypeConversion: '<Root>/Data Type Conversion57' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Latitude =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Latitude;

  /* DataTypeConversion: '<Root>/Data Type Conversion58' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Longitude =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Longitude;

  /* DataTypeConversion: '<Root>/Data Type Conversion59' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_Altitude =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Altitude;

  /* DataTypeConversion: '<Root>/Data Type Conversion60' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_IMUWorkStatus =
    static_cast<IMU_Status>(localB->DataTypeConversion32);

  /* DataTypeConversion: '<Root>/Data Type Conversion61' */
  *rty_ADCU_InternalInputPort_get_IMU_info_get_GPSWeek =
    *rtu_ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_GPSWeek;

  /* DataTypeConversion: '<Root>/Data Type Conversion70' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_ACCButtInfo);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 4.294967296E+9);
  }

  *rty_ADCU_InternalInputPort_get_VCU_info_get_ACCButtInfo = tmp < 0.0 ?
    static_cast<uint32_T>(-static_cast<int32_T>(static_cast<uint32_T>(-tmp))) :
    static_cast<uint32_T>(tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion70' */

  /* DataTypeConversion: '<Root>/Data Type Conversion8' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngle =
    *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  localB->DataTypeConversion3 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_LngCtrlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq =
    localB->DataTypeConversion3;

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  localB->DataTypeConversion11 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReqVD);

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  localB->DataTypeConversion4 = static_cast<uint64_T>
    (*rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion14' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq =
    static_cast<real_T>(localB->DataTypeConversion4);

  /* DataTypeConversion: '<Root>/Data Type Conversion15' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq =
    static_cast<int32_T>
    (*rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_LatCtrlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion16' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq =
    *rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_SteerAngReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion26' */
  localB->DataTypeConversion26 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_ADCU_info_set_BodyCtrlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion19' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq =
    localB->DataTypeConversion26;

  /* DataTypeConversion: '<Root>/Data Type Conversion27' */
  localB->DataTypeConversion27 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_ADCU_info_set_TurnLightReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion21' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq =
    localB->DataTypeConversion27;

  /* DataTypeConversion: '<Root>/Data Type Conversion28' */
  localB->DataTypeConversion28 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_ADCU_info_set_HornRingReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion22' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq =
    localB->DataTypeConversion28;

  /* DataTypeConversion: '<Root>/Data Type Conversion29' */
  localB->DataTypeConversion29 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_ADCU_info_set_BeamReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion25' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq =
    localB->DataTypeConversion29;

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq =
    *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_AutoTrqWhlReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion6' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq =
    *rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_SteerWhlTorqReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion62' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_Chk =
    *rtu_ADCU_InternalOutputPort_set_SPK_info_set_Chk;

  /* DataTypeConversion: '<Root>/Data Type Conversion63' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_Etx =
    *rtu_ADCU_InternalOutputPort_set_SPK_info_set_Etx;

  /* DataTypeConversion: '<Root>/Data Type Conversion64' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_FunctionCode =
    *rtu_ADCU_InternalOutputPort_set_SPK_info_set_FunctionCode;

  /* DataTypeConversion: '<Root>/Data Type Conversion65' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_Parameter =
    *rtu_ADCU_InternalOutputPort_set_SPK_info_set_Parameter;

  /* DataTypeConversion: '<Root>/Data Type Conversion66' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_SoundSourceCode =
    *rtu_ADCU_InternalOutputPort_set_SPK_info_set_SoundSourceCode;

  /* DataTypeConversion: '<Root>/Data Type Conversion67' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_Stx =
    *rtu_ADCU_InternalOutputPort_set_SPK_info_set_Stx;

  /* DataTypeConversion: '<Root>/Data Type Conversion69' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SPK_bus_ADCU_VolumeCode =
    *rtu_ADCU_InternalOutputPort_set_SPK_info_set_VolumeCode;

  /* DataTypeConversion: '<Root>/Data Type Conversion7' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq =
    *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_BrakeReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD =
    localB->DataTypeConversion11;
}

/* Model initialize function */
void AION_signal_transfer_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AION_signal_transfer_T *const AION_signal_transfer_M,
  B_AION_signal_transfer_c_T *localB)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(AION_signal_transfer_M, rt_errorStatus);

  /* block I/O */
  (void) std::memset((static_cast<void *>(localB)), 0,
                     sizeof(B_AION_signal_transfer_c_T));

  {
    localB->DataTypeConversion4 = (0UL);
  }
}
