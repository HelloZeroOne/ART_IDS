/*
 * AION_auto_mode_request.h
 *
 * Code generation for model "AION_auto_mode_request".
 *
 * Model version              : 1.111
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Tue Jun 21 16:13:20 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AION_auto_mode_request_h_
#define RTW_HEADER_AION_auto_mode_request_h_
#include <cmath>
#include <cstring>
#include <logsrv.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "AION_auto_mode_request_types.h"

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
struct B_AION_auto_mode_request_T {
  real_T QlightChannel;                /* '<Root>/Data Type Conversion4' */
  real_T SPK_Chk;                      /* '<Root>/SPK_Chk' */
  real_T set_Stx;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T set_SteerAngReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T set_FunctionCode;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T set_VolumeCode;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T set_Parameter;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T set_Etx;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_VehSpd;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_YawRate;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T set_SteerWhlTorqReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_ActVehLaltrlAccel;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_ActVehLongAccel;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_GasPedalActPst;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T set_AutoTrqWhlReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_SteeringAngle;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_StrngWhlTorq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T set_BrakeReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_GPSWeek;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_GPSTime;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_Heading;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_Pitch;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_Roll;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_AngleSpeedX;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_AngleSpeedY;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_AngleSpeedZ;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_AccelerationX;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_AccelerationY;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_AccelerationZ;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_Latitude;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_Longitude;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_Altitude;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T LngCtrlReq;                   /* '<Root>/Chart2' */
  real_T LatCtrlReq;                   /* '<Root>/Chart' */
  uint32_T BitwiseAND;                 /* '<Root>/Bitwise AND' */
  uint32_T set_MsgCounter1;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T set_Checksum2;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T set_MsgCounter2;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T set_Checksum3;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T set_MsgCounter3;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_ActVehWheelTorq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_VehRng;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_VehWheelTorqMax;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_ACCButtInfo;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_LatAutoCheckReport;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_LatQuitReport;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_LngAutoCheckIReport;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_LngQuitReport;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_SteeringAngleSpd;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T set_Checksum1;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Validation_status set_GearLvlReqVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Ready_status get_VehRdySt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Light_request set_TurnLightReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  IMU_Status get_IMUWorkStatus;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Gear_status get_CrntGearLvl;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Gear_request set_GearLvlReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Enable_request set_BodyCtrlReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Drive_status get_VehDrvMod;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Control_status get_LatCtrlMode;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Control_status get_LngCtrlMode;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Control_request DataTypeConversion1; /* '<Root>/Data Type Conversion1' */
  Control_request DataTypeConversion9; /* '<Root>/Data Type Conversion9' */
  Beam_request set_BeamReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Available_status get_CtrlAvailable;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Active_status get_HazardLampSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Active_status get_HighBeamSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Active_status get_HornSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Active_status get_LeftTurnLampSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Active_status get_LowBeamSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Active_status get_RightTurnLampSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Active_request set_HornRingReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_ABSActiveSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_VehSpdVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_GearLeverIntv;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_CrntGearLvlVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_AccElecECFail;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_BrkPedalSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_StrngWhlIntv;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_SysSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_DriverSeatBeltSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_PsngrSeatBeltSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_SteeringAngleSpdVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_SteeringAngleVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_KeySt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T DataTypeConversion2;         /* '<Root>/Data Type Conversion2' */
  uint8_T DataTypeConversion10;        /* '<Root>/Data Type Conversion10' */
  uint8_T QlightChannel_f;             /* '<Root>/Chart' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_AION_auto_mode_request_T {
  real_T flag;                         /* '<Root>/Chart' */
  real_T HoldFlag;                     /* '<Root>/Chart' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_DataTypeConversion4_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SPK_Chk_at_outport_0_PWORK;/* synthesized block */

  int32_T sfEvent;                     /* '<Root>/Chart2' */
  int32_T sfEvent_b;                   /* '<Root>/Chart' */
  uint32_T is_c2_AION_auto_mode_request;/* '<Root>/Chart2' */
  uint32_T is_c3_AION_auto_mode_request;/* '<Root>/Chart' */
  uint8_T is_active_c2_AION_auto_mode_request;/* '<Root>/Chart2' */
  uint8_T is_active_c3_AION_auto_mode_request;/* '<Root>/Chart' */
};

