/*
 * AION_signal_transfer.cpp
 *
 * Code generation for model "AION_signal_transfer".
 *
 * Model version              : 4.98
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Fri Jun 10 16:00:04 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AION_signal_transfer.h"
#include "AION_signal_transfer_private.h"

/* Block signals (default storage) */
B_AION_signal_transfer_T AION_signal_transfer_B;

/* External inputs (root inport signals with default storage) */
ExtU_AION_signal_transfer_T AION_signal_transfer_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_AION_signal_transfer_T AION_signal_transfer_Y;

/* Real-time model */
RT_MODEL_AION_signal_transfer_T AION_signal_transfer_M_ =
  RT_MODEL_AION_signal_transfer_T();
RT_MODEL_AION_signal_transfer_T *const AION_signal_transfer_M =
  &AION_signal_transfer_M_;

/* Model step function */
void AION_signal_transfer_step(void)
{
  real_T tmp;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  AION_signal_transfer_B.DataTypeConversion1 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion12' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd'
   */
  AION_signal_transfer_B.DataTypeConversion12 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd;

  /* DataTypeConversion: '<Root>/Data Type Conversion13' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion13' */
  AION_signal_transfer_B.DataTypeConversion13 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion17' */
  AION_signal_transfer_B.DataTypeConversion17 = static_cast<Control_status>
    (AION_signal_transfer_B.DataTypeConversion13);

  /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  AION_signal_transfer_B.DataTypeConversion2 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion18' */
  AION_signal_transfer_B.DataTypeConversion18 = static_cast<Control_status>
    (AION_signal_transfer_B.DataTypeConversion2);

  /* DataTypeConversion: '<Root>/Data Type Conversion20' */
  AION_signal_transfer_B.DataTypeConversion20 = static_cast<Available_status>
    (AION_signal_transfer_B.DataTypeConversion1);

  /* DataTypeConversion: '<Root>/Data Type Conversion23' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_GPSTime'
   */
  AION_signal_transfer_B.DataTypeConversion23 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_GPSTime;

  /* DataTypeConversion: '<Root>/Data Type Conversion24' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Heading'
   */
  AION_signal_transfer_B.DataTypeConversion24 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Heading;

  /* DataTypeConversion: '<Root>/Data Type Conversion30' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Pitch'
   */
  AION_signal_transfer_B.DataTypeConversion30 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Pitch;

  /* DataTypeConversion: '<Root>/Data Type Conversion31' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Roll'
   */
  AION_signal_transfer_B.DataTypeConversion31 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Roll;

  /* DataTypeConversion: '<Root>/Data Type Conversion32' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_IMUWorkStatus'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_IMUWorkStatus);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion32' */
  AION_signal_transfer_B.DataTypeConversion32 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion33' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedX'
   */
  AION_signal_transfer_B.DataTypeConversion33 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedX;

  /* DataTypeConversion: '<Root>/Data Type Conversion35' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion35' */
  AION_signal_transfer_B.DataTypeConversion35 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion34' */
  AION_signal_transfer_B.DataTypeConversion34 = static_cast<Gear_status>
    (AION_signal_transfer_B.DataTypeConversion35);

  /* DataTypeConversion: '<Root>/Data Type Conversion36' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion36' */
  AION_signal_transfer_B.DataTypeConversion36 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion37' */
  AION_signal_transfer_B.DataTypeConversion37 = static_cast<Active_status>
    (AION_signal_transfer_B.DataTypeConversion36);

  /* DataTypeConversion: '<Root>/Data Type Conversion38' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HornSt'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HornSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion38' */
  AION_signal_transfer_B.DataTypeConversion38 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion39' */
  AION_signal_transfer_B.DataTypeConversion39 = static_cast<Active_status>
    (AION_signal_transfer_B.DataTypeConversion38);

  /* DataTypeConversion: '<Root>/Data Type Conversion40' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion40' */
  AION_signal_transfer_B.DataTypeConversion40 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion41' */
  AION_signal_transfer_B.DataTypeConversion41 = static_cast<Active_status>
    (AION_signal_transfer_B.DataTypeConversion40);

  /* DataTypeConversion: '<Root>/Data Type Conversion42' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion42' */
  AION_signal_transfer_B.DataTypeConversion42 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion43' */
  AION_signal_transfer_B.DataTypeConversion43 = static_cast<Active_status>
    (AION_signal_transfer_B.DataTypeConversion42);

  /* DataTypeConversion: '<Root>/Data Type Conversion44' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion44' */
  AION_signal_transfer_B.DataTypeConversion44 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion45' */
  AION_signal_transfer_B.DataTypeConversion45 = static_cast<Active_status>
    (AION_signal_transfer_B.DataTypeConversion44);

  /* DataTypeConversion: '<Root>/Data Type Conversion46' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion46' */
  AION_signal_transfer_B.DataTypeConversion46 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion47' */
  AION_signal_transfer_B.DataTypeConversion47 = static_cast<Active_status>
    (AION_signal_transfer_B.DataTypeConversion46);

  /* DataTypeConversion: '<Root>/Data Type Conversion48' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRdySt'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRdySt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion48' */
  AION_signal_transfer_B.DataTypeConversion48 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion49' */
  AION_signal_transfer_B.DataTypeConversion49 = static_cast<Ready_status>
    (AION_signal_transfer_B.DataTypeConversion48);

  /* DataTypeConversion: '<Root>/Data Type Conversion51' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion51' */
  AION_signal_transfer_B.DataTypeConversion51 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion50' */
  AION_signal_transfer_B.DataTypeConversion50 = static_cast<Drive_status>
    (AION_signal_transfer_B.DataTypeConversion51);

  /* DataTypeConversion: '<Root>/Data Type Conversion52' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedY'
   */
  AION_signal_transfer_B.DataTypeConversion52 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedY;

  /* DataTypeConversion: '<Root>/Data Type Conversion53' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedZ'
   */
  AION_signal_transfer_B.DataTypeConversion53 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedZ;

  /* DataTypeConversion: '<Root>/Data Type Conversion54' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationX'
   */
  AION_signal_transfer_B.DataTypeConversion54 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationX;

  /* DataTypeConversion: '<Root>/Data Type Conversion55' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationY'
   */
  AION_signal_transfer_B.DataTypeConversion55 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationY;

  /* DataTypeConversion: '<Root>/Data Type Conversion56' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationZ'
   */
  AION_signal_transfer_B.DataTypeConversion56 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationZ;

  /* DataTypeConversion: '<Root>/Data Type Conversion57' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Latitude'
   */
  AION_signal_transfer_B.DataTypeConversion57 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Latitude;

  /* DataTypeConversion: '<Root>/Data Type Conversion58' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Longitude'
   */
  AION_signal_transfer_B.DataTypeConversion58 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Longitude;

  /* DataTypeConversion: '<Root>/Data Type Conversion59' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Altitude'
   */
  AION_signal_transfer_B.DataTypeConversion59 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Altitude;

  /* DataTypeConversion: '<Root>/Data Type Conversion60' */
  AION_signal_transfer_B.DataTypeConversion60 = static_cast<IMU_Status>
    (AION_signal_transfer_B.DataTypeConversion32);

  /* DataTypeConversion: '<Root>/Data Type Conversion8' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle'
   */
  AION_signal_transfer_B.DataTypeConversion8 =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_longitudinal_control_info_set_LngCtrlReq'
   */
  AION_signal_transfer_B.DataTypeConversion3 = static_cast<uint8_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_set_longitudinal_control_info_set_LngCtrlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  AION_signal_transfer_B.DataTypeConversion10 =
    AION_signal_transfer_B.DataTypeConversion3;

  /* DataTypeConversion: '<Root>/Data Type Conversion11' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReqVD'
   */
  AION_signal_transfer_B.DataTypeConversion11 = static_cast<uint8_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReqVD);

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReq'
   */
  AION_signal_transfer_B.DataTypeConversion4 = static_cast<uint64_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion14' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   */
  AION_signal_transfer_B.DataTypeConversion14 = static_cast<real_T>
    (AION_signal_transfer_B.DataTypeConversion4);

  /* DataTypeConversion: '<Root>/Data Type Conversion15' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_lateral_control_info_set_LatCtrlReq'
   */
  AION_signal_transfer_B.DataTypeConversion15 = static_cast<int32_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_set_lateral_control_info_set_LatCtrlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion16' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_lateral_control_info_set_SteerAngReq'
   */
  AION_signal_transfer_B.DataTypeConversion16 =
    AION_signal_transfer_U.ADCU_InternalOutputPort_set_lateral_control_info_set_SteerAngReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion26' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_ADCU_info_set_BodyCtrlReq'
   */
  AION_signal_transfer_B.DataTypeConversion26 = static_cast<uint8_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_set_ADCU_info_set_BodyCtrlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion19' */
  AION_signal_transfer_B.DataTypeConversion19 =
    AION_signal_transfer_B.DataTypeConversion26;

  /* DataTypeConversion: '<Root>/Data Type Conversion27' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_ADCU_info_set_TurnLightReq'
   */
  AION_signal_transfer_B.DataTypeConversion27 = static_cast<uint8_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_set_ADCU_info_set_TurnLightReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion21' */
  AION_signal_transfer_B.DataTypeConversion21 =
    AION_signal_transfer_B.DataTypeConversion27;

  /* DataTypeConversion: '<Root>/Data Type Conversion28' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_ADCU_info_set_HornRingReq'
   */
  AION_signal_transfer_B.DataTypeConversion28 = static_cast<uint8_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_set_ADCU_info_set_HornRingReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion22' */
  AION_signal_transfer_B.DataTypeConversion22 =
    AION_signal_transfer_B.DataTypeConversion28;

  /* DataTypeConversion: '<Root>/Data Type Conversion29' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_ADCU_info_set_BeamReq'
   */
  AION_signal_transfer_B.DataTypeConversion29 = static_cast<uint8_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_set_ADCU_info_set_BeamReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion25' */
  AION_signal_transfer_B.DataTypeConversion25 =
    AION_signal_transfer_B.DataTypeConversion29;

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_longitudinal_control_info_set_AutoTrqWhlReq'
   */
  AION_signal_transfer_B.DataTypeConversion5 =
    AION_signal_transfer_U.ADCU_InternalOutputPort_set_longitudinal_control_info_set_AutoTrqWhlReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_lateral_control_info_set_SteerWhlTorqReq'
   */
  AION_signal_transfer_B.DataTypeConversion6 =
    AION_signal_transfer_U.ADCU_InternalOutputPort_set_lateral_control_info_set_SteerWhlTorqReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion7' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_set_longitudinal_control_info_set_BrakeReq'
   */
  AION_signal_transfer_B.DataTypeConversion7 =
    AION_signal_transfer_U.ADCU_InternalOutputPort_set_longitudinal_control_info_set_BrakeReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  AION_signal_transfer_B.DataTypeConversion9 =
    AION_signal_transfer_B.DataTypeConversion11;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_lateral_control_info_set_LatCtrlReq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_lateral_control_info_set_LatCtrlReq
    = Manual;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_lateral_control_info_set_SteerAngReq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_lateral_control_info_set_SteerAngReq
    = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_lateral_control_info_set_SteerWhlTorqReq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_lateral_control_info_set_SteerWhlTorqReq
    = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_longitudinal_control_info_set_LngCtrlReq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_longitudinal_control_info_set_LngCtrlReq
    = Manual;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_longitudinal_control_info_set_AutoTrqWhlReq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_longitudinal_control_info_set_AutoTrqWhlReq
    = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_longitudinal_control_info_set_BrakeReq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_longitudinal_control_info_set_BrakeReq
    = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReq
    = NoRequest;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReqVD' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReqVD
    = Invalid;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_Checksum1' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_Checksum1 = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter1' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter1 =
    0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_Checksum2' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_Checksum2 = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter2' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter2 =
    0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_Checksum3' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_Checksum3 = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter3' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter3 =
    0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_BeamReq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_BeamReq =
    NoBeamRequest;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_BodyCtrlReq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_BodyCtrlReq =
    Disable;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_HornRingReq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_HornRingReq =
    NotActiveRequest;

  /* Outport: '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_TurnLightReq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_TurnLightReq =
    NoLightRequest;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCS_info_get_ABSActiveSt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCS_info_get_ABSActiveSt =
    0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCS_info_get_VehSpd' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCS_info_get_VehSpd =
    AION_signal_transfer_B.DataTypeConversion12;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCS_info_get_VehSpdVD' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCS_info_get_VehSpdVD = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCS_info_get_YawRate' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCS_info_get_YawRate = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCS_info_get_ActVehLaltrlAccel' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCS_info_get_ActVehLaltrlAccel
    = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCS_info_get_ActVehLongAccel' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCS_info_get_ActVehLongAccel
    = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_VCU_info_get_ActVehWheelTorq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_ActVehWheelTorq
    = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_VCU_info_get_GearLeverIntv' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_GearLeverIntv =
    0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_VCU_info_get_VehDrvMod' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_VehDrvMod =
    AION_signal_transfer_B.DataTypeConversion50;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_VCU_info_get_VehRdySt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_VehRdySt =
    AION_signal_transfer_B.DataTypeConversion49;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_VCU_info_get_VehRng' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_VehRng = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvl' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvl =
    AION_signal_transfer_B.DataTypeConversion34;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvlVD' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvlVD =
    0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_VCU_info_get_GasPedalActPst' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_GasPedalActPst =
    0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_VCU_info_get_AccElecECFail' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_AccElecECFail =
    0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_VCU_info_get_VehWheelTorqMax' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_VehWheelTorqMax
    = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_VCU_info_get_BrkPedalSt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_BrkPedalSt = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LatAutoCheckReport' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_SCU_info_get_LatAutoCheckReport
    = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LatCtrlMode' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_SCU_info_get_LatCtrlMode =
    AION_signal_transfer_B.DataTypeConversion18;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LatQuitReport' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_SCU_info_get_LatQuitReport =
    0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LngAutoCheckIReport' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_SCU_info_get_LngAutoCheckIReport
    = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LngCtrlMode' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_SCU_info_get_LngCtrlMode =
    AION_signal_transfer_B.DataTypeConversion17;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LngQuitReport' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_SCU_info_get_LngQuitReport =
    0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_SCU_info_get_StrngWhlIntv' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_SCU_info_get_StrngWhlIntv =
    0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_EPB_info_get_SysSt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_EPB_info_get_SysSt = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_SRS_info_get_DriverSeatBeltSt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_SRS_info_get_DriverSeatBeltSt
    = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_SRS_info_get_PsngrSeatBeltSt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_SRS_info_get_PsngrSeatBeltSt
    = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_EPS_info_get_SteeringAngle' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_EPS_info_get_SteeringAngle =
    AION_signal_transfer_B.DataTypeConversion8;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpd' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpd
    = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpdVD' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpdVD
    = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleVD' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleVD
    = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_EPS_info_get_StrngWhlTorq' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_EPS_info_get_StrngWhlTorq =
    0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCM_info_get_CtrlAvailable' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_CtrlAvailable =
    AION_signal_transfer_B.DataTypeConversion20;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCM_info_get_HazardLampSt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_HazardLampSt =
    AION_signal_transfer_B.DataTypeConversion37;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCM_info_get_HighBeamSt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_HighBeamSt =
    AION_signal_transfer_B.DataTypeConversion43;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCM_info_get_HornSt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_HornSt =
    AION_signal_transfer_B.DataTypeConversion39;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCM_info_get_KeySt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_KeySt = 0U;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCM_info_get_LeftTurnLampSt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_LeftTurnLampSt =
    AION_signal_transfer_B.DataTypeConversion45;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCM_info_get_LowBeamSt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_LowBeamSt =
    AION_signal_transfer_B.DataTypeConversion41;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_BCM_info_get_RightTurnLampSt' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_RightTurnLampSt
    = AION_signal_transfer_B.DataTypeConversion47;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_GPSWeek' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_GPSWeek = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_GPSTime' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_GPSTime =
    AION_signal_transfer_B.DataTypeConversion23;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Heading' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Heading =
    AION_signal_transfer_B.DataTypeConversion24;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Pitch' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Pitch =
    AION_signal_transfer_B.DataTypeConversion30;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Roll' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Roll =
    AION_signal_transfer_B.DataTypeConversion31;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_IMUWorkStatus' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_IMUWorkStatus =
    AION_signal_transfer_B.DataTypeConversion60;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedX' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedX =
    AION_signal_transfer_B.DataTypeConversion33;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedY' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedY =
    AION_signal_transfer_B.DataTypeConversion52;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedZ' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedZ =
    AION_signal_transfer_B.DataTypeConversion53;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AccelerationX' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AccelerationX =
    AION_signal_transfer_B.DataTypeConversion54;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AccelerationY' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AccelerationY =
    AION_signal_transfer_B.DataTypeConversion55;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AccelerationZ' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AccelerationZ =
    AION_signal_transfer_B.DataTypeConversion56;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Latitude' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Latitude =
    AION_signal_transfer_B.DataTypeConversion57;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Longitude' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Longitude =
    AION_signal_transfer_B.DataTypeConversion58;

  /* Outport: '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Altitude' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Altitude =
    AION_signal_transfer_B.DataTypeConversion59;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq
    = AION_signal_transfer_B.DataTypeConversion5;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq
    = AION_signal_transfer_B.DataTypeConversion7;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq
    = AION_signal_transfer_B.DataTypeConversion14;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD
    = AION_signal_transfer_B.DataTypeConversion9;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq
    = AION_signal_transfer_B.DataTypeConversion10;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq
    = AION_signal_transfer_B.DataTypeConversion15;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq
    = AION_signal_transfer_B.DataTypeConversion16;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq
    = AION_signal_transfer_B.DataTypeConversion6;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq
    = AION_signal_transfer_B.DataTypeConversion25;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq
    = AION_signal_transfer_B.DataTypeConversion19;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq
    = AION_signal_transfer_B.DataTypeConversion22;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq
    = AION_signal_transfer_B.DataTypeConversion21;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_signal_transfer_M->Timing.clockTick0)) {
    ++AION_signal_transfer_M->Timing.clockTickH0;
  }

  AION_signal_transfer_M->Timing.taskTime0 =
    AION_signal_transfer_M->Timing.clockTick0 *
    AION_signal_transfer_M->Timing.stepSize0 +
    AION_signal_transfer_M->Timing.clockTickH0 *
    AION_signal_transfer_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void AION_signal_transfer_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  AION_signal_transfer_M->Timing.stepSize0 = 0.2;

  /* block I/O */
  (void) std::memset((static_cast<void *>(&AION_signal_transfer_B)), 0,
                     sizeof(B_AION_signal_transfer_T));

  {
    AION_signal_transfer_B.DataTypeConversion4 = (0UL);
    AION_signal_transfer_B.DataTypeConversion12 = 0.0;
    AION_signal_transfer_B.DataTypeConversion23 = 0.0;
    AION_signal_transfer_B.DataTypeConversion24 = 0.0;
    AION_signal_transfer_B.DataTypeConversion30 = 0.0;
    AION_signal_transfer_B.DataTypeConversion31 = 0.0;
    AION_signal_transfer_B.DataTypeConversion33 = 0.0;
    AION_signal_transfer_B.DataTypeConversion52 = 0.0;
    AION_signal_transfer_B.DataTypeConversion53 = 0.0;
    AION_signal_transfer_B.DataTypeConversion54 = 0.0;
    AION_signal_transfer_B.DataTypeConversion55 = 0.0;
    AION_signal_transfer_B.DataTypeConversion56 = 0.0;
    AION_signal_transfer_B.DataTypeConversion57 = 0.0;
    AION_signal_transfer_B.DataTypeConversion58 = 0.0;
    AION_signal_transfer_B.DataTypeConversion59 = 0.0;
    AION_signal_transfer_B.DataTypeConversion8 = 0.0;
    AION_signal_transfer_B.DataTypeConversion10 = 0.0;
    AION_signal_transfer_B.DataTypeConversion14 = 0.0;
    AION_signal_transfer_B.DataTypeConversion15 = 0.0;
    AION_signal_transfer_B.DataTypeConversion16 = 0.0;
    AION_signal_transfer_B.DataTypeConversion19 = 0.0;
    AION_signal_transfer_B.DataTypeConversion21 = 0.0;
    AION_signal_transfer_B.DataTypeConversion22 = 0.0;
    AION_signal_transfer_B.DataTypeConversion25 = 0.0;
    AION_signal_transfer_B.DataTypeConversion5 = 0.0;
    AION_signal_transfer_B.DataTypeConversion6 = 0.0;
    AION_signal_transfer_B.DataTypeConversion7 = 0.0;
    AION_signal_transfer_B.DataTypeConversion9 = 0.0;
    AION_signal_transfer_B.DataTypeConversion49 = NotReady;
    AION_signal_transfer_B.DataTypeConversion60 = Initialization;
    AION_signal_transfer_B.DataTypeConversion34 = InvalidGearStatus;
    AION_signal_transfer_B.DataTypeConversion50 = InvalidDriveStatus;
    AION_signal_transfer_B.DataTypeConversion17 = ManualStatus;
    AION_signal_transfer_B.DataTypeConversion18 = ManualStatus;
    AION_signal_transfer_B.DataTypeConversion20 = NotAvailable;
    AION_signal_transfer_B.DataTypeConversion37 = NotActiveStatus;
    AION_signal_transfer_B.DataTypeConversion39 = NotActiveStatus;
    AION_signal_transfer_B.DataTypeConversion41 = NotActiveStatus;
    AION_signal_transfer_B.DataTypeConversion43 = NotActiveStatus;
    AION_signal_transfer_B.DataTypeConversion45 = NotActiveStatus;
    AION_signal_transfer_B.DataTypeConversion47 = NotActiveStatus;
  }

  /* external inputs */
  (void)std::memset(&AION_signal_transfer_U, 0, sizeof
                    (ExtU_AION_signal_transfer_T));
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_ABSActiveSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpdVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpd
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpdVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorq
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HornSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_KeySt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SRS_DriverSeatBeltSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SRS_PsngrSeatBeltSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatAutoCheckReport
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatQuitReport
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngAutoChecklReport
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngQuitReport
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_StrngWhlIntv
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_VCU_GearLeverIntv
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRdySt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRng
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvlVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_ActVehWheelTorq
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_AccElecECFail
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPst
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_VehWheelTorqMax
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_VCU_BrkPedalSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_BCS_YawRate
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccel
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccel
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_SysSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_GPSWeek = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_GPSTime = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Heading = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Pitch = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Roll = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_IMUWorkStatus =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedX =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedY =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedZ =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationX =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationY =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationZ =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Latitude = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Longitude =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Altitude = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_GPSWeek =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_GPSTime =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Heading =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Pitch =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Roll = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_IMUWorkStatus
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AngleSpeedX
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AngleSpeedY
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AngleSpeedZ
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AccelerationX
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AccelerationY
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AccelerationZ
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Latitude =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Longitude =
    0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Altitude =
    0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_lateral_control_info_set_LatCtrlReq
    = Manual;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_lateral_control_info_set_SteerAngReq
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_lateral_control_info_set_SteerWhlTorqReq
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_longitudinal_control_info_set_LngCtrlReq
    = Manual;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_longitudinal_control_info_set_AutoTrqWhlReq
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_longitudinal_control_info_set_BrakeReq
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReq
    = NoRequest;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReqVD
    = Invalid;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_ADCU_info_set_BeamReq =
    NoBeamRequest;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_ADCU_info_set_BodyCtrlReq =
    Disable;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_ADCU_info_set_HornRingReq =
    NotActiveRequest;
  AION_signal_transfer_U.ADCU_InternalOutputPort_set_ADCU_info_set_TurnLightReq =
    NoLightRequest;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_BCS_info_get_VehSpd = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_BCS_info_get_YawRate = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_BCS_info_get_ActVehLaltrlAccel
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_BCS_info_get_ActVehLongAccel
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_VCU_info_get_VehDrvMod =
    InvalidDriveStatus;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_VCU_info_get_VehRdySt =
    NotReady;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_VCU_info_get_CrntGearLvl =
    InvalidGearStatus;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_VCU_info_get_GasPedalActPst
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_SCU_info_get_LatCtrlMode =
    ManualStatus;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_SCU_info_get_LngCtrlMode =
    ManualStatus;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_EPS_info_get_SteeringAngle =
    0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_EPS_info_get_StrngWhlTorq =
    0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_BCM_info_get_CtrlAvailable =
    NotAvailable;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_BCM_info_get_HazardLampSt =
    NotActiveStatus;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_BCM_info_get_HighBeamSt =
    NotActiveStatus;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_BCM_info_get_HornSt =
    NotActiveStatus;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_BCM_info_get_LeftTurnLampSt
    = NotActiveStatus;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_BCM_info_get_LowBeamSt =
    NotActiveStatus;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_BCM_info_get_RightTurnLampSt
    = NotActiveStatus;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_GPSWeek = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_GPSTime = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_Heading = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_Pitch = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_Roll = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_IMUWorkStatus =
    Initialization;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_AngleSpeedX =
    0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_AngleSpeedY =
    0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_AngleSpeedZ =
    0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_AccelerationX =
    0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_AccelerationY =
    0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_AccelerationZ =
    0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_Latitude = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_Longitude =
    0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_get_IMU_info_get_Altitude = 0.0;

  /* external outputs */
  (void) std::memset(static_cast<void *>(&AION_signal_transfer_Y), 0,
                     sizeof(ExtY_AION_signal_transfer_T));
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_lateral_control_info_set_LatCtrlReq
    = Manual;
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_lateral_control_info_set_SteerAngReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_lateral_control_info_set_SteerWhlTorqReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_longitudinal_control_info_set_LngCtrlReq
    = Manual;
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_longitudinal_control_info_set_AutoTrqWhlReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_longitudinal_control_info_set_BrakeReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReq
    = NoRequest;
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReqVD
    = Invalid;
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_BeamReq =
    NoBeamRequest;
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_BodyCtrlReq =
    Disable;
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_HornRingReq =
    NotActiveRequest;
  AION_signal_transfer_Y.ADCU_InternalInputPort_set_ADCU_info_set_TurnLightReq =
    NoLightRequest;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCS_info_get_VehSpd = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCS_info_get_YawRate = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCS_info_get_ActVehLaltrlAccel
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCS_info_get_ActVehLongAccel
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_VehDrvMod =
    InvalidDriveStatus;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_VehRdySt =
    NotReady;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvl =
    InvalidGearStatus;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_VCU_info_get_GasPedalActPst =
    0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_SCU_info_get_LatCtrlMode =
    ManualStatus;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_SCU_info_get_LngCtrlMode =
    ManualStatus;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_EPS_info_get_SteeringAngle =
    0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_EPS_info_get_StrngWhlTorq =
    0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_CtrlAvailable =
    NotAvailable;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_HazardLampSt =
    NotActiveStatus;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_HighBeamSt =
    NotActiveStatus;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_HornSt =
    NotActiveStatus;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_LeftTurnLampSt =
    NotActiveStatus;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_LowBeamSt =
    NotActiveStatus;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_BCM_info_get_RightTurnLampSt
    = NotActiveStatus;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_GPSWeek = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_GPSTime = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Heading = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Pitch = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Roll = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_IMUWorkStatus =
    Initialization;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedX =
    0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedY =
    0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedZ =
    0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AccelerationX =
    0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AccelerationY =
    0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_AccelerationZ =
    0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Latitude = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Longitude = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_get_IMU_info_get_Altitude = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq
    = 0.0;
}

/* Model terminate function */
void AION_signal_transfer_terminate(void)
{
  /* (no terminate code required) */
}
