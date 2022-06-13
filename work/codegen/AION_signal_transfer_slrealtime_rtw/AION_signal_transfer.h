/*
 * AION_signal_transfer.h
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

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
struct B_AION_signal_transfer_T {
  uint64_T DataTypeConversion4;        /* '<Root>/Data Type Conversion4' */
  real_T DataTypeConversion12;         /* '<Root>/Data Type Conversion12' */
  real_T DataTypeConversion23;         /* '<Root>/Data Type Conversion23' */
  real_T DataTypeConversion24;         /* '<Root>/Data Type Conversion24' */
  real_T DataTypeConversion30;         /* '<Root>/Data Type Conversion30' */
  real_T DataTypeConversion31;         /* '<Root>/Data Type Conversion31' */
  real_T DataTypeConversion33;         /* '<Root>/Data Type Conversion33' */
  real_T DataTypeConversion52;         /* '<Root>/Data Type Conversion52' */
  real_T DataTypeConversion53;         /* '<Root>/Data Type Conversion53' */
  real_T DataTypeConversion54;         /* '<Root>/Data Type Conversion54' */
  real_T DataTypeConversion55;         /* '<Root>/Data Type Conversion55' */
  real_T DataTypeConversion56;         /* '<Root>/Data Type Conversion56' */
  real_T DataTypeConversion57;         /* '<Root>/Data Type Conversion57' */
  real_T DataTypeConversion58;         /* '<Root>/Data Type Conversion58' */
  real_T DataTypeConversion59;         /* '<Root>/Data Type Conversion59' */
  real_T DataTypeConversion8;          /* '<Root>/Data Type Conversion8' */
  real_T DataTypeConversion10;         /* '<Root>/Data Type Conversion10' */
  real_T DataTypeConversion14;         /* '<Root>/Data Type Conversion14' */
  real_T DataTypeConversion15;         /* '<Root>/Data Type Conversion15' */
  real_T DataTypeConversion16;         /* '<Root>/Data Type Conversion16' */
  real_T DataTypeConversion19;         /* '<Root>/Data Type Conversion19' */
  real_T DataTypeConversion21;         /* '<Root>/Data Type Conversion21' */
  real_T DataTypeConversion22;         /* '<Root>/Data Type Conversion22' */
  real_T DataTypeConversion25;         /* '<Root>/Data Type Conversion25' */
  real_T DataTypeConversion5;          /* '<Root>/Data Type Conversion5' */
  real_T DataTypeConversion6;          /* '<Root>/Data Type Conversion6' */
  real_T DataTypeConversion7;          /* '<Root>/Data Type Conversion7' */
  real_T DataTypeConversion9;          /* '<Root>/Data Type Conversion9' */
  Ready_status DataTypeConversion49;   /* '<Root>/Data Type Conversion49' */
  IMU_Status DataTypeConversion60;     /* '<Root>/Data Type Conversion60' */
  Gear_status DataTypeConversion34;    /* '<Root>/Data Type Conversion34' */
  Drive_status DataTypeConversion50;   /* '<Root>/Data Type Conversion50' */
  Control_status DataTypeConversion17; /* '<Root>/Data Type Conversion17' */
  Control_status DataTypeConversion18; /* '<Root>/Data Type Conversion18' */
  Available_status DataTypeConversion20;/* '<Root>/Data Type Conversion20' */
  Active_status DataTypeConversion37;  /* '<Root>/Data Type Conversion37' */
  Active_status DataTypeConversion39;  /* '<Root>/Data Type Conversion39' */
  Active_status DataTypeConversion41;  /* '<Root>/Data Type Conversion41' */
  Active_status DataTypeConversion43;  /* '<Root>/Data Type Conversion43' */
  Active_status DataTypeConversion45;  /* '<Root>/Data Type Conversion45' */
  Active_status DataTypeConversion47;  /* '<Root>/Data Type Conversion47' */
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