/* External inputs (root inport signals with default storage) */
struct ExtU_AION_auto_mode_request_T {
  Control_request InBus_set_lateral_control_info_set_LatCtrlReq;/* '<Root>/B_-1_-1' */
  real_T InBus_set_lateral_control_info_set_SteerAngReq;/* '<Root>/B_-1_-1' */
  real_T InBus_set_lateral_control_info_set_SteerWhlTorqReq;/* '<Root>/B_-1_-1' */
  Control_request InBus_set_longitudinal_control_info_set_LngCtrlReq;/* '<Root>/B_-1_-1' */
  real_T InBus_set_longitudinal_control_info_set_AutoTrqWhlReq;/* '<Root>/B_-1_-1' */
  real_T InBus_set_longitudinal_control_info_set_BrakeReq;/* '<Root>/B_-1_-1' */
  Gear_request InBus_set_longitudinal_control_info_set_GearLvlReq;/* '<Root>/B_-1_-1' */
  Validation_status InBus_set_longitudinal_control_info_set_GearLvlReqVD;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_Checksum1;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_MsgCounter1;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_Checksum2;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_MsgCounter2;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_Checksum3;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_MsgCounter3;/* '<Root>/B_-1_-1' */
  Beam_request InBus_set_ADCU_info_set_BeamReq;/* '<Root>/B_-1_-1' */
  Enable_request InBus_set_ADCU_info_set_BodyCtrlReq;/* '<Root>/B_-1_-1' */
  Active_request InBus_set_ADCU_info_set_HornRingReq;/* '<Root>/B_-1_-1' */
  Light_request InBus_set_ADCU_info_set_TurnLightReq;/* '<Root>/B_-1_-1' */
  real_T InBus_set_SPK_info_set_Stx;   /* '<Root>/B_-1_-1' */
  real_T InBus_set_SPK_info_set_FunctionCode;/* '<Root>/B_-1_-1' */
  real_T InBus_set_SPK_info_set_SoundSourceCode;/* '<Root>/B_-1_-1' */
  real_T InBus_set_SPK_info_set_VolumeCode;/* '<Root>/B_-1_-1' */
  real_T InBus_set_SPK_info_set_Parameter;/* '<Root>/B_-1_-1' */
  real_T InBus_set_SPK_info_set_Chk;   /* '<Root>/B_-1_-1' */
  real_T InBus_set_SPK_info_set_Etx;   /* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_ABSActiveSt;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_VehSpd;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_VehSpdVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_YawRate;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_ActVehLaltrlAccel;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_ActVehLongAccel;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_VCU_info_get_ActVehWheelTorq;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_GearLeverIntv;/* '<Root>/B_-1_-1' */
  Drive_status InBus_get_VCU_info_get_VehDrvMod;/* '<Root>/B_-1_-1' */
  Ready_status InBus_get_VCU_info_get_VehRdySt;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_VCU_info_get_VehRng;/* '<Root>/B_-1_-1' */
  Gear_status InBus_get_VCU_info_get_CrntGearLvl;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_CrntGearLvlVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_VCU_info_get_GasPedalActPst;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_AccElecECFail;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_VCU_info_get_VehWheelTorqMax;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_BrkPedalSt;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_VCU_info_get_ACCButtInfo;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_LatAutoCheckReport;/* '<Root>/B_-1_-1' */
  Control_status InBus_get_SCU_info_get_LatCtrlMode;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_LatQuitReport;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_LngAutoCheckIReport;/* '<Root>/B_-1_-1' */
  Control_status InBus_get_SCU_info_get_LngCtrlMode;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_LngQuitReport;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_SCU_info_get_StrngWhlIntv;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_EPB_info_get_SysSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_SRS_info_get_DriverSeatBeltSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_SRS_info_get_PsngrSeatBeltSt;/* '<Root>/B_-1_-1' */
  real_T InBus_get_EPS_info_get_SteeringAngle;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_EPS_info_get_SteeringAngleSpd;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_EPS_info_get_SteeringAngleSpdVD;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_EPS_info_get_SteeringAngleVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_EPS_info_get_StrngWhlTorq;/* '<Root>/B_-1_-1' */
  Available_status InBus_get_BCM_info_get_CtrlAvailable;/* '<Root>/B_-1_-1' */
  Active_status InBus_get_BCM_info_get_HazardLampSt;/* '<Root>/B_-1_-1' */
  Active_status InBus_get_BCM_info_get_HighBeamSt;/* '<Root>/B_-1_-1' */
  Active_status InBus_get_BCM_info_get_HornSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_KeySt;/* '<Root>/B_-1_-1' */
  Active_status InBus_get_BCM_info_get_LeftTurnLampSt;/* '<Root>/B_-1_-1' */
  Active_status InBus_get_BCM_info_get_LowBeamSt;/* '<Root>/B_-1_-1' */
  Active_status InBus_get_BCM_info_get_RightTurnLampSt;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_GPSWeek;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_GPSTime;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_Heading;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_Pitch; /* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_Roll;  /* '<Root>/B_-1_-1' */
  IMU_Status InBus_get_IMU_info_get_IMUWorkStatus;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_AngleSpeedX;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_AngleSpeedY;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_AngleSpeedZ;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_AccelerationX;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_AccelerationY;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_AccelerationZ;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_Latitude;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_Longitude;/* '<Root>/B_-1_-1' */
  real_T InBus_get_IMU_info_get_Altitude;/* '<Root>/B_-1_-1' */
};

