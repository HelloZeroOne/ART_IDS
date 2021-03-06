/*
 * Code generation for system model 'AION_auto_control_request'
 *
 * Model                      : AION_auto_control_request
 * Model version              : 1.49
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Sat May 21 17:22:25 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "AION_auto_control_request.h"
#include "AION_auto_control_request_private.h"

/* Output and update for referenced model: 'AION_auto_control_request' */
void AION_auto_control_request(const Control_request
  *rtu_InBus_set_lateral_control_info_set_lateral_control_request, const real_T *
  rtu_InBus_set_lateral_control_info_set_steer_torque_request, const real_T
  *rtu_InBus_set_lateral_control_info_set_steer_angle_request, const real_T
  *rtu_InBus_set_lateral_control_info_set_steer_ang_spd_limit, const
  Control_status *rtu_InBus_set_lateral_control_info_get_lateral_control_status,
  const real_T *rtu_InBus_set_lateral_control_info_get_EPS_steering_angle, const
  real_T *rtu_InBus_set_longitudinal_control_info_get_vehicle_spd, const
  Control_status
  *rtu_InBus_set_longitudinal_control_info_get_longitudinal_control_status,
  const Control_request
  *rtu_InBus_set_longitudinal_control_info_set_longitudinal_control_request,
  const real_T *rtu_InBus_set_longitudinal_control_info_set_brake_request, const
  AION_gear *rtu_InBus_set_longitudinal_control_info_set_gear_level_request,
  const Validation
  *rtu_InBus_set_longitudinal_control_info_set_gear_level_req_val, const real_T *
  rtu_InBus_set_longitudinal_control_info_set_torque_request, const uint32_T
  *rtu_InBus_set_ADCU_info_set_Checksum1, const uint32_T
  *rtu_InBus_set_ADCU_info_set_MsgCounter1, const uint32_T
  *rtu_InBus_set_ADCU_info_set_Checksum2, const uint32_T
  *rtu_InBus_set_ADCU_info_set_MsgCounter2, const uint32_T
  *rtu_InBus_set_ADCU_info_set_Checksum3, const uint32_T
  *rtu_InBus_set_ADCU_info_set_MsgCounter3, const uint8_T
  *rtu_InBus_set_ADCU_info_set_BeamReq, const uint8_T
  *rtu_InBus_set_ADCU_info_set_BodyCtrlReq, const uint8_T
  *rtu_InBus_set_ADCU_info_set_HornRingReq, const uint8_T
  *rtu_InBus_set_ADCU_info_set_TurnLightReq, const uint8_T
  *rtu_InBus_get_BCS_info_get_ABSActiveSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_ABSFaultSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_VDCActiveSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_VDCFaultSt, const real_T
  *rtu_InBus_get_BCS_info_get_VehSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_VehSpdVD, const uint32_T
  *rtu_InBus_get_BCS_info_get_FLWheelSpdEdgesSum, const uint8_T
  *rtu_InBus_get_BCS_info_get_FLWheelSpdEdgesSumVD, const uint32_T
  *rtu_InBus_get_BCS_info_get_FRWheelSpdEdgesSum, const uint8_T
  *rtu_InBus_get_BCS_info_get_FRWheelSpdEdgesSumVD, const uint32_T
  *rtu_InBus_get_BCS_info_get_RLWheelSpdEdgesSum, const uint8_T
  *rtu_InBus_get_BCS_info_get_RLWheelSpdEdgesSumVD, const uint32_T
  *rtu_InBus_get_BCS_info_get_RRWheelSpdEdgesSum, const uint8_T
  *rtu_InBus_get_BCS_info_get_RRWheelSpdEdgesSumVD, const real_T
  *rtu_InBus_get_BCS_info_get_YawRate, const real_T
  *rtu_InBus_get_BCS_info_get_YawRateOffset, const uint8_T
  *rtu_InBus_get_BCS_info_get_YawRateSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_HDCCtrlSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_HDCErrSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_AEBActive, const uint8_T
  *rtu_InBus_get_BCS_info_get_AEBAvailable, const uint8_T
  *rtu_InBus_get_BCS_info_get_CDDActive, const uint8_T
  *rtu_InBus_get_BCS_info_get_CDDAvailable, const uint8_T
  *rtu_InBus_get_BCS_info_get_CDDFail, const real_T
  *rtu_InBus_get_BCS_info_get_MasterCylinderPr, const real_T
  *rtu_InBus_get_BCS_info_get_MasterCylinderPrOffset, const uint8_T
  *rtu_InBus_get_BCS_info_get_MasterCylinderPrOffsetVD, const uint8_T
  *rtu_InBus_get_BCS_info_get_MasterCylinderPrVD, const uint8_T
  *rtu_InBus_get_BCS_info_get_NoBrakeForce, const uint8_T
  *rtu_InBus_get_BCS_info_get_VehicleStandStillSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_FLWheelRotatedDirection, const uint8_T
  *rtu_InBus_get_BCS_info_get_FLWheelRotatedDirectionVD, const real_T
  *rtu_InBus_get_BCS_info_get_FLWheelSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_FLWheelSpdVD, const uint8_T
  *rtu_InBus_get_BCS_info_get_FRWheelRotatedDirection, const uint8_T
  *rtu_InBus_get_BCS_info_get_FRWheelRotatedDirectionVD, const real_T
  *rtu_InBus_get_BCS_info_get_FRWheelSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_FRWheelSpdVD, const uint8_T
  *rtu_InBus_get_BCS_info_get_RLWheelRotatedDirection, const uint8_T
  *rtu_InBus_get_BCS_info_get_RLWheelRotatedDirectionVD, const real_T
  *rtu_InBus_get_BCS_info_get_RLWheelSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_RLWheelSpdVD, const uint8_T
  *rtu_InBus_get_BCS_info_get_RRWheelRotatedDirection, const uint8_T
  *rtu_InBus_get_BCS_info_get_RRWheelRotatedDirectionVD, const real_T
  *rtu_InBus_get_BCS_info_get_RRWheelSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_RRWheelSpdVD, const real_T
  *rtu_InBus_get_BCS_info_get_ActVehLaltrlAccel, const uint8_T
  *rtu_InBus_get_BCS_info_get_ActVehLaltrlAccelVD, const real_T
  *rtu_InBus_get_BCS_info_get_ActVehLongAccel, const uint8_T
  *rtu_InBus_get_BCS_info_get_ActVehLongAccelVD, const real_T
  *rtu_InBus_get_BCS_info_get_VehLaltrlAccelOffset, const real_T
  *rtu_InBus_get_BCS_info_get_VehLongAccelOffset, const uint8_T
  *rtu_InBus_get_VCU_info_get_GearLeverIntv, const uint8_T
  *rtu_InBus_get_VCU_info_get_VehDrvMod, const uint8_T
  *rtu_InBus_get_VCU_info_get_VehRdySt, const uint32_T
  *rtu_InBus_get_VCU_info_get_VehRng, const uint32_T
  *rtu_InBus_get_VCU_info_get_ActRecpTorq, const uint8_T
  *rtu_InBus_get_VCU_info_get_ActRecpTorqSt, const uint8_T
  *rtu_InBus_get_VCU_info_get_CrntGearLvl, const uint8_T
  *rtu_InBus_get_VCU_info_get_CrntGearLvlVD, const real_T
  *rtu_InBus_get_VCU_info_get_ACCMaxRecpDecel, const uint8_T
  *rtu_InBus_get_VCU_info_get_ACCMaxRecpDecelVD, const uint32_T
  *rtu_InBus_get_VCU_info_get_ActVehWheelTorq, const uint8_T
  *rtu_InBus_get_VCU_info_get_LateralAssistBtnInfo, const uint8_T
  *rtu_InBus_get_VCU_info_get_LateralAssistBtnInfoVD, const uint32_T
  *rtu_InBus_get_VCU_info_get_ACCButtInfo, const uint8_T
  *rtu_InBus_get_VCU_info_get_AccElecECFail, const real_T
  *rtu_InBus_get_VCU_info_get_GasPedalActPst, const uint8_T
  *rtu_InBus_get_VCU_info_get_GasPedalActPstVD, const uint32_T
  *rtu_InBus_get_VCU_info_get_VehWheelTorqMax, const uint8_T
  *rtu_InBus_get_VCU_info_get_BrkPedalSt, const uint8_T
  *rtu_InBus_get_VCU_info_get_BrkPedalStVD, const real_T
  *rtu_InBus_get_VCU_info_get_GasPedalVirtualPst, const uint8_T
  *rtu_InBus_get_VCU_info_get_GasPedalVirtualPstVD, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum1, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter1, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum10, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter10, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum11, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter11, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum12, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter12, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum13, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter13, const uint8_T
  *rtu_InBus_get_SCU_info_get_EStopSwSt, const uint8_T
  *rtu_InBus_get_SCU_info_get_EStopSwStVD, const uint32_T
  *rtu_InBus_get_SCU_info_get_LatAutoCheckReport, const Control_status
  *rtu_InBus_get_SCU_info_get_LatCtrlMode, const uint32_T
  *rtu_InBus_get_SCU_info_get_LatQuitReport, const uint32_T
  *rtu_InBus_get_SCU_info_get_LngAutoCheckReport, const Control_status
  *rtu_InBus_get_SCU_info_get_LngCtrlMode, const uint32_T
  *rtu_InBus_get_SCU_info_get_LngQuitReport, const uint8_T
  *rtu_InBus_get_SCU_info_get_StrngWhlIntv, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum16, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter16, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum17, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter17, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum18, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter18, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum2, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter2, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum3, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter3, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum4, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter4, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum5, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter5, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum6, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter6, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum7, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter7, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum8, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter8, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum9, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter9, const uint8_T
  *rtu_InBus_get_EPB_info_get_FailSt, const uint8_T
  *rtu_InBus_get_EPB_info_get_SwitchSt, const uint8_T
  *rtu_InBus_get_EPB_info_get_SwitchStVD, const uint8_T
  *rtu_InBus_get_EPB_info_get_SysSt, const uint8_T
  *rtu_InBus_get_SRS_info_get_DriverSeatBeltSt, const uint8_T
  *rtu_InBus_get_SRS_info_get_PsngrSeatBeltSt, const real_T
  *rtu_InBus_get_EPS_info_get_SteeringAngle, const uint32_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleSpd, const uint8_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleSpdVD, const uint8_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleVD, const real_T
  *rtu_InBus_get_EPS_info_get_StrngWhlTorq, const uint8_T
  *rtu_InBus_get_EPS_info_get_StrngWhlTorqVD, const uint8_T
  *rtu_InBus_get_EPS_info_get_ThermalSt, const uint8_T
  *rtu_InBus_get_EPS_info_get_WarnLamp, const uint8_T
  *rtu_InBus_get_BCM_info_get_CtrlAvailable, const uint8_T
  *rtu_InBus_get_BCM_info_get_DriverDoorAjarSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_FrontFogLampSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_FrontWiperSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_HazardLampSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_HighBeamSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_HornSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_KeySt, const uint8_T
  *rtu_InBus_get_BCM_info_get_LeftTurnLampFaultSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_LeftTurnLampSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_LowBeamSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_PsngrDoorAjarSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_RLDoorAjarSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_RRDoorAjarSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_RearFogLampSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_RightTurnLampFaultSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_RightTurnLampSt, Control_request
  *rty_OutBus_set_lateral_control_info_set_lateral_control_request, real_T
  *rty_OutBus_set_lateral_control_info_set_steer_torque_request, real_T
  *rty_OutBus_set_lateral_control_info_set_steer_angle_request, real_T
  *rty_OutBus_set_lateral_control_info_set_steer_ang_spd_limit, Control_status
  *rty_OutBus_set_lateral_control_info_get_lateral_control_status, real_T
  *rty_OutBus_set_lateral_control_info_get_EPS_steering_angle, real_T
  *rty_OutBus_set_longitudinal_control_info_get_vehicle_spd, Control_status
  *rty_OutBus_set_longitudinal_control_info_get_longitudinal_control_status,
  Control_request
  *rty_OutBus_set_longitudinal_control_info_set_longitudinal_control_request,
  real_T *rty_OutBus_set_longitudinal_control_info_set_brake_request, AION_gear *
  rty_OutBus_set_longitudinal_control_info_set_gear_level_request, Validation
  *rty_OutBus_set_longitudinal_control_info_set_gear_level_req_val, real_T
  *rty_OutBus_set_longitudinal_control_info_set_torque_request, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum1, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter1, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum2, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter2, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum3, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter3, uint8_T
  *rty_OutBus_set_ADCU_info_set_BeamReq, uint8_T
  *rty_OutBus_set_ADCU_info_set_BodyCtrlReq, uint8_T
  *rty_OutBus_set_ADCU_info_set_HornRingReq, uint8_T
  *rty_OutBus_set_ADCU_info_set_TurnLightReq, uint8_T
  *rty_OutBus_get_BCS_info_get_ABSActiveSt, uint8_T
  *rty_OutBus_get_BCS_info_get_ABSFaultSt, uint8_T
  *rty_OutBus_get_BCS_info_get_VDCActiveSt, uint8_T
  *rty_OutBus_get_BCS_info_get_VDCFaultSt, real_T
  *rty_OutBus_get_BCS_info_get_VehSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_VehSpdVD, uint32_T
  *rty_OutBus_get_BCS_info_get_FLWheelSpdEdgesSum, uint8_T
  *rty_OutBus_get_BCS_info_get_FLWheelSpdEdgesSumVD, uint32_T
  *rty_OutBus_get_BCS_info_get_FRWheelSpdEdgesSum, uint8_T
  *rty_OutBus_get_BCS_info_get_FRWheelSpdEdgesSumVD, uint32_T
  *rty_OutBus_get_BCS_info_get_RLWheelSpdEdgesSum, uint8_T
  *rty_OutBus_get_BCS_info_get_RLWheelSpdEdgesSumVD, uint32_T
  *rty_OutBus_get_BCS_info_get_RRWheelSpdEdgesSum, uint8_T
  *rty_OutBus_get_BCS_info_get_RRWheelSpdEdgesSumVD, real_T
  *rty_OutBus_get_BCS_info_get_YawRate, real_T
  *rty_OutBus_get_BCS_info_get_YawRateOffset, uint8_T
  *rty_OutBus_get_BCS_info_get_YawRateSt, uint8_T
  *rty_OutBus_get_BCS_info_get_HDCCtrlSt, uint8_T
  *rty_OutBus_get_BCS_info_get_HDCErrSt, uint8_T
  *rty_OutBus_get_BCS_info_get_AEBActive, uint8_T
  *rty_OutBus_get_BCS_info_get_AEBAvailable, uint8_T
  *rty_OutBus_get_BCS_info_get_CDDActive, uint8_T
  *rty_OutBus_get_BCS_info_get_CDDAvailable, uint8_T
  *rty_OutBus_get_BCS_info_get_CDDFail, real_T
  *rty_OutBus_get_BCS_info_get_MasterCylinderPr, real_T
  *rty_OutBus_get_BCS_info_get_MasterCylinderPrOffset, uint8_T
  *rty_OutBus_get_BCS_info_get_MasterCylinderPrOffsetVD, uint8_T
  *rty_OutBus_get_BCS_info_get_MasterCylinderPrVD, uint8_T
  *rty_OutBus_get_BCS_info_get_NoBrakeForce, uint8_T
  *rty_OutBus_get_BCS_info_get_VehicleStandStillSt, uint8_T
  *rty_OutBus_get_BCS_info_get_FLWheelRotatedDirection, uint8_T
  *rty_OutBus_get_BCS_info_get_FLWheelRotatedDirectionVD, real_T
  *rty_OutBus_get_BCS_info_get_FLWheelSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_FLWheelSpdVD, uint8_T
  *rty_OutBus_get_BCS_info_get_FRWheelRotatedDirection, uint8_T
  *rty_OutBus_get_BCS_info_get_FRWheelRotatedDirectionVD, real_T
  *rty_OutBus_get_BCS_info_get_FRWheelSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_FRWheelSpdVD, uint8_T
  *rty_OutBus_get_BCS_info_get_RLWheelRotatedDirection, uint8_T
  *rty_OutBus_get_BCS_info_get_RLWheelRotatedDirectionVD, real_T
  *rty_OutBus_get_BCS_info_get_RLWheelSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_RLWheelSpdVD, uint8_T
  *rty_OutBus_get_BCS_info_get_RRWheelRotatedDirection, uint8_T
  *rty_OutBus_get_BCS_info_get_RRWheelRotatedDirectionVD, real_T
  *rty_OutBus_get_BCS_info_get_RRWheelSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_RRWheelSpdVD, real_T
  *rty_OutBus_get_BCS_info_get_ActVehLaltrlAccel, uint8_T
  *rty_OutBus_get_BCS_info_get_ActVehLaltrlAccelVD, real_T
  *rty_OutBus_get_BCS_info_get_ActVehLongAccel, uint8_T
  *rty_OutBus_get_BCS_info_get_ActVehLongAccelVD, real_T
  *rty_OutBus_get_BCS_info_get_VehLaltrlAccelOffset, real_T
  *rty_OutBus_get_BCS_info_get_VehLongAccelOffset, uint8_T
  *rty_OutBus_get_VCU_info_get_GearLeverIntv, uint8_T
  *rty_OutBus_get_VCU_info_get_VehDrvMod, uint8_T
  *rty_OutBus_get_VCU_info_get_VehRdySt, uint32_T
  *rty_OutBus_get_VCU_info_get_VehRng, uint32_T
  *rty_OutBus_get_VCU_info_get_ActRecpTorq, uint8_T
  *rty_OutBus_get_VCU_info_get_ActRecpTorqSt, uint8_T
  *rty_OutBus_get_VCU_info_get_CrntGearLvl, uint8_T
  *rty_OutBus_get_VCU_info_get_CrntGearLvlVD, real_T
  *rty_OutBus_get_VCU_info_get_ACCMaxRecpDecel, uint8_T
  *rty_OutBus_get_VCU_info_get_ACCMaxRecpDecelVD, uint32_T
  *rty_OutBus_get_VCU_info_get_ActVehWheelTorq, uint8_T
  *rty_OutBus_get_VCU_info_get_LateralAssistBtnInfo, uint8_T
  *rty_OutBus_get_VCU_info_get_LateralAssistBtnInfoVD, uint32_T
  *rty_OutBus_get_VCU_info_get_ACCButtInfo, uint8_T
  *rty_OutBus_get_VCU_info_get_AccElecECFail, real_T
  *rty_OutBus_get_VCU_info_get_GasPedalActPst, uint8_T
  *rty_OutBus_get_VCU_info_get_GasPedalActPstVD, uint32_T
  *rty_OutBus_get_VCU_info_get_VehWheelTorqMax, uint8_T
  *rty_OutBus_get_VCU_info_get_BrkPedalSt, uint8_T
  *rty_OutBus_get_VCU_info_get_BrkPedalStVD, real_T
  *rty_OutBus_get_VCU_info_get_GasPedalVirtualPst, uint8_T
  *rty_OutBus_get_VCU_info_get_GasPedalVirtualPstVD, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum1, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter1, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum10, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter10, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum11, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter11, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum12, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter12, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum13, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter13, uint8_T
  *rty_OutBus_get_SCU_info_get_EStopSwSt, uint8_T
  *rty_OutBus_get_SCU_info_get_EStopSwStVD, uint32_T
  *rty_OutBus_get_SCU_info_get_LatAutoCheckReport, Control_status
  *rty_OutBus_get_SCU_info_get_LatCtrlMode, uint32_T
  *rty_OutBus_get_SCU_info_get_LatQuitReport, uint32_T
  *rty_OutBus_get_SCU_info_get_LngAutoCheckReport, Control_status
  *rty_OutBus_get_SCU_info_get_LngCtrlMode, uint32_T
  *rty_OutBus_get_SCU_info_get_LngQuitReport, uint8_T
  *rty_OutBus_get_SCU_info_get_StrngWhlIntv, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum16, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter16, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum17, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter17, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum18, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter18, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum2, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter2, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum3, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter3, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum4, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter4, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum5, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter5, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum6, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter6, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum7, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter7, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum8, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter8, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum9, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter9, uint8_T
  *rty_OutBus_get_EPB_info_get_FailSt, uint8_T
  *rty_OutBus_get_EPB_info_get_SwitchSt, uint8_T
  *rty_OutBus_get_EPB_info_get_SwitchStVD, uint8_T
  *rty_OutBus_get_EPB_info_get_SysSt, uint8_T
  *rty_OutBus_get_SRS_info_get_DriverSeatBeltSt, uint8_T
  *rty_OutBus_get_SRS_info_get_PsngrSeatBeltSt, real_T
  *rty_OutBus_get_EPS_info_get_SteeringAngle, uint32_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleSpd, uint8_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleSpdVD, uint8_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleVD, real_T
  *rty_OutBus_get_EPS_info_get_StrngWhlTorq, uint8_T
  *rty_OutBus_get_EPS_info_get_StrngWhlTorqVD, uint8_T
  *rty_OutBus_get_EPS_info_get_ThermalSt, uint8_T
  *rty_OutBus_get_EPS_info_get_WarnLamp, uint8_T
  *rty_OutBus_get_BCM_info_get_CtrlAvailable, uint8_T
  *rty_OutBus_get_BCM_info_get_DriverDoorAjarSt, uint8_T
  *rty_OutBus_get_BCM_info_get_FrontFogLampSt, uint8_T
  *rty_OutBus_get_BCM_info_get_FrontWiperSt, uint8_T
  *rty_OutBus_get_BCM_info_get_HazardLampSt, uint8_T
  *rty_OutBus_get_BCM_info_get_HighBeamSt, uint8_T
  *rty_OutBus_get_BCM_info_get_HornSt, uint8_T
  *rty_OutBus_get_BCM_info_get_KeySt, uint8_T
  *rty_OutBus_get_BCM_info_get_LeftTurnLampFaultSt, uint8_T
  *rty_OutBus_get_BCM_info_get_LeftTurnLampSt, uint8_T
  *rty_OutBus_get_BCM_info_get_LowBeamSt, uint8_T
  *rty_OutBus_get_BCM_info_get_PsngrDoorAjarSt, uint8_T
  *rty_OutBus_get_BCM_info_get_RLDoorAjarSt, uint8_T
  *rty_OutBus_get_BCM_info_get_RRDoorAjarSt, uint8_T
  *rty_OutBus_get_BCM_info_get_RearFogLampSt, uint8_T
  *rty_OutBus_get_BCM_info_get_RightTurnLampFaultSt, uint8_T
  *rty_OutBus_get_BCM_info_get_RightTurnLampSt, B_AION_auto_control_request_c_T *
  localB)
{
  /* MATLAB Function: '<Root>/Lateral_control_status_judge1' */
  /* MATLAB Function 'Lateral_control_status_judge1': '<S2>:1' */
  /* '<S2>:1:11' */
  localB->lateral_control_req_test =
    *rtu_InBus_set_lateral_control_info_set_lateral_control_request;

  /* MATLAB Function: '<Root>/MATLAB Function' */
  /* MATLAB Function 'MATLAB Function': '<S4>:1' */
  /* '<S4>:1:3' */
  localB->y_f = *rtu_InBus_get_SCU_info_get_LatCtrlMode;

  /* MATLAB Function: '<Root>/MATLAB Function1' */
  /* MATLAB Function 'MATLAB Function1': '<S5>:1' */
  /* '<S5>:1:3' */
  localB->y = *rtu_InBus_get_SCU_info_get_LngCtrlMode;

  /* MATLAB Function: '<Root>/Lateral_control_status_judge' */
  /* MATLAB Function 'Lateral_control_status_judge': '<S1>:1' */
  if (*rtu_InBus_set_lateral_control_info_set_lateral_control_request == Auto) {
    /* '<S1>:1:10' */
    /* '<S1>:1:12' */
    switch (*rtu_InBus_get_SCU_info_get_LatCtrlMode) {
     case Quit_status:
      /* '<S1>:1:14' */
      localB->lateral_control_req = Manual;
      break;

     case Manual_status:
      /* '<S1>:1:16' */
      localB->lateral_control_req = Auto;
      break;

     case Auto_status:
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
  /* MATLAB Function 'Longitudinal_control_status_judge': '<S3>:1' */
  if (*rtu_InBus_set_longitudinal_control_info_set_longitudinal_control_request ==
      Auto) {
    /* '<S3>:1:11' */
    /* '<S3>:1:13' */
    switch (*rtu_InBus_get_SCU_info_get_LngCtrlMode) {
     case Quit_status:
      /* '<S3>:1:15' */
      localB->longitudinal_control_req = Manual;
      break;

     case Manual_status:
      /* '<S3>:1:17' */
      localB->longitudinal_control_req = Auto;
      break;

     case Auto_status:
      /* '<S3>:1:19' */
      localB->longitudinal_control_req = Auto;
      break;

     default:
      /* '<S3>:1:21' */
      localB->longitudinal_control_req = Manual;
      break;
    }
  } else {
    /* '<S3>:1:24' */
    localB->longitudinal_control_req = Manual;
  }

  /* End of MATLAB Function: '<Root>/Longitudinal_control_status_judge' */
  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_lateral_control_info_set_lateral_control_request =
    localB->lateral_control_req;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_set_longitudinal_control_request =
    localB->longitudinal_control_req;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_set_brake_request =
    *rtu_InBus_set_longitudinal_control_info_set_brake_request;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum10 =
    *rtu_InBus_get_SCU_info_get_Checksum10;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter10 =
    *rtu_InBus_get_SCU_info_get_MsgCounter10;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum11 =
    *rtu_InBus_get_SCU_info_get_Checksum11;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter11 =
    *rtu_InBus_get_SCU_info_get_MsgCounter11;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum12 =
    *rtu_InBus_get_SCU_info_get_Checksum12;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter12 =
    *rtu_InBus_get_SCU_info_get_MsgCounter12;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum13 =
    *rtu_InBus_get_SCU_info_get_Checksum13;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter13 =
    *rtu_InBus_get_SCU_info_get_MsgCounter13;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_EStopSwSt = *rtu_InBus_get_SCU_info_get_EStopSwSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_EStopSwStVD =
    *rtu_InBus_get_SCU_info_get_EStopSwStVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_set_gear_level_request =
    *rtu_InBus_set_longitudinal_control_info_set_gear_level_request;

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
  *rty_OutBus_get_SCU_info_get_LngAutoCheckReport =
    *rtu_InBus_get_SCU_info_get_LngAutoCheckReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_LngCtrlMode =
    *rtu_InBus_get_SCU_info_get_LngCtrlMode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_LngQuitReport =
    *rtu_InBus_get_SCU_info_get_LngQuitReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_StrngWhlIntv =
    *rtu_InBus_get_SCU_info_get_StrngWhlIntv;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum16 =
    *rtu_InBus_get_SCU_info_get_Checksum16;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter16 =
    *rtu_InBus_get_SCU_info_get_MsgCounter16;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum17 =
    *rtu_InBus_get_SCU_info_get_Checksum17;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_set_gear_level_req_val =
    *rtu_InBus_set_longitudinal_control_info_set_gear_level_req_val;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter17 =
    *rtu_InBus_get_SCU_info_get_MsgCounter17;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum18 =
    *rtu_InBus_get_SCU_info_get_Checksum18;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter18 =
    *rtu_InBus_get_SCU_info_get_MsgCounter18;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum2 = *rtu_InBus_get_SCU_info_get_Checksum2;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter2 =
    *rtu_InBus_get_SCU_info_get_MsgCounter2;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum3 = *rtu_InBus_get_SCU_info_get_Checksum3;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter3 =
    *rtu_InBus_get_SCU_info_get_MsgCounter3;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum4 = *rtu_InBus_get_SCU_info_get_Checksum4;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter4 =
    *rtu_InBus_get_SCU_info_get_MsgCounter4;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum5 = *rtu_InBus_get_SCU_info_get_Checksum5;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_set_torque_request =
    *rtu_InBus_set_longitudinal_control_info_set_torque_request;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter5 =
    *rtu_InBus_get_SCU_info_get_MsgCounter5;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum6 = *rtu_InBus_get_SCU_info_get_Checksum6;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter6 =
    *rtu_InBus_get_SCU_info_get_MsgCounter6;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum7 = *rtu_InBus_get_SCU_info_get_Checksum7;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter7 =
    *rtu_InBus_get_SCU_info_get_MsgCounter7;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum8 = *rtu_InBus_get_SCU_info_get_Checksum8;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter8 =
    *rtu_InBus_get_SCU_info_get_MsgCounter8;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum9 = *rtu_InBus_get_SCU_info_get_Checksum9;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter9 =
    *rtu_InBus_get_SCU_info_get_MsgCounter9;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPB_info_get_FailSt = *rtu_InBus_get_EPB_info_get_FailSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_Checksum1 =
    *rtu_InBus_set_ADCU_info_set_Checksum1;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPB_info_get_SwitchSt = *rtu_InBus_get_EPB_info_get_SwitchSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPB_info_get_SwitchStVD =
    *rtu_InBus_get_EPB_info_get_SwitchStVD;

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
  *rty_OutBus_set_ADCU_info_set_MsgCounter1 =
    *rtu_InBus_set_ADCU_info_set_MsgCounter1;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPS_info_get_StrngWhlTorqVD =
    *rtu_InBus_get_EPS_info_get_StrngWhlTorqVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPS_info_get_ThermalSt = *rtu_InBus_get_EPS_info_get_ThermalSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_EPS_info_get_WarnLamp = *rtu_InBus_get_EPS_info_get_WarnLamp;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_CtrlAvailable =
    *rtu_InBus_get_BCM_info_get_CtrlAvailable;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_DriverDoorAjarSt =
    *rtu_InBus_get_BCM_info_get_DriverDoorAjarSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_FrontFogLampSt =
    *rtu_InBus_get_BCM_info_get_FrontFogLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_FrontWiperSt =
    *rtu_InBus_get_BCM_info_get_FrontWiperSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_HazardLampSt =
    *rtu_InBus_get_BCM_info_get_HazardLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_HighBeamSt =
    *rtu_InBus_get_BCM_info_get_HighBeamSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_HornSt = *rtu_InBus_get_BCM_info_get_HornSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_ADCU_info_set_Checksum2 =
    *rtu_InBus_set_ADCU_info_set_Checksum2;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_KeySt = *rtu_InBus_get_BCM_info_get_KeySt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_LeftTurnLampFaultSt =
    *rtu_InBus_get_BCM_info_get_LeftTurnLampFaultSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_LeftTurnLampSt =
    *rtu_InBus_get_BCM_info_get_LeftTurnLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_LowBeamSt = *rtu_InBus_get_BCM_info_get_LowBeamSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_PsngrDoorAjarSt =
    *rtu_InBus_get_BCM_info_get_PsngrDoorAjarSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_RLDoorAjarSt =
    *rtu_InBus_get_BCM_info_get_RLDoorAjarSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_RRDoorAjarSt =
    *rtu_InBus_get_BCM_info_get_RRDoorAjarSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_RearFogLampSt =
    *rtu_InBus_get_BCM_info_get_RearFogLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_RightTurnLampFaultSt =
    *rtu_InBus_get_BCM_info_get_RightTurnLampFaultSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCM_info_get_RightTurnLampSt =
    *rtu_InBus_get_BCM_info_get_RightTurnLampSt;

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
  *rty_OutBus_set_lateral_control_info_set_steer_torque_request =
    *rtu_InBus_set_lateral_control_info_set_steer_torque_request;

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
  *rty_OutBus_get_BCS_info_get_ABSFaultSt =
    *rtu_InBus_get_BCS_info_get_ABSFaultSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_VDCActiveSt =
    *rtu_InBus_get_BCS_info_get_VDCActiveSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_VDCFaultSt =
    *rtu_InBus_get_BCS_info_get_VDCFaultSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_VehSpd = *rtu_InBus_get_BCS_info_get_VehSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_VehSpdVD = *rtu_InBus_get_BCS_info_get_VehSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_lateral_control_info_set_steer_angle_request =
    *rtu_InBus_set_lateral_control_info_set_steer_angle_request;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FLWheelSpdEdgesSum =
    *rtu_InBus_get_BCS_info_get_FLWheelSpdEdgesSum;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FLWheelSpdEdgesSumVD =
    *rtu_InBus_get_BCS_info_get_FLWheelSpdEdgesSumVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FRWheelSpdEdgesSum =
    *rtu_InBus_get_BCS_info_get_FRWheelSpdEdgesSum;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FRWheelSpdEdgesSumVD =
    *rtu_InBus_get_BCS_info_get_FRWheelSpdEdgesSumVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RLWheelSpdEdgesSum =
    *rtu_InBus_get_BCS_info_get_RLWheelSpdEdgesSum;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RLWheelSpdEdgesSumVD =
    *rtu_InBus_get_BCS_info_get_RLWheelSpdEdgesSumVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RRWheelSpdEdgesSum =
    *rtu_InBus_get_BCS_info_get_RRWheelSpdEdgesSum;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RRWheelSpdEdgesSumVD =
    *rtu_InBus_get_BCS_info_get_RRWheelSpdEdgesSumVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_YawRate = *rtu_InBus_get_BCS_info_get_YawRate;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_YawRateOffset =
    *rtu_InBus_get_BCS_info_get_YawRateOffset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_lateral_control_info_set_steer_ang_spd_limit =
    *rtu_InBus_set_lateral_control_info_set_steer_ang_spd_limit;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_YawRateSt = *rtu_InBus_get_BCS_info_get_YawRateSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_HDCCtrlSt = *rtu_InBus_get_BCS_info_get_HDCCtrlSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_HDCErrSt = *rtu_InBus_get_BCS_info_get_HDCErrSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_AEBActive = *rtu_InBus_get_BCS_info_get_AEBActive;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_AEBAvailable =
    *rtu_InBus_get_BCS_info_get_AEBAvailable;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_CDDActive = *rtu_InBus_get_BCS_info_get_CDDActive;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_CDDAvailable =
    *rtu_InBus_get_BCS_info_get_CDDAvailable;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_CDDFail = *rtu_InBus_get_BCS_info_get_CDDFail;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_MasterCylinderPr =
    *rtu_InBus_get_BCS_info_get_MasterCylinderPr;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_MasterCylinderPrOffset =
    *rtu_InBus_get_BCS_info_get_MasterCylinderPrOffset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_lateral_control_info_get_lateral_control_status =
    *rtu_InBus_set_lateral_control_info_get_lateral_control_status;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_MasterCylinderPrOffsetVD =
    *rtu_InBus_get_BCS_info_get_MasterCylinderPrOffsetVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_MasterCylinderPrVD =
    *rtu_InBus_get_BCS_info_get_MasterCylinderPrVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_NoBrakeForce =
    *rtu_InBus_get_BCS_info_get_NoBrakeForce;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_VehicleStandStillSt =
    *rtu_InBus_get_BCS_info_get_VehicleStandStillSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FLWheelRotatedDirection =
    *rtu_InBus_get_BCS_info_get_FLWheelRotatedDirection;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FLWheelRotatedDirectionVD =
    *rtu_InBus_get_BCS_info_get_FLWheelRotatedDirectionVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FLWheelSpd =
    *rtu_InBus_get_BCS_info_get_FLWheelSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FLWheelSpdVD =
    *rtu_InBus_get_BCS_info_get_FLWheelSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FRWheelRotatedDirection =
    *rtu_InBus_get_BCS_info_get_FRWheelRotatedDirection;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FRWheelRotatedDirectionVD =
    *rtu_InBus_get_BCS_info_get_FRWheelRotatedDirectionVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_lateral_control_info_get_EPS_steering_angle =
    *rtu_InBus_set_lateral_control_info_get_EPS_steering_angle;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FRWheelSpd =
    *rtu_InBus_get_BCS_info_get_FRWheelSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_FRWheelSpdVD =
    *rtu_InBus_get_BCS_info_get_FRWheelSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RLWheelRotatedDirection =
    *rtu_InBus_get_BCS_info_get_RLWheelRotatedDirection;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RLWheelRotatedDirectionVD =
    *rtu_InBus_get_BCS_info_get_RLWheelRotatedDirectionVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RLWheelSpd =
    *rtu_InBus_get_BCS_info_get_RLWheelSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RLWheelSpdVD =
    *rtu_InBus_get_BCS_info_get_RLWheelSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RRWheelRotatedDirection =
    *rtu_InBus_get_BCS_info_get_RRWheelRotatedDirection;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RRWheelRotatedDirectionVD =
    *rtu_InBus_get_BCS_info_get_RRWheelRotatedDirectionVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RRWheelSpd =
    *rtu_InBus_get_BCS_info_get_RRWheelSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_RRWheelSpdVD =
    *rtu_InBus_get_BCS_info_get_RRWheelSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_set_longitudinal_control_info_get_vehicle_spd =
    *rtu_InBus_set_longitudinal_control_info_get_vehicle_spd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_ActVehLaltrlAccel =
    *rtu_InBus_get_BCS_info_get_ActVehLaltrlAccel;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_ActVehLaltrlAccelVD =
    *rtu_InBus_get_BCS_info_get_ActVehLaltrlAccelVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_ActVehLongAccel =
    *rtu_InBus_get_BCS_info_get_ActVehLongAccel;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_ActVehLongAccelVD =
    *rtu_InBus_get_BCS_info_get_ActVehLongAccelVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_VehLaltrlAccelOffset =
    *rtu_InBus_get_BCS_info_get_VehLaltrlAccelOffset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_BCS_info_get_VehLongAccelOffset =
    *rtu_InBus_get_BCS_info_get_VehLongAccelOffset;

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
  *rty_OutBus_set_longitudinal_control_info_get_longitudinal_control_status =
    *rtu_InBus_set_longitudinal_control_info_get_longitudinal_control_status;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_ActRecpTorq =
    *rtu_InBus_get_VCU_info_get_ActRecpTorq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_ActRecpTorqSt =
    *rtu_InBus_get_VCU_info_get_ActRecpTorqSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_CrntGearLvl =
    *rtu_InBus_get_VCU_info_get_CrntGearLvl;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_CrntGearLvlVD =
    *rtu_InBus_get_VCU_info_get_CrntGearLvlVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_ACCMaxRecpDecel =
    *rtu_InBus_get_VCU_info_get_ACCMaxRecpDecel;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_ACCMaxRecpDecelVD =
    *rtu_InBus_get_VCU_info_get_ACCMaxRecpDecelVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_ActVehWheelTorq =
    *rtu_InBus_get_VCU_info_get_ActVehWheelTorq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_LateralAssistBtnInfo =
    *rtu_InBus_get_VCU_info_get_LateralAssistBtnInfo;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_LateralAssistBtnInfoVD =
    *rtu_InBus_get_VCU_info_get_LateralAssistBtnInfoVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_ACCButtInfo =
    *rtu_InBus_get_VCU_info_get_ACCButtInfo;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_AccElecECFail =
    *rtu_InBus_get_VCU_info_get_AccElecECFail;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_GasPedalActPst =
    *rtu_InBus_get_VCU_info_get_GasPedalActPst;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_GasPedalActPstVD =
    *rtu_InBus_get_VCU_info_get_GasPedalActPstVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_VehWheelTorqMax =
    *rtu_InBus_get_VCU_info_get_VehWheelTorqMax;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_BrkPedalSt =
    *rtu_InBus_get_VCU_info_get_BrkPedalSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_BrkPedalStVD =
    *rtu_InBus_get_VCU_info_get_BrkPedalStVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_GasPedalVirtualPst =
    *rtu_InBus_get_VCU_info_get_GasPedalVirtualPst;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_VCU_info_get_GasPedalVirtualPstVD =
    *rtu_InBus_get_VCU_info_get_GasPedalVirtualPstVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_Checksum1 = *rtu_InBus_get_SCU_info_get_Checksum1;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_get_SCU_info_get_MsgCounter1 =
    *rtu_InBus_get_SCU_info_get_MsgCounter1;
}

/* Model initialize function */
void AION_auto_control_request_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AION_auto_control_request_T *const AION_auto_control_request_M,
  B_AION_auto_control_request_c_T *localB, DW_AION_auto_control_request_f_T
  *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(AION_auto_control_request_M, rt_errorStatus);

  /* block I/O */
  {
    localB->y = Manual_status;
    localB->y_f = Manual_status;
    localB->longitudinal_control_req = Manual;
    localB->lateral_control_req_test = Manual;
    localB->lateral_control_req = Manual;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(localDW), 0,
                     sizeof(DW_AION_auto_control_request_f_T));
}