/* External inputs (root inport signals with default storage) */
struct ExtU_AION_signal_transfer_T {
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_ABSActiveSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpdVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpd;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpdVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorq;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HornSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_KeySt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SRS_DriverSeatBeltSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SRS_PsngrSeatBeltSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatAutoCheckReport;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatQuitReport;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngAutoChecklReport;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngQuitReport;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_StrngWhlIntv;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_VCU_GearLeverIntv;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRdySt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRng;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvlVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_ActVehWheelTorq;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_AccElecECFail;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPst;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_VehWheelTorqMax;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_VCU_BrkPedalSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_BCS_YawRate;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccel;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccel;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_SysSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_GPSWeek;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_GPSTime;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Heading;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Pitch;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Roll;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_IMUWorkStatus;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedX;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedY;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AngleSpeedZ;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationX;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationY;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_AccelerationZ;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Latitude;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Longitude;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_IMU2ADCU_bus_Altitude;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InputPort_InputSerial_bus_IMUWeek;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_GPSWeek;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_GPSTime;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Heading;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Pitch;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Roll;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_IMUWorkStatus;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AngleSpeedX;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AngleSpeedY;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AngleSpeedZ;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AccelerationX;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AccelerationY;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_AccelerationZ;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Latitude;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Longitude;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputSerial_bus_IMUSerial_bus_Altitude;/* '<Root>/B_-1_-1' */
  Control_request
    ADCU_InternalOutputPort_set_lateral_control_info_set_LatCtrlReq;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_set_lateral_control_info_set_SteerAngReq;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_set_lateral_control_info_set_SteerWhlTorqReq;/* '<Root>/B_-1_-1' */
  Control_request
    ADCU_InternalOutputPort_set_longitudinal_control_info_set_LngCtrlReq;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_set_longitudinal_control_info_set_AutoTrqWhlReq;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_set_longitudinal_control_info_set_BrakeReq;/* '<Root>/B_-1_-1' */
  Gear_request
    ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReq;/* '<Root>/B_-1_-1' */
  Validation_status
    ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReqVD;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_set_ADCU_info_set_Checksum1;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_set_ADCU_info_set_MsgCounter1;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_set_ADCU_info_set_Checksum2;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_set_ADCU_info_set_MsgCounter2;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_set_ADCU_info_set_Checksum3;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_set_ADCU_info_set_MsgCounter3;/* '<Root>/B_-1_-1' */
  Beam_request ADCU_InternalOutputPort_set_ADCU_info_set_BeamReq;/* '<Root>/B_-1_-1' */
  Enable_request ADCU_InternalOutputPort_set_ADCU_info_set_BodyCtrlReq;/* '<Root>/B_-1_-1' */
  Active_request ADCU_InternalOutputPort_set_ADCU_info_set_HornRingReq;/* '<Root>/B_-1_-1' */
  Light_request ADCU_InternalOutputPort_set_ADCU_info_set_TurnLightReq;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_BCS_info_get_ABSActiveSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_BCS_info_get_VehSpd;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_BCS_info_get_VehSpdVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_BCS_info_get_YawRate;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_BCS_info_get_ActVehLaltrlAccel;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_BCS_info_get_ActVehLongAccel;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_get_VCU_info_get_ActVehWheelTorq;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_VCU_info_get_GearLeverIntv;/* '<Root>/B_-1_-1' */
  Drive_status ADCU_InternalOutputPort_get_VCU_info_get_VehDrvMod;/* '<Root>/B_-1_-1' */
  Ready_status ADCU_InternalOutputPort_get_VCU_info_get_VehRdySt;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_get_VCU_info_get_VehRng;/* '<Root>/B_-1_-1' */
  Gear_status ADCU_InternalOutputPort_get_VCU_info_get_CrntGearLvl;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_VCU_info_get_CrntGearLvlVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_VCU_info_get_GasPedalActPst;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_VCU_info_get_AccElecECFail;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_get_VCU_info_get_VehWheelTorqMax;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_VCU_info_get_BrkPedalSt;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_get_SCU_info_get_LatAutoCheckReport;/* '<Root>/B_-1_-1' */
  Control_status ADCU_InternalOutputPort_get_SCU_info_get_LatCtrlMode;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_get_SCU_info_get_LatQuitReport;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_get_SCU_info_get_LngAutoCheckIReport;/* '<Root>/B_-1_-1' */
  Control_status ADCU_InternalOutputPort_get_SCU_info_get_LngCtrlMode;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_get_SCU_info_get_LngQuitReport;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_SCU_info_get_StrngWhlIntv;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_EPB_info_get_SysSt;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_SRS_info_get_DriverSeatBeltSt;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_SRS_info_get_PsngrSeatBeltSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_EPS_info_get_SteeringAngle;/* '<Root>/B_-1_-1' */
  uint32_T ADCU_InternalOutputPort_get_EPS_info_get_SteeringAngleSpd;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_EPS_info_get_SteeringAngleSpdVD;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_EPS_info_get_SteeringAngleVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_EPS_info_get_StrngWhlTorq;/* '<Root>/B_-1_-1' */
  Available_status ADCU_InternalOutputPort_get_BCM_info_get_CtrlAvailable;/* '<Root>/B_-1_-1' */
  Active_status ADCU_InternalOutputPort_get_BCM_info_get_HazardLampSt;/* '<Root>/B_-1_-1' */
  Active_status ADCU_InternalOutputPort_get_BCM_info_get_HighBeamSt;/* '<Root>/B_-1_-1' */
  Active_status ADCU_InternalOutputPort_get_BCM_info_get_HornSt;/* '<Root>/B_-1_-1' */
  uint8_T ADCU_InternalOutputPort_get_BCM_info_get_KeySt;/* '<Root>/B_-1_-1' */
  Active_status ADCU_InternalOutputPort_get_BCM_info_get_LeftTurnLampSt;/* '<Root>/B_-1_-1' */
  Active_status ADCU_InternalOutputPort_get_BCM_info_get_LowBeamSt;/* '<Root>/B_-1_-1' */
  Active_status ADCU_InternalOutputPort_get_BCM_info_get_RightTurnLampSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_GPSWeek;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_GPSTime;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_Heading;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_Pitch;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_Roll;/* '<Root>/B_-1_-1' */
  IMU_Status ADCU_InternalOutputPort_get_IMU_info_get_IMUWorkStatus;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_AngleSpeedX;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_AngleSpeedY;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_AngleSpeedZ;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_AccelerationX;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_AccelerationY;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_AccelerationZ;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_Latitude;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_Longitude;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_get_IMU_info_get_Altitude;/* '<Root>/B_-1_-1' */
};