/* External outputs (root outports fed by signals with default storage) */
struct ExtY_AION_auto_mode_request_T {
  Control_request OutBus_set_lateral_control_info_set_LatCtrlReq;
                   /* '<Root>/OutBus_set_lateral_control_info_set_LatCtrlReq' */
  real_T OutBus_set_lateral_control_info_set_SteerAngReq;
                  /* '<Root>/OutBus_set_lateral_control_info_set_SteerAngReq' */
  real_T OutBus_set_lateral_control_info_set_SteerWhlTorqReq;
              /* '<Root>/OutBus_set_lateral_control_info_set_SteerWhlTorqReq' */
  Control_request OutBus_set_longitudinal_control_info_set_LngCtrlReq;
              /* '<Root>/OutBus_set_longitudinal_control_info_set_LngCtrlReq' */
  real_T OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq;
           /* '<Root>/OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq' */
  real_T OutBus_set_longitudinal_control_info_set_BrakeReq;
                /* '<Root>/OutBus_set_longitudinal_control_info_set_BrakeReq' */
  Gear_request OutBus_set_longitudinal_control_info_set_GearLvlReq;
              /* '<Root>/OutBus_set_longitudinal_control_info_set_GearLvlReq' */
  Validation_status OutBus_set_longitudinal_control_info_set_GearLvlReqVD;
            /* '<Root>/OutBus_set_longitudinal_control_info_set_GearLvlReqVD' */
  uint32_T OutBus_set_ADCU_info_set_Checksum1;
                               /* '<Root>/OutBus_set_ADCU_info_set_Checksum1' */
  uint32_T OutBus_set_ADCU_info_set_MsgCounter1;
                             /* '<Root>/OutBus_set_ADCU_info_set_MsgCounter1' */
  uint32_T OutBus_set_ADCU_info_set_Checksum2;
                               /* '<Root>/OutBus_set_ADCU_info_set_Checksum2' */
  uint32_T OutBus_set_ADCU_info_set_MsgCounter2;
                             /* '<Root>/OutBus_set_ADCU_info_set_MsgCounter2' */
  uint32_T OutBus_set_ADCU_info_set_Checksum3;
                               /* '<Root>/OutBus_set_ADCU_info_set_Checksum3' */
  uint32_T OutBus_set_ADCU_info_set_MsgCounter3;
                             /* '<Root>/OutBus_set_ADCU_info_set_MsgCounter3' */
  Beam_request OutBus_set_ADCU_info_set_BeamReq;
                                 /* '<Root>/OutBus_set_ADCU_info_set_BeamReq' */
  Enable_request OutBus_set_ADCU_info_set_BodyCtrlReq;
                             /* '<Root>/OutBus_set_ADCU_info_set_BodyCtrlReq' */
  Active_request OutBus_set_ADCU_info_set_HornRingReq;
                             /* '<Root>/OutBus_set_ADCU_info_set_HornRingReq' */
  Light_request OutBus_set_ADCU_info_set_TurnLightReq;
                            /* '<Root>/OutBus_set_ADCU_info_set_TurnLightReq' */
  real_T OutBus_set_SPK_info_set_Stx; /* '<Root>/OutBus_set_SPK_info_set_Stx' */
  real_T OutBus_set_SPK_info_set_FunctionCode;
                             /* '<Root>/OutBus_set_SPK_info_set_FunctionCode' */
  real_T OutBus_set_SPK_info_set_SoundSourceCode;
                          /* '<Root>/OutBus_set_SPK_info_set_SoundSourceCode' */
  real_T OutBus_set_SPK_info_set_VolumeCode;
                               /* '<Root>/OutBus_set_SPK_info_set_VolumeCode' */
  real_T OutBus_set_SPK_info_set_Parameter;
                                /* '<Root>/OutBus_set_SPK_info_set_Parameter' */
  real_T OutBus_set_SPK_info_set_Chk; /* '<Root>/OutBus_set_SPK_info_set_Chk' */
  real_T OutBus_set_SPK_info_set_Etx; /* '<Root>/OutBus_set_SPK_info_set_Etx' */
  uint8_T OutBus_get_BCS_info_get_ABSActiveSt;
                              /* '<Root>/OutBus_get_BCS_info_get_ABSActiveSt' */
  real_T OutBus_get_BCS_info_get_VehSpd;
                                   /* '<Root>/OutBus_get_BCS_info_get_VehSpd' */
  uint8_T OutBus_get_BCS_info_get_VehSpdVD;
                                 /* '<Root>/OutBus_get_BCS_info_get_VehSpdVD' */
  real_T OutBus_get_BCS_info_get_YawRate;
                                  /* '<Root>/OutBus_get_BCS_info_get_YawRate' */
  real_T OutBus_get_BCS_info_get_ActVehLaltrlAccel;
                        /* '<Root>/OutBus_get_BCS_info_get_ActVehLaltrlAccel' */
  real_T OutBus_get_BCS_info_get_ActVehLongAccel;
                          /* '<Root>/OutBus_get_BCS_info_get_ActVehLongAccel' */
  uint32_T OutBus_get_VCU_info_get_ActVehWheelTorq;
                          /* '<Root>/OutBus_get_VCU_info_get_ActVehWheelTorq' */
  uint8_T OutBus_get_VCU_info_get_GearLeverIntv;
                            /* '<Root>/OutBus_get_VCU_info_get_GearLeverIntv' */
  Drive_status OutBus_get_VCU_info_get_VehDrvMod;
                                /* '<Root>/OutBus_get_VCU_info_get_VehDrvMod' */
  Ready_status OutBus_get_VCU_info_get_VehRdySt;
                                 /* '<Root>/OutBus_get_VCU_info_get_VehRdySt' */
  uint32_T OutBus_get_VCU_info_get_VehRng;
                                   /* '<Root>/OutBus_get_VCU_info_get_VehRng' */
  Gear_status OutBus_get_VCU_info_get_CrntGearLvl;
                              /* '<Root>/OutBus_get_VCU_info_get_CrntGearLvl' */
  uint8_T OutBus_get_VCU_info_get_CrntGearLvlVD;
                            /* '<Root>/OutBus_get_VCU_info_get_CrntGearLvlVD' */
  real_T OutBus_get_VCU_info_get_GasPedalActPst;
                           /* '<Root>/OutBus_get_VCU_info_get_GasPedalActPst' */
  uint8_T OutBus_get_VCU_info_get_AccElecECFail;
                            /* '<Root>/OutBus_get_VCU_info_get_AccElecECFail' */
  uint32_T OutBus_get_VCU_info_get_VehWheelTorqMax;
                          /* '<Root>/OutBus_get_VCU_info_get_VehWheelTorqMax' */
  uint8_T OutBus_get_VCU_info_get_BrkPedalSt;
                               /* '<Root>/OutBus_get_VCU_info_get_BrkPedalSt' */
  uint32_T OutBus_get_VCU_info_get_ACCButtInfo;
                              /* '<Root>/OutBus_get_VCU_info_get_ACCButtInfo' */
  uint32_T OutBus_get_SCU_info_get_LatAutoCheckReport;
                       /* '<Root>/OutBus_get_SCU_info_get_LatAutoCheckReport' */
  Control_status OutBus_get_SCU_info_get_LatCtrlMode;
                              /* '<Root>/OutBus_get_SCU_info_get_LatCtrlMode' */
  uint32_T OutBus_get_SCU_info_get_LatQuitReport;
                            /* '<Root>/OutBus_get_SCU_info_get_LatQuitReport' */
  uint32_T OutBus_get_SCU_info_get_LngAutoCheckIReport;
                      /* '<Root>/OutBus_get_SCU_info_get_LngAutoCheckIReport' */
  Control_status OutBus_get_SCU_info_get_LngCtrlMode;
                              /* '<Root>/OutBus_get_SCU_info_get_LngCtrlMode' */
  uint32_T OutBus_get_SCU_info_get_LngQuitReport;
                            /* '<Root>/OutBus_get_SCU_info_get_LngQuitReport' */
  uint8_T OutBus_get_SCU_info_get_StrngWhlIntv;
                             /* '<Root>/OutBus_get_SCU_info_get_StrngWhlIntv' */
  uint8_T OutBus_get_EPB_info_get_SysSt;
                                    /* '<Root>/OutBus_get_EPB_info_get_SysSt' */
  uint8_T OutBus_get_SRS_info_get_DriverSeatBeltSt;
                         /* '<Root>/OutBus_get_SRS_info_get_DriverSeatBeltSt' */
  uint8_T OutBus_get_SRS_info_get_PsngrSeatBeltSt;
                          /* '<Root>/OutBus_get_SRS_info_get_PsngrSeatBeltSt' */
  real_T OutBus_get_EPS_info_get_SteeringAngle;
                            /* '<Root>/OutBus_get_EPS_info_get_SteeringAngle' */
  uint32_T OutBus_get_EPS_info_get_SteeringAngleSpd;
                         /* '<Root>/OutBus_get_EPS_info_get_SteeringAngleSpd' */
  uint8_T OutBus_get_EPS_info_get_SteeringAngleSpdVD;
                       /* '<Root>/OutBus_get_EPS_info_get_SteeringAngleSpdVD' */
  uint8_T OutBus_get_EPS_info_get_SteeringAngleVD;
                          /* '<Root>/OutBus_get_EPS_info_get_SteeringAngleVD' */
  real_T OutBus_get_EPS_info_get_StrngWhlTorq;
                             /* '<Root>/OutBus_get_EPS_info_get_StrngWhlTorq' */
  Available_status OutBus_get_BCM_info_get_CtrlAvailable;
                            /* '<Root>/OutBus_get_BCM_info_get_CtrlAvailable' */
  Active_status OutBus_get_BCM_info_get_HazardLampSt;
                             /* '<Root>/OutBus_get_BCM_info_get_HazardLampSt' */
  Active_status OutBus_get_BCM_info_get_HighBeamSt;
                               /* '<Root>/OutBus_get_BCM_info_get_HighBeamSt' */
  Active_status OutBus_get_BCM_info_get_HornSt;
                                   /* '<Root>/OutBus_get_BCM_info_get_HornSt' */
  uint8_T OutBus_get_BCM_info_get_KeySt;
                                    /* '<Root>/OutBus_get_BCM_info_get_KeySt' */
  Active_status OutBus_get_BCM_info_get_LeftTurnLampSt;
                           /* '<Root>/OutBus_get_BCM_info_get_LeftTurnLampSt' */
  Active_status OutBus_get_BCM_info_get_LowBeamSt;
                                /* '<Root>/OutBus_get_BCM_info_get_LowBeamSt' */
  Active_status OutBus_get_BCM_info_get_RightTurnLampSt;
                          /* '<Root>/OutBus_get_BCM_info_get_RightTurnLampSt' */
  real_T OutBus_get_IMU_info_get_GPSWeek;
                                  /* '<Root>/OutBus_get_IMU_info_get_GPSWeek' */
  real_T OutBus_get_IMU_info_get_GPSTime;
                                  /* '<Root>/OutBus_get_IMU_info_get_GPSTime' */
  real_T OutBus_get_IMU_info_get_Heading;
                                  /* '<Root>/OutBus_get_IMU_info_get_Heading' */
  real_T OutBus_get_IMU_info_get_Pitch;
                                    /* '<Root>/OutBus_get_IMU_info_get_Pitch' */
  real_T OutBus_get_IMU_info_get_Roll;
                                     /* '<Root>/OutBus_get_IMU_info_get_Roll' */
  IMU_Status OutBus_get_IMU_info_get_IMUWorkStatus;
                            /* '<Root>/OutBus_get_IMU_info_get_IMUWorkStatus' */
  real_T OutBus_get_IMU_info_get_AngleSpeedX;
                              /* '<Root>/OutBus_get_IMU_info_get_AngleSpeedX' */
  real_T OutBus_get_IMU_info_get_AngleSpeedY;
                              /* '<Root>/OutBus_get_IMU_info_get_AngleSpeedY' */
  real_T OutBus_get_IMU_info_get_AngleSpeedZ;
                              /* '<Root>/OutBus_get_IMU_info_get_AngleSpeedZ' */
  real_T OutBus_get_IMU_info_get_AccelerationX;
                            /* '<Root>/OutBus_get_IMU_info_get_AccelerationX' */
  real_T OutBus_get_IMU_info_get_AccelerationY;
                            /* '<Root>/OutBus_get_IMU_info_get_AccelerationY' */
  real_T OutBus_get_IMU_info_get_AccelerationZ;
                            /* '<Root>/OutBus_get_IMU_info_get_AccelerationZ' */
  real_T OutBus_get_IMU_info_get_Latitude;
                                 /* '<Root>/OutBus_get_IMU_info_get_Latitude' */
  real_T OutBus_get_IMU_info_get_Longitude;
                                /* '<Root>/OutBus_get_IMU_info_get_Longitude' */
  real_T OutBus_get_IMU_info_get_Altitude;
                                 /* '<Root>/OutBus_get_IMU_info_get_Altitude' */
};

