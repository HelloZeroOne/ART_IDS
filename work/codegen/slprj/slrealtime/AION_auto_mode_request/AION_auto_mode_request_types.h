/*
 * AION_auto_mode_request_types.h
 *
 * Code generation for model "AION_auto_mode_request".
 *
 * Model version              : 1.101
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Fri Jun 10 15:54:19 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AION_auto_mode_request_types_h_
#define RTW_HEADER_AION_auto_mode_request_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_Control_request_
#define DEFINED_TYPEDEF_FOR_Control_request_

typedef enum {
  Manual = 0,                          /* Default value */
  Auto,
  Reserved,
  Reserved1
} Control_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AION_Lateral_Control_Info_
#define DEFINED_TYPEDEF_FOR_AION_Lateral_Control_Info_

struct AION_Lateral_Control_Info
{
  Control_request set_LatCtrlReq;
  real_T set_SteerAngReq;
  real_T set_SteerWhlTorqReq;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Gear_request_
#define DEFINED_TYPEDEF_FOR_Gear_request_

typedef enum {
  NoRequest = 0,                       /* Default value */
  P,
  R,
  N,
  D,
  Reserved_gear,
  Reserved1_gear,
  Reserved2_gear
} Gear_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Validation_status_
#define DEFINED_TYPEDEF_FOR_Validation_status_

typedef enum {
  Invalid = 0,                         /* Default value */
  Valid
} Validation_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AION_Longitudinal_Control_Info_
#define DEFINED_TYPEDEF_FOR_AION_Longitudinal_Control_Info_

struct AION_Longitudinal_Control_Info
{
  Control_request set_LngCtrlReq;
  real_T set_AutoTrqWhlReq;
  real_T set_BrakeReq;
  Gear_request set_GearLvlReq;
  Validation_status set_GearLvlReqVD;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Beam_request_
#define DEFINED_TYPEDEF_FOR_Beam_request_

typedef enum {
  NoBeamRequest = 0,                   /* Default value */
  LowBeam,
  HighBeam,
  BeamReserved
} Beam_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Enable_request_
#define DEFINED_TYPEDEF_FOR_Enable_request_

typedef enum {
  Disable = 0,                         /* Default value */
  Enable
} Enable_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Active_request_
#define DEFINED_TYPEDEF_FOR_Active_request_

typedef enum {
  NotActiveRequest = 0,                /* Default value */
  ActiveRequest
} Active_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Light_request_
#define DEFINED_TYPEDEF_FOR_Light_request_

typedef enum {
  NoLightRequest = 0,                  /* Default value */
  TurnLeftLight,
  TurnRightLight,
  EmergencyLight
} Light_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ADCU_Info_
#define DEFINED_TYPEDEF_FOR_ADCU_Info_

struct ADCU_Info
{
  uint32_T set_Checksum1;
  uint32_T set_MsgCounter1;
  uint32_T set_Checksum2;
  uint32_T set_MsgCounter2;
  uint32_T set_Checksum3;
  uint32_T set_MsgCounter3;
  Beam_request set_BeamReq;
  Enable_request set_BodyCtrlReq;
  Active_request set_HornRingReq;
  Light_request set_TurnLightReq;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_BCS_Info_
#define DEFINED_TYPEDEF_FOR_BCS_Info_

struct BCS_Info
{
  uint8_T get_ABSActiveSt;
  real_T get_VehSpd;
  uint8_T get_VehSpdVD;
  real_T get_YawRate;
  real_T get_ActVehLaltrlAccel;
  real_T get_ActVehLongAccel;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Drive_status_
#define DEFINED_TYPEDEF_FOR_Drive_status_

typedef enum {
  InvalidDriveStatus = 0,              /* Default value */
  EcoPlusModeStatus,
  EcoModeStatus,
  NormalModeStatus,
  DrivingModeStatus,
  SportModeStatus
} Drive_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Ready_status_
#define DEFINED_TYPEDEF_FOR_Ready_status_

typedef enum {
  NotReady = 0,                        /* Default value */
  Ready
} Ready_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Gear_status_
#define DEFINED_TYPEDEF_FOR_Gear_status_

typedef enum {
  InvalidGearStatus = 0,               /* Default value */
  DriveGearStatus,
  NeutralGearStatus,
  ReverseGearStatus,
  ParkGearStatus
} Gear_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VCU_Info_
#define DEFINED_TYPEDEF_FOR_VCU_Info_

struct VCU_Info
{
  uint32_T get_ActVehWheelTorq;
  uint8_T get_GearLeverIntv;
  Drive_status get_VehDrvMod;
  Ready_status get_VehRdySt;
  uint32_T get_VehRng;
  Gear_status get_CrntGearLvl;
  uint8_T get_CrntGearLvlVD;
  real_T get_GasPedalActPst;
  uint8_T get_AccElecECFail;
  uint32_T get_VehWheelTorqMax;
  uint8_T get_BrkPedalSt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Control_status_
#define DEFINED_TYPEDEF_FOR_Control_status_

typedef enum {
  ManualStatus = 0,                    /* Default value */
  QuitStatus,
  AutoStatus,
  FaultStatus
} Control_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU_Info_
#define DEFINED_TYPEDEF_FOR_SCU_Info_

struct SCU_Info
{
  uint32_T get_LatAutoCheckReport;
  Control_status get_LatCtrlMode;
  uint32_T get_LatQuitReport;
  uint32_T get_LngAutoCheckIReport;
  Control_status get_LngCtrlMode;
  uint32_T get_LngQuitReport;
  uint8_T get_StrngWhlIntv;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_EPB_Info_
#define DEFINED_TYPEDEF_FOR_EPB_Info_

struct EPB_Info
{
  uint8_T get_SysSt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SRS_Info_
#define DEFINED_TYPEDEF_FOR_SRS_Info_

struct SRS_Info
{
  uint8_T get_DriverSeatBeltSt;
  uint8_T get_PsngrSeatBeltSt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_EPS_Info_
#define DEFINED_TYPEDEF_FOR_EPS_Info_

struct EPS_Info
{
  real_T get_SteeringAngle;
  uint32_T get_SteeringAngleSpd;
  uint8_T get_SteeringAngleSpdVD;
  uint8_T get_SteeringAngleVD;
  real_T get_StrngWhlTorq;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Available_status_
#define DEFINED_TYPEDEF_FOR_Available_status_

typedef enum {
  NotAvailable = 0,                    /* Default value */
  Available
} Available_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Active_status_
#define DEFINED_TYPEDEF_FOR_Active_status_

typedef enum {
  NotActiveStatus = 0,                 /* Default value */
  ActiveStatus
} Active_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BCM_Info_
#define DEFINED_TYPEDEF_FOR_BCM_Info_

struct BCM_Info
{
  Available_status get_CtrlAvailable;
  Active_status get_HazardLampSt;
  Active_status get_HighBeamSt;
  Active_status get_HornSt;
  uint8_T get_KeySt;
  Active_status get_LeftTurnLampSt;
  Active_status get_LowBeamSt;
  Active_status get_RightTurnLampSt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_IMU_Status_
#define DEFINED_TYPEDEF_FOR_IMU_Status_

typedef enum {
  Initialization = 0,                  /* Default value */
  Single_Point_Location = 3,
  Single_Point_Orientation = 4,
  RTK_INT_Location = 69,
  RTK_INT_Orientation = 75,
  RTK_FLOAT_Location = 85,
  RTK_FLOAT_Orientation = 91
} IMU_Status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IMU_Info_
#define DEFINED_TYPEDEF_FOR_IMU_Info_

struct IMU_Info
{
  real_T get_GPSWeek;
  real_T get_GPSTime;
  real_T get_Heading;
  real_T get_Pitch;
  real_T get_Roll;
  IMU_Status get_IMUWorkStatus;
  real_T get_AngleSpeedX;
  real_T get_AngleSpeedY;
  real_T get_AngleSpeedZ;
  real_T get_AccelerationX;
  real_T get_AccelerationY;
  real_T get_AccelerationZ;
  real_T get_Latitude;
  real_T get_Longitude;
  real_T get_Altitude;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_AION_ApplicationBus_
#define DEFINED_TYPEDEF_FOR_AION_ApplicationBus_

struct AION_ApplicationBus
{
  AION_Lateral_Control_Info set_lateral_control_info;
  AION_Longitudinal_Control_Info set_longitudinal_control_info;
  ADCU_Info set_ADCU_info;
  BCS_Info get_BCS_info;
  VCU_Info get_VCU_info;
  SCU_Info get_SCU_info;
  EPB_Info get_EPB_info;
  SRS_Info get_SRS_info;
  EPS_Info get_EPS_info;
  BCM_Info get_BCM_info;
  IMU_Info get_IMU_info;
};

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_AION_auto_mode_request_T
  RT_MODEL_AION_auto_mode_request_T;

#endif                          /* RTW_HEADER_AION_auto_mode_request_types_h_ */
