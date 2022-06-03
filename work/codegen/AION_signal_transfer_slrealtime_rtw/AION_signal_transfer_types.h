/*
 * AION_signal_transfer_types.h
 *
 * Code generation for model "AION_signal_transfer".
 *
 * Model version              : 4.82
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Fri Jun  3 16:42:51 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AION_signal_transfer_types_h_
#define RTW_HEADER_AION_signal_transfer_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_1_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_1_

struct SCU2ADCU_SCU_1
{
  real_T BCS_ABSActiveSt;
  real_T BCS_VehSpd;
  real_T BCS_VehSpdVD;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_10_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_10_

struct SCU2ADCU_SCU_10
{
  real_T EPS_SteeringAngle;
  real_T EPS_SteeringAngleSpd;
  real_T EPS_SteeringAngleSpdVD;
  real_T EPS_SteeringAngleVD;
  real_T EPS_StrngWhlTorq;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_11_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_11_

struct SCU2ADCU_SCU_11
{
  real_T BCM_CtrlAvailable;
  real_T BCM_HazardLampSt;
  real_T BCM_HighBeamSt;
  real_T BCM_HornSt;
  real_T BCM_KeySt;
  real_T BCM_LeftTurnLampSt;
  real_T BCM_LowBeamSt;
  real_T BCM_RightTurnLampSt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_12_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_12_

struct SCU2ADCU_SCU_12
{
  real_T SRS_DriverSeatBeltSt;
  real_T SRS_PsngrSeatBeltSt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_13_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_13_

struct SCU2ADCU_SCU_13
{
  real_T SCU_LatAutoCheckReport;
  real_T SCU_LatCtrlMode;
  real_T SCU_LatQuitReport;
  real_T SCU_LngAutoChecklReport;
  real_T SCU_LngCtrlMode;
  real_T SCU_LngQuitReport;
  real_T SCU_StrngWhlIntv;
  real_T VCU_GearLeverIntv;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_14_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_14_

struct SCU2ADCU_SCU_14
{
  real_T VCU_VehDrvMod;
  real_T VCU_VehRdySt;
  real_T VCU_VehRng;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_15_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_15_

struct SCU2ADCU_SCU_15
{
  real_T VCU_CrntGearLvl;
  real_T VCU_CrntGearLvlVD;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_16_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_16_

struct SCU2ADCU_SCU_16
{
  real_T VCU_ActVehWheelTorq;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_17_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_17_

struct SCU2ADCU_SCU_17
{
  real_T VCU_AccElecECFail;
  real_T VCU_GasPedalActPst;
  real_T VCU_VehWheelTorqMax;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_18_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_18_

struct SCU2ADCU_SCU_18
{
  real_T VCU_BrkPedalSt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_3_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_3_

struct SCU2ADCU_SCU_3
{
  real_T BCS_YawRate;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_8_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_8_

struct SCU2ADCU_SCU_8
{
  real_T BCS_ActVehLaltrlAccel;
  real_T BCS_ActVehLongAccel;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_9_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_SCU_9_

struct SCU2ADCU_SCU_9
{
  real_T EPB_SysSt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU2ADCU_
#define DEFINED_TYPEDEF_FOR_SCU2ADCU_

struct SCU2ADCU
{
  SCU2ADCU_SCU_1 SCU_1;
  SCU2ADCU_SCU_10 SCU_10;
  SCU2ADCU_SCU_11 SCU_11;
  SCU2ADCU_SCU_12 SCU_12;
  SCU2ADCU_SCU_13 SCU_13;
  SCU2ADCU_SCU_14 SCU_14;
  SCU2ADCU_SCU_15 SCU_15;
  SCU2ADCU_SCU_16 SCU_16;
  SCU2ADCU_SCU_17 SCU_17;
  SCU2ADCU_SCU_18 SCU_18;
  SCU2ADCU_SCU_3 SCU_3;
  SCU2ADCU_SCU_8 SCU_8;
  SCU2ADCU_SCU_9 SCU_9;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_InputCAN_
#define DEFINED_TYPEDEF_FOR_InputCAN_

struct InputCAN
{
  SCU2ADCU SCU2ADCU_bus;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ADCU_InputBus_
#define DEFINED_TYPEDEF_FOR_ADCU_InputBus_

struct ADCU_InputBus
{
  InputCAN InputCAN_bus;
};

#endif

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
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ADCU2SCU_ADCU_1_
#define DEFINED_TYPEDEF_FOR_ADCU2SCU_ADCU_1_

struct ADCU2SCU_ADCU_1
{
  real_T ADCU_AutoTrqWhlReq;
  real_T ADCU_BrakeReq;
  real_T ADCU_GearLvlReq;
  real_T ADCU_GearLvlReqVD;
  real_T ADCU_LngCtrlReq;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ADCU2SCU_ADCU_2_
#define DEFINED_TYPEDEF_FOR_ADCU2SCU_ADCU_2_

struct ADCU2SCU_ADCU_2
{
  real_T ADCU_LatCtrlReq;
  real_T ADCU_SteerAngReq;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ADCU2SCU_ADCU_3_
#define DEFINED_TYPEDEF_FOR_ADCU2SCU_ADCU_3_

struct ADCU2SCU_ADCU_3
{
  real_T ADCU_BeamReq;
  real_T ADCU_BodyCtrlReq;
  real_T ADCU_HornRingReq;
  real_T ADCU_TurnLightReq;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ADCU2SCU_
#define DEFINED_TYPEDEF_FOR_ADCU2SCU_

struct ADCU2SCU
{
  ADCU2SCU_ADCU_1 ADCU_1;
  ADCU2SCU_ADCU_2 ADCU_2;
  ADCU2SCU_ADCU_3 ADCU_3;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_OutputCAN_
#define DEFINED_TYPEDEF_FOR_OutputCAN_

struct OutputCAN
{
  ADCU2SCU ADCU2SCU_bus;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ADCU_OutputBus_
#define DEFINED_TYPEDEF_FOR_ADCU_OutputBus_

struct ADCU_OutputBus
{
  OutputCAN OutputCAN_bus;
};

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_AION_signal_transfer_T RT_MODEL_AION_signal_transfer_T;

#endif                            /* RTW_HEADER_AION_signal_transfer_types_h_ */