/* Parameters (default storage) */
struct P_AION_auto_mode_request_T_ {
  uint32_T BitwiseAND_BitMask;         /* Mask Parameter: BitwiseAND_BitMask
                                        * Referenced by: '<Root>/Bitwise AND'
                                        */
  real_T SPK_Chk_tableData[5];         /* Expression: [76 77 78 79 72]
                                        * Referenced by: '<Root>/SPK_Chk'
                                        */
  real_T SPK_Chk_bp01Data[5];          /* Expression: [0:4]
                                        * Referenced by: '<Root>/SPK_Chk'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_auto_mode_request_T {
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

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_AION_auto_mode_request_T AION_auto_mode_request_P;

#ifdef __cplusplus

}
#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_AION_auto_mode_request_T AION_auto_mode_request_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_AION_auto_mode_request_T AION_auto_mode_request_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* External inputs (root inport signals with default storage) */
  extern struct ExtU_AION_auto_mode_request_T AION_auto_mode_request_U;

  /* External outputs (root outports fed by signals with default storage) */
  extern struct ExtY_AION_auto_mode_request_T AION_auto_mode_request_Y;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void AION_auto_mode_request_initialize(void);
  extern void AION_auto_mode_request_step(void);
  extern void AION_auto_mode_request_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_AION_auto_mode_request_T *const AION_auto_mode_request_M;

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
 * '<Root>' : 'AION_auto_mode_request'
 * '<S1>'   : 'AION_auto_mode_request/Chart'
 * '<S2>'   : 'AION_auto_mode_request/Chart2'
 */
#endif                                /* RTW_HEADER_AION_auto_mode_request_h_ */