/* External outputs (root outports fed by signals with default storage) */
struct ExtY_AION_signal_transfer_T {
  Control_request ADCU_InternalInputPort_set_lateral_control_info_set_LatCtrlReq;
  /* '<Root>/ADCU_InternalInputPort_set_lateral_control_info_set_LatCtrlReq' */
  real_T ADCU_InternalInputPort_set_lateral_control_info_set_SteerAngReq;
  /* '<Root>/ADCU_InternalInputPort_set_lateral_control_info_set_SteerAngReq' */
  real_T ADCU_InternalInputPort_set_lateral_control_info_set_SteerWhlTorqReq;
  /* '<Root>/ADCU_InternalInputPort_set_lateral_control_info_set_SteerWhlTorqReq' */
  Control_request
    ADCU_InternalInputPort_set_longitudinal_control_info_set_LngCtrlReq;
  /* '<Root>/ADCU_InternalInputPort_set_longitudinal_control_info_set_LngCtrlReq' */
  real_T ADCU_InternalInputPort_set_longitudinal_control_info_set_AutoTrqWhlReq;
  /* '<Root>/ADCU_InternalInputPort_set_longitudinal_control_info_set_AutoTrqWhlReq' */
  real_T ADCU_InternalInputPort_set_longitudinal_control_info_set_BrakeReq;
  /* '<Root>/ADCU_InternalInputPort_set_longitudinal_control_info_set_BrakeReq' */
  Gear_request
    ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReq;
  /* '<Root>/ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReq' */
  Validation_status
    ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReqVD;
  /* '<Root>/ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReqVD' */
  uint32_T ADCU_InternalInputPort_set_ADCU_info_set_Checksum1;
               /* '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_Checksum1' */
  uint32_T ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter1;
             /* '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter1' */
  uint32_T ADCU_InternalInputPort_set_ADCU_info_set_Checksum2;
               /* '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_Checksum2' */
  uint32_T ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter2;
             /* '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter2' */
  uint32_T ADCU_InternalInputPort_set_ADCU_info_set_Checksum3;
               /* '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_Checksum3' */
  uint32_T ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter3;
             /* '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter3' */
  Beam_request ADCU_InternalInputPort_set_ADCU_info_set_BeamReq;
                 /* '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_BeamReq' */
  Enable_request ADCU_InternalInputPort_set_ADCU_info_set_BodyCtrlReq;
             /* '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_BodyCtrlReq' */
  Active_request ADCU_InternalInputPort_set_ADCU_info_set_HornRingReq;
             /* '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_HornRingReq' */
  Light_request ADCU_InternalInputPort_set_ADCU_info_set_TurnLightReq;
            /* '<Root>/ADCU_InternalInputPort_set_ADCU_info_set_TurnLightReq' */
  uint8_T ADCU_InternalInputPort_get_BCS_info_get_ABSActiveSt;
              /* '<Root>/ADCU_InternalInputPort_get_BCS_info_get_ABSActiveSt' */
  real_T ADCU_InternalInputPort_get_BCS_info_get_VehSpd;
                   /* '<Root>/ADCU_InternalInputPort_get_BCS_info_get_VehSpd' */
  uint8_T ADCU_InternalInputPort_get_BCS_info_get_VehSpdVD;
                 /* '<Root>/ADCU_InternalInputPort_get_BCS_info_get_VehSpdVD' */
  real_T ADCU_InternalInputPort_get_BCS_info_get_YawRate;
                  /* '<Root>/ADCU_InternalInputPort_get_BCS_info_get_YawRate' */
  real_T ADCU_InternalInputPort_get_BCS_info_get_ActVehLaltrlAccel;
        /* '<Root>/ADCU_InternalInputPort_get_BCS_info_get_ActVehLaltrlAccel' */
  real_T ADCU_InternalInputPort_get_BCS_info_get_ActVehLongAccel;
          /* '<Root>/ADCU_InternalInputPort_get_BCS_info_get_ActVehLongAccel' */
  uint32_T ADCU_InternalInputPort_get_VCU_info_get_ActVehWheelTorq;
          /* '<Root>/ADCU_InternalInputPort_get_VCU_info_get_ActVehWheelTorq' */
  uint8_T ADCU_InternalInputPort_get_VCU_info_get_GearLeverIntv;
            /* '<Root>/ADCU_InternalInputPort_get_VCU_info_get_GearLeverIntv' */
  Drive_status ADCU_InternalInputPort_get_VCU_info_get_VehDrvMod;
                /* '<Root>/ADCU_InternalInputPort_get_VCU_info_get_VehDrvMod' */
  Ready_status ADCU_InternalInputPort_get_VCU_info_get_VehRdySt;
                 /* '<Root>/ADCU_InternalInputPort_get_VCU_info_get_VehRdySt' */
  uint32_T ADCU_InternalInputPort_get_VCU_info_get_VehRng;
                   /* '<Root>/ADCU_InternalInputPort_get_VCU_info_get_VehRng' */
  Gear_status ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvl;
              /* '<Root>/ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvl' */
  uint8_T ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvlVD;
            /* '<Root>/ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvlVD' */
  real_T ADCU_InternalInputPort_get_VCU_info_get_GasPedalActPst;
           /* '<Root>/ADCU_InternalInputPort_get_VCU_info_get_GasPedalActPst' */
  uint8_T ADCU_InternalInputPort_get_VCU_info_get_AccElecECFail;
            /* '<Root>/ADCU_InternalInputPort_get_VCU_info_get_AccElecECFail' */
  uint32_T ADCU_InternalInputPort_get_VCU_info_get_VehWheelTorqMax;
          /* '<Root>/ADCU_InternalInputPort_get_VCU_info_get_VehWheelTorqMax' */
  uint8_T ADCU_InternalInputPort_get_VCU_info_get_BrkPedalSt;
               /* '<Root>/ADCU_InternalInputPort_get_VCU_info_get_BrkPedalSt' */
  uint32_T ADCU_InternalInputPort_get_SCU_info_get_LatAutoCheckReport;
       /* '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LatAutoCheckReport' */
  Control_status ADCU_InternalInputPort_get_SCU_info_get_LatCtrlMode;
              /* '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LatCtrlMode' */
  uint32_T ADCU_InternalInputPort_get_SCU_info_get_LatQuitReport;
            /* '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LatQuitReport' */
  uint32_T ADCU_InternalInputPort_get_SCU_info_get_LngAutoCheckIReport;
      /* '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LngAutoCheckIReport' */
  Control_status ADCU_InternalInputPort_get_SCU_info_get_LngCtrlMode;
              /* '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LngCtrlMode' */
  uint32_T ADCU_InternalInputPort_get_SCU_info_get_LngQuitReport;
            /* '<Root>/ADCU_InternalInputPort_get_SCU_info_get_LngQuitReport' */
  uint8_T ADCU_InternalInputPort_get_SCU_info_get_StrngWhlIntv;
             /* '<Root>/ADCU_InternalInputPort_get_SCU_info_get_StrngWhlIntv' */
  uint8_T ADCU_InternalInputPort_get_EPB_info_get_SysSt;
                    /* '<Root>/ADCU_InternalInputPort_get_EPB_info_get_SysSt' */
  uint8_T ADCU_InternalInputPort_get_SRS_info_get_DriverSeatBeltSt;
         /* '<Root>/ADCU_InternalInputPort_get_SRS_info_get_DriverSeatBeltSt' */
  uint8_T ADCU_InternalInputPort_get_SRS_info_get_PsngrSeatBeltSt;
          /* '<Root>/ADCU_InternalInputPort_get_SRS_info_get_PsngrSeatBeltSt' */
  real_T ADCU_InternalInputPort_get_EPS_info_get_SteeringAngle;
            /* '<Root>/ADCU_InternalInputPort_get_EPS_info_get_SteeringAngle' */
  uint32_T ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpd;
         /* '<Root>/ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpd' */
  uint8_T ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpdVD;
       /* '<Root>/ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpdVD' */
  uint8_T ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleVD;
          /* '<Root>/ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleVD' */
  real_T ADCU_InternalInputPort_get_EPS_info_get_StrngWhlTorq;
             /* '<Root>/ADCU_InternalInputPort_get_EPS_info_get_StrngWhlTorq' */
  Available_status ADCU_InternalInputPort_get_BCM_info_get_CtrlAvailable;
            /* '<Root>/ADCU_InternalInputPort_get_BCM_info_get_CtrlAvailable' */
  Active_status ADCU_InternalInputPort_get_BCM_info_get_HazardLampSt;
             /* '<Root>/ADCU_InternalInputPort_get_BCM_info_get_HazardLampSt' */
  Active_status ADCU_InternalInputPort_get_BCM_info_get_HighBeamSt;
               /* '<Root>/ADCU_InternalInputPort_get_BCM_info_get_HighBeamSt' */
  Active_status ADCU_InternalInputPort_get_BCM_info_get_HornSt;
                   /* '<Root>/ADCU_InternalInputPort_get_BCM_info_get_HornSt' */
  uint8_T ADCU_InternalInputPort_get_BCM_info_get_KeySt;
                    /* '<Root>/ADCU_InternalInputPort_get_BCM_info_get_KeySt' */
  Active_status ADCU_InternalInputPort_get_BCM_info_get_LeftTurnLampSt;
           /* '<Root>/ADCU_InternalInputPort_get_BCM_info_get_LeftTurnLampSt' */
  Active_status ADCU_InternalInputPort_get_BCM_info_get_LowBeamSt;
                /* '<Root>/ADCU_InternalInputPort_get_BCM_info_get_LowBeamSt' */
  Active_status ADCU_InternalInputPort_get_BCM_info_get_RightTurnLampSt;
          /* '<Root>/ADCU_InternalInputPort_get_BCM_info_get_RightTurnLampSt' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_GPSWeek;
                  /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_GPSWeek' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_GPSTime;
                  /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_GPSTime' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_Heading;
                  /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Heading' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_Pitch;
                    /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Pitch' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_Roll;
                     /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Roll' */
  IMU_Status ADCU_InternalInputPort_get_IMU_info_get_IMUWorkStatus;
            /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_IMUWorkStatus' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedX;
              /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedX' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedY;
              /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedY' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedZ;
              /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AngleSpeedZ' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_AccelerationX;
            /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AccelerationX' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_AccelerationY;
            /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AccelerationY' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_AccelerationZ;
            /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_AccelerationZ' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_Latitude;
                 /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Latitude' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_Longitude;
                /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Longitude' */
  real_T ADCU_InternalInputPort_get_IMU_info_get_Altitude;
                 /* '<Root>/ADCU_InternalInputPort_get_IMU_info_get_Altitude' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq;
    /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq' */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_signal_transfer_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_AION_signal_transfer_T AION_signal_transfer_B;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  /* External inputs (root inport signals with default storage) */
  extern struct ExtU_AION_signal_transfer_T AION_signal_transfer_U;

  /* External outputs (root outports fed by signals with default storage) */
  extern struct ExtY_AION_signal_transfer_T AION_signal_transfer_Y;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void AION_signal_transfer_initialize(void);
  extern void AION_signal_transfer_step(void);
  extern void AION_signal_transfer_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_AION_signal_transfer_T *const AION_signal_transfer_M;

#ifdef __cplusplus

}
#endif

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
