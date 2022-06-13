/*
 * Code generation for system model 'AION_signal_transfer'
 * For more details, see corresponding source file AION_signal_transfer.c
 *
 */

#ifndef RTW_HEADER_AION_signal_transfer_h_
#define RTW_HEADER_AION_signal_transfer_h_
#include <cmath>
#include <cstring>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "AION_signal_transfer_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'AION_signal_transfer' */
struct B_AION_signal_transfer_c_T {
  uint64_T DataTypeConversion4;        /* '<Root>/Data Type Conversion4' */
  uint8_T DataTypeConversion1;         /* '<Root>/Data Type Conversion1' */
  uint8_T DataTypeConversion13;        /* '<Root>/Data Type Conversion13' */
  uint8_T DataTypeConversion2;         /* '<Root>/Data Type Conversion2' */
  uint8_T DataTypeConversion32;        /* '<Root>/Data Type Conversion32' */
  uint8_T DataTypeConversion35;        /* '<Root>/Data Type Conversion35' */
  uint8_T DataTypeConversion36;        /* '<Root>/Data Type Conversion36' */
  uint8_T DataTypeConversion38;        /* '<Root>/Data Type Conversion38' */
  uint8_T DataTypeConversion40;        /* '<Root>/Data Type Conversion40' */
  uint8_T DataTypeConversion42;        /* '<Root>/Data Type Conversion42' */
  uint8_T DataTypeConversion44;        /* '<Root>/Data Type Conversion44' */
  uint8_T DataTypeConversion46;        /* '<Root>/Data Type Conversion46' */
  uint8_T DataTypeConversion48;        /* '<Root>/Data Type Conversion48' */
  uint8_T DataTypeConversion51;        /* '<Root>/Data Type Conversion51' */
  uint8_T DataTypeConversion3;         /* '<Root>/Data Type Conversion3' */
  uint8_T DataTypeConversion11;        /* '<Root>/Data Type Conversion11' */
  uint8_T DataTypeConversion26;        /* '<Root>/Data Type Conversion26' */
  uint8_T DataTypeConversion27;        /* '<Root>/Data Type Conversion27' */
  uint8_T DataTypeConversion28;        /* '<Root>/Data Type Conversion28' */
  uint8_T DataTypeConversion29;        /* '<Root>/Data Type Conversion29' */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_signal_transfer_T {
  const char_T **errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T *stopRequestedFlag;
  } Timing;
};

struct MdlrefDW_AION_signal_transfer_T {
  B_AION_signal_transfer_c_T rtb;
  RT_MODEL_AION_signal_transfer_T rtm;
};

/* Model reference registration function */
extern void AION_signal_transfer_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AION_signal_transfer_T *const AION_signal_transfer_M,
  B_AION_signal_transfer_c_T *localB);
extern void AION_signal_transfer(const real_T
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
  *rtu_ADCU_InternalOutputPort_set_ADCU_info_set_TurnLightReq, Control_request
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
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_TurnLightReq, uint8_T
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
  B_AION_signal_transfer_c_T *localB);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'AION_signal_transfer'
 * '<S1>'   : 'AION_signal_transfer/DocBlock'
 */
#endif                                 /* RTW_HEADER_AION_signal_transfer_h_ */
