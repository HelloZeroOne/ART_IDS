/*
 * AION_IDS_SPEEDGOAT.h
 *
 * Code generation for model "AION_IDS_SPEEDGOAT".
 *
 * Model version              : 4.303
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Tue Jun 14 10:27:28 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AION_IDS_SPEEDGOAT_h_
#define RTW_HEADER_AION_IDS_SPEEDGOAT_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include <string.h>
#include <logsrv.h>
#include <math.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "can_message.h"
#include "stdlib.h"
#include "slrtdatatypes.h"
#include "AION_IDS_SPEEDGOAT_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "AION_signal_transfer.h"
#include "AION_auto_mode_request.h"
#include "AION_IDS_SPEEDGOAT_cal.h"
#include "crl_mutex.hpp"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmCounterLimit
#define rtmCounterLimit(rtm, idx)      ((rtm)->Timing.TaskCounters.cLimit[(idx)])
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
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
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* user code (top of export header file) */
#include "can_message.h"

/* Block signals (default storage) */
struct B_AION_IDS_SPEEDGOAT_T {
  AION_ApplicationBus UnitDelay;       /* '<S1>/Unit Delay' */
  AION_ApplicationBus TmpRTBAtUnitDelayInport1;/* '<S1>/Initialization' */
  AION_ApplicationBus ToVirtualBus_BusCreator1;/* '<S1>/To Virtual Bus' */
  CAN_DATATYPE ADCU2SCU_Brake_Command_CAN_pack;
                                   /* '<S19>/ADCU2SCU_Brake_Command_CAN_pack' */
  CAN_DATATYPE RT_f;                   /* '<S19>/RT' */
  CAN_DATATYPE ADCU2SCU_Gear_Command_CAN_pack;
                                    /* '<S19>/ADCU2SCU_Gear_Command_CAN_pack' */
  CAN_DATATYPE RT1;                    /* '<S19>/RT1' */
  CAN_DATATYPE ADCU2SCU_Steer_Command_CAN_pack;
                                   /* '<S19>/ADCU2SCU_Steer_Command_CAN_pack' */
  CAN_DATATYPE RT2;                    /* '<S19>/RT2' */
  CAN_DATATYPE SCU2ADCU_CAN_read_o2;   /* '<S12>/SCU2ADCU_CAN_read' */
  CAN_DATATYPE IMU2ADCU_CAN_read_o2;   /* '<S11>/IMU2ADCU_CAN_read' */
  serialfifoptr FIFOwrite;             /* '<S16>/FIFO write' */
  real_T SCU2ADCU_SampleTimes;         /* '<S9>/SCU2ADCU_SampleTime(s)' */
  real_T IMU2ADCU_SampleTime;          /* '<S9>/IMU2ADCU_SampleTime' */
  real_T set_SteerAngReq;              /* '<S2>/Signal_Transfer' */
  real_T set_SteerWhlTorqReq;          /* '<S2>/Signal_Transfer' */
  real_T set_AutoTrqWhlReq;            /* '<S2>/Signal_Transfer' */
  real_T set_BrakeReq;                 /* '<S2>/Signal_Transfer' */
  real_T get_VehSpd;                   /* '<S2>/Signal_Transfer' */
  real_T get_YawRate;                  /* '<S2>/Signal_Transfer' */
  real_T get_ActVehLaltrlAccel;        /* '<S2>/Signal_Transfer' */
  real_T get_ActVehLongAccel;          /* '<S2>/Signal_Transfer' */
  real_T get_GasPedalActPst;           /* '<S2>/Signal_Transfer' */
  real_T get_SteeringAngle;            /* '<S2>/Signal_Transfer' */
  real_T get_StrngWhlTorq;             /* '<S2>/Signal_Transfer' */
  real_T get_GPSWeek;                  /* '<S2>/Signal_Transfer' */
  real_T get_GPSTime;                  /* '<S2>/Signal_Transfer' */
  real_T get_Heading;                  /* '<S2>/Signal_Transfer' */
  real_T get_Pitch;                    /* '<S2>/Signal_Transfer' */
  real_T get_Roll;                     /* '<S2>/Signal_Transfer' */
  real_T get_AngleSpeedX;              /* '<S2>/Signal_Transfer' */
  real_T get_AngleSpeedY;              /* '<S2>/Signal_Transfer' */
  real_T get_AngleSpeedZ;              /* '<S2>/Signal_Transfer' */
  real_T get_AccelerationX;            /* '<S2>/Signal_Transfer' */
  real_T get_AccelerationY;            /* '<S2>/Signal_Transfer' */
  real_T get_AccelerationZ;            /* '<S2>/Signal_Transfer' */
  real_T get_Latitude;                 /* '<S2>/Signal_Transfer' */
  real_T get_Longitude;                /* '<S2>/Signal_Transfer' */
  real_T get_Altitude;                 /* '<S2>/Signal_Transfer' */
  real_T ADCU_AutoTrqWhlReq;           /* '<S2>/Signal_Transfer' */
  real_T ADCU_BrakeReq;                /* '<S2>/Signal_Transfer' */
  real_T ADCU_GearLvlReq;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_GearLvlReqVD;            /* '<S2>/Signal_Transfer' */
  real_T ADCU_LngCtrlReq;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_LatCtrlReq;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_SteerAngReq;             /* '<S2>/Signal_Transfer' */
  real_T ADCU_SteerWhlTorqReq;         /* '<S2>/Signal_Transfer' */
  real_T ADCU_BeamReq;                 /* '<S2>/Signal_Transfer' */
  real_T ADCU_BodyCtrlReq;             /* '<S2>/Signal_Transfer' */
  real_T ADCU_HornRingReq;             /* '<S2>/Signal_Transfer' */
  real_T ADCU_TurnLightReq;            /* '<S2>/Signal_Transfer' */
  real_T GPCHCDecode_o1;               /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o2;               /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o3;               /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o4;               /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o5;               /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o6;               /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o7;               /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o8;               /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o9;               /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o10;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o11;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o12;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o13;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o14;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o15;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o16;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o17;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o18;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o19;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o20;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o21;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o22;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o23;              /* '<S15>/GPCHC Decode ' */
  real_T GPCHCDecode_o24;              /* '<S15>/GPCHC Decode ' */
  real_T S_AccelerationX;
  real_T S_AccelerationY;
  real_T S_AccelerationZ;
  real_T S_Altitude;
  real_T S_AngleSpeedX;
  real_T S_AngleSpeedY;
  real_T S_AngleSpeedZ;
  real_T S_Heading;
  real_T S_Latitude;
  real_T S_Longitude;
  real_T get_GPSTime_p;                /* '<S6>/Signal Copy14' */
  real_T get_Heading_b;                /* '<S6>/Signal Copy15' */
  real_T get_Latitude_f;               /* '<S6>/Signal Copy16' */
  real_T get_Longitude_p;              /* '<S6>/Signal Copy17' */
  real_T get_Altitude_p;               /* '<S6>/Signal Copy18' */
  real_T get_GPSWeek_h;                /* '<S6>/Signal Copy19' */
  real_T get_Pitch_k;                  /* '<S6>/Signal Copy20' */
  real_T get_Roll_f;                   /* '<S6>/Signal Copy21' */
  real_T get_AngleSpeedX_p;            /* '<S6>/Signal Copy22' */
  real_T get_AngleSpeedY_f;            /* '<S6>/Signal Copy23' */
  real_T get_AngleSpeedZ_o;            /* '<S6>/Signal Copy24' */
  real_T get_AccelerationX_o;          /* '<S6>/Signal Copy25' */
  real_T get_AccelerationY_k;          /* '<S6>/Signal Copy26' */
  real_T get_AccelerationZ_p;          /* '<S6>/Signal Copy27' */
  real_T get_SteeringAngle_d;          /* '<S6>/Signal Copy3' */
  real_T get_VehSpd_h;                 /* '<S6>/Signal Copy6' */
  real_T AutoTrqWhlReq_test;           /* '<S5>/AutoTrqWhlReq_test' */
  real_T BrakeReq_test;                /* '<S5>/BrakeReq_test' */
  real_T LatCtrlReq_test;              /* '<S5>/LatCtrlReq_test' */
  real_T S_GPSWeek;                    /* '<S15>/S_GPSWeek' */
  real_T S_GPSTime;                    /* '<S15>/S_GPSTime' */
  real_T TmpRTBAtSwitch9Inport1;
  real_T Switch9;                      /* '<S17>/Switch9' */
  real_T TmpRTBAtSwitchInport1;
  real_T Switch;                       /* '<S17>/Switch' */
  real_T TmpRTBAtSwitch1Inport1;
  real_T Switch1;                      /* '<S17>/Switch1' */
  real_T TmpRTBAtSwitch2Inport1;
  real_T Switch2;                      /* '<S17>/Switch2' */
  real_T S_IMUWorkStatus;              /* '<S15>/S_IMUWorkStatus' */
  real_T TmpRTBAtSwitch3Inport1;
  real_T Switch3;                      /* '<S17>/Switch3' */
  real_T S_Pitch;                      /* '<S15>/S_Pitch' */
  real_T S_Roll;                       /* '<S15>/S_Roll' */
  real_T TmpRTBAtSwitch4Inport1;
  real_T Switch4;                      /* '<S17>/Switch4' */
  real_T TmpRTBAtSwitch5Inport1;
  real_T Switch5;                      /* '<S17>/Switch5' */
  real_T TmpRTBAtSwitch6Inport1;
  real_T Switch6;                      /* '<S17>/Switch6' */
  real_T TmpRTBAtSwitch7Inport1;
  real_T Switch7;                      /* '<S17>/Switch7' */
  real_T TmpRTBAtSwitch8Inport1;
  real_T Switch8;                      /* '<S17>/Switch8' */
  real_T count;                        /* '<S15>/count' */
  real_T TmpRTBAtAION_auto_mode_requestInport2;
  real_T TmpRTBAtAION_auto_mode_requestInport3;
  real_T AutoTrqWhlReq_test_p;
  real_T BrakeReq_test_e;
  real_T get_VehSpd_hz;
  real_T get_YawRate_p;
  real_T get_ActVehLaltrlAccel_d;
  real_T get_ActVehLongAccel_k;
  real_T get_GasPedalActPst_j;
  real_T get_SteeringAngle_i;
  real_T get_StrngWhlTorq_a;
  real_T get_GPSWeek_m;
  real_T get_GPSTime_o;
  real_T get_Heading_f;
  real_T get_Pitch_d;
  real_T get_Roll_n;
  real_T get_AngleSpeedX_b;
  real_T get_AngleSpeedY_a;
  real_T get_AngleSpeedZ_f;
  real_T get_AccelerationX_op;
  real_T get_AccelerationY_b;
  real_T get_AccelerationZ_f;
  real_T get_Latitude_i;
  real_T get_Longitude_d;
  real_T get_Altitude_f;
  real_T set_SteerAngReq_k;            /* '<S1>/AION_auto_mode_request' */
  real_T set_SteerWhlTorqReq_b;        /* '<S1>/AION_auto_mode_request' */
  real_T set_AutoTrqWhlReq_e;          /* '<S1>/AION_auto_mode_request' */
  real_T set_BrakeReq_k;               /* '<S1>/AION_auto_mode_request' */
  real_T get_VehSpd_n;                 /* '<S1>/AION_auto_mode_request' */
  real_T get_YawRate_f;                /* '<S1>/AION_auto_mode_request' */
  real_T get_ActVehLaltrlAccel_j;      /* '<S1>/AION_auto_mode_request' */
  real_T get_ActVehLongAccel_n;        /* '<S1>/AION_auto_mode_request' */
  real_T get_GasPedalActPst_k;         /* '<S1>/AION_auto_mode_request' */
  real_T get_SteeringAngle_o;          /* '<S1>/AION_auto_mode_request' */
  real_T get_StrngWhlTorq_n;           /* '<S1>/AION_auto_mode_request' */
  real_T get_GPSWeek_g;                /* '<S1>/AION_auto_mode_request' */
  real_T get_GPSTime_d;                /* '<S1>/AION_auto_mode_request' */
  real_T get_Heading_h;                /* '<S1>/AION_auto_mode_request' */
  real_T get_Pitch_l;                  /* '<S1>/AION_auto_mode_request' */
  real_T get_Roll_k;                   /* '<S1>/AION_auto_mode_request' */
  real_T get_AngleSpeedX_m;            /* '<S1>/AION_auto_mode_request' */
  real_T get_AngleSpeedY_k;            /* '<S1>/AION_auto_mode_request' */
  real_T get_AngleSpeedZ_a;            /* '<S1>/AION_auto_mode_request' */
  real_T get_AccelerationX_f;          /* '<S1>/AION_auto_mode_request' */
  real_T get_AccelerationY_g;          /* '<S1>/AION_auto_mode_request' */
  real_T get_AccelerationZ_o;          /* '<S1>/AION_auto_mode_request' */
  real_T get_Latitude_b;               /* '<S1>/AION_auto_mode_request' */
  real_T get_Longitude_h;              /* '<S1>/AION_auto_mode_request' */
  real_T get_Altitude_n;               /* '<S1>/AION_auto_mode_request' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o1;
                                  /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o2;
                                  /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o3;
                                  /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack1;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o1;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o2;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o3;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o4;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o5;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o6;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o7;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o8;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack11_o1;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack11_o2;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack11_o3;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack12_o1;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack12_o2;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack13;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o1;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o2;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o3;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack15;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o1;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o2;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack7;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o1;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o2;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o3;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o4;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o5;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack9_o1;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack9_o2;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o1;
                                      /* '<S14>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o2;
                                      /* '<S14>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o3;
                                      /* '<S14>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o4;
                                      /* '<S14>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o5;
                                      /* '<S14>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o6;
                                      /* '<S14>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o7;
                                      /* '<S14>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o8;
                                      /* '<S14>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T AccelerationX;         /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack1' */
  real_T AccelerationY;         /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack1' */
  real_T AccelerationXZ;        /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack1' */
  real_T Latitude;              /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack2' */
  real_T Longitude;             /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack2' */
  real_T Altitude;              /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack3' */
  real_T GPSTime;               /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack4' */
  real_T GPSWeek;               /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack4' */
  real_T AngleSpeedX;           /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack5' */
  real_T AngleSpeedY;           /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack5' */
  real_T AngleSpeedZ;           /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack5' */
  real_T Heading;                /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack' */
  real_T Pitch;                  /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack' */
  real_T Roll;                   /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack' */
  uint32_T set_Checksum1;              /* '<S2>/Signal_Transfer' */
  uint32_T set_MsgCounter1;            /* '<S2>/Signal_Transfer' */
  uint32_T set_Checksum2;              /* '<S2>/Signal_Transfer' */
  uint32_T set_MsgCounter2;            /* '<S2>/Signal_Transfer' */
  uint32_T set_Checksum3;              /* '<S2>/Signal_Transfer' */
  uint32_T set_MsgCounter3;            /* '<S2>/Signal_Transfer' */
  uint32_T get_ActVehWheelTorq;        /* '<S2>/Signal_Transfer' */
  uint32_T get_VehRng;                 /* '<S2>/Signal_Transfer' */
  uint32_T get_VehWheelTorqMax;        /* '<S2>/Signal_Transfer' */
  uint32_T get_LatAutoCheckReport;     /* '<S2>/Signal_Transfer' */
  uint32_T get_LatQuitReport;          /* '<S2>/Signal_Transfer' */
  uint32_T get_LngAutoCheckIReport;    /* '<S2>/Signal_Transfer' */
  uint32_T get_LngQuitReport;          /* '<S2>/Signal_Transfer' */
  uint32_T get_SteeringAngleSpd;       /* '<S2>/Signal_Transfer' */
  uint32_T set_Checksum1_g;
  uint32_T set_MsgCounter1_o;
  uint32_T set_Checksum2_m;
  uint32_T set_MsgCounter2_o;
  uint32_T set_Checksum3_l;
  uint32_T set_MsgCounter3_i;
  uint32_T get_ActVehWheelTorq_h;
  uint32_T get_VehRng_j;
  uint32_T get_VehWheelTorqMax_j;
  uint32_T get_LatAutoCheckReport_i;
  uint32_T get_LatQuitReport_k;
  uint32_T get_LngAutoCheckIReport_g;
  uint32_T get_LngQuitReport_m;
  uint32_T get_SteeringAngleSpd_i;
  uint32_T set_Checksum1_l;            /* '<S1>/AION_auto_mode_request' */
  uint32_T set_MsgCounter1_j;          /* '<S1>/AION_auto_mode_request' */
  uint32_T set_Checksum2_a;            /* '<S1>/AION_auto_mode_request' */
  uint32_T set_MsgCounter2_d;          /* '<S1>/AION_auto_mode_request' */
  uint32_T set_Checksum3_e;            /* '<S1>/AION_auto_mode_request' */
  uint32_T set_MsgCounter3_p;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_ActVehWheelTorq_a;      /* '<S1>/AION_auto_mode_request' */
  uint32_T get_VehRng_p;               /* '<S1>/AION_auto_mode_request' */
  uint32_T get_VehWheelTorqMax_d;      /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LatAutoCheckReport_k;   /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LatQuitReport_e;        /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LngAutoCheckIReport_j;  /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LngQuitReport_o;        /* '<S1>/AION_auto_mode_request' */
  uint32_T get_SteeringAngleSpd_h;     /* '<S1>/AION_auto_mode_request' */
  Validation_status set_GearLvlReqVD;  /* '<S2>/Signal_Transfer' */
  Validation_status DataTypeConversion4;/* '<S5>/Data Type Conversion4' */
  Validation_status TmpRTBAtAION_auto_mode_requestInport8;
  Validation_status set_GearLvlReqVD_b;/* '<S1>/AION_auto_mode_request' */
  Ready_status get_VehRdySt;           /* '<S2>/Signal_Transfer' */
  Ready_status get_VehRdySt_g;         /* '<S6>/Signal Copy' */
  Ready_status get_VehRdySt_l;
  Ready_status get_VehRdySt_e;         /* '<S1>/AION_auto_mode_request' */
  Light_request set_TurnLightReq;      /* '<S2>/Signal_Transfer' */
  Light_request DataTypeConversion14;  /* '<S5>/Data Type Conversion14' */
  Light_request TmpRTBAtAION_auto_mode_requestInport18;
  Light_request set_TurnLightReq_n;    /* '<S1>/AION_auto_mode_request' */
  IMU_Status get_IMUWorkStatus;        /* '<S2>/Signal_Transfer' */
  IMU_Status get_IMUWorkStatus_f;
  IMU_Status get_IMUWorkStatus_n;      /* '<S1>/AION_auto_mode_request' */
  Gear_status get_CrntGearLvl;         /* '<S2>/Signal_Transfer' */
  Gear_status get_CrntGearLvl_f;       /* '<S6>/Signal Copy5' */
  Gear_status get_CrntGearLvl_j;
  Gear_status get_CrntGearLvl_h;       /* '<S1>/AION_auto_mode_request' */
  Gear_request set_GearLvlReq;         /* '<S2>/Signal_Transfer' */
  Gear_request DataTypeConversion2;    /* '<S5>/Data Type Conversion2' */
  Gear_request TmpRTBAtAION_auto_mode_requestInport7;
  Gear_request set_GearLvlReq_j;       /* '<S1>/AION_auto_mode_request' */
  Enable_request set_BodyCtrlReq;      /* '<S2>/Signal_Transfer' */
  Enable_request DataTypeConversion12; /* '<S5>/Data Type Conversion12' */
  Enable_request TmpRTBAtAION_auto_mode_requestInport16;
  Enable_request set_BodyCtrlReq_l;    /* '<S1>/AION_auto_mode_request' */
  Drive_status get_VehDrvMod;          /* '<S2>/Signal_Transfer' */
  Drive_status get_VehDrvMod_j;        /* '<S6>/Signal Copy1' */
  Drive_status get_VehDrvMod_a;
  Drive_status get_VehDrvMod_jx;       /* '<S1>/AION_auto_mode_request' */
  Control_status get_LatCtrlMode;      /* '<S2>/Signal_Transfer' */
  Control_status get_LngCtrlMode;      /* '<S2>/Signal_Transfer' */
  Control_status get_LatCtrlMode_h;    /* '<S6>/Signal Copy2' */
  Control_status get_LngCtrlMode_f;    /* '<S6>/Signal Copy4' */
  Control_status get_LatCtrlMode_hx;
  Control_status get_LngCtrlMode_a;
  Control_status get_LatCtrlMode_i;    /* '<S1>/AION_auto_mode_request' */
  Control_status get_LngCtrlMode_m;    /* '<S1>/AION_auto_mode_request' */
  Control_request set_LatCtrlReq;      /* '<S2>/Signal_Transfer' */
  Control_request set_LngCtrlReq;      /* '<S2>/Signal_Transfer' */
  Control_request DataTypeConversion7; /* '<S5>/Data Type Conversion7' */
  Control_request DataTypeConversion9; /* '<S5>/Data Type Conversion9' */
  Control_request TmpRTBAtAION_auto_mode_requestInport1;
  Control_request TmpRTBAtAION_auto_mode_requestInport4;
  Control_request set_LatCtrlReq_n;    /* '<S1>/AION_auto_mode_request' */
  Control_request set_LngCtrlReq_i;    /* '<S1>/AION_auto_mode_request' */
  Beam_request set_BeamReq;            /* '<S2>/Signal_Transfer' */
  Beam_request DataTypeConversion18;   /* '<S5>/Data Type Conversion18' */
  Beam_request TmpRTBAtAION_auto_mode_requestInport15;
  Beam_request set_BeamReq_l;          /* '<S1>/AION_auto_mode_request' */
  Available_status get_CtrlAvailable;  /* '<S2>/Signal_Transfer' */
  Available_status get_CtrlAvailable_a;/* '<S6>/Signal Copy7' */
  Available_status get_CtrlAvailable_h;
  Available_status get_CtrlAvailable_o;/* '<S1>/AION_auto_mode_request' */
  Active_status get_HazardLampSt;      /* '<S2>/Signal_Transfer' */
  Active_status get_HighBeamSt;        /* '<S2>/Signal_Transfer' */
  Active_status get_HornSt;            /* '<S2>/Signal_Transfer' */
  Active_status get_LeftTurnLampSt;    /* '<S2>/Signal_Transfer' */
  Active_status get_LowBeamSt;         /* '<S2>/Signal_Transfer' */
  Active_status get_RightTurnLampSt;   /* '<S2>/Signal_Transfer' */
  Active_status get_LowBeamSt_n;       /* '<S6>/Signal Copy10' */
  Active_status get_HighBeamSt_o;      /* '<S6>/Signal Copy11' */
  Active_status get_LeftTurnLampSt_j;  /* '<S6>/Signal Copy12' */
  Active_status get_RightTurnLampSt_e; /* '<S6>/Signal Copy13' */
  Active_status get_HazardLampSt_h;    /* '<S6>/Signal Copy8' */
  Active_status get_HornSt_m;          /* '<S6>/Signal Copy9' */
  Active_status get_HazardLampSt_k;
  Active_status get_HighBeamSt_b;
  Active_status get_HornSt_o;
  Active_status get_LeftTurnLampSt_p;
  Active_status get_LowBeamSt_c;
  Active_status get_RightTurnLampSt_o;
  Active_status get_HazardLampSt_b;    /* '<S1>/AION_auto_mode_request' */
  Active_status get_HighBeamSt_j;      /* '<S1>/AION_auto_mode_request' */
  Active_status get_HornSt_ou;         /* '<S1>/AION_auto_mode_request' */
  Active_status get_LeftTurnLampSt_a;  /* '<S1>/AION_auto_mode_request' */
  Active_status get_LowBeamSt_m;       /* '<S1>/AION_auto_mode_request' */
  Active_status get_RightTurnLampSt_b; /* '<S1>/AION_auto_mode_request' */
  Active_request set_HornRingReq;      /* '<S2>/Signal_Transfer' */
  Active_request DataTypeConversion16; /* '<S5>/Data Type Conversion16' */
  Active_request TmpRTBAtAION_auto_mode_requestInport17;
  Active_request set_HornRingReq_g;    /* '<S1>/AION_auto_mode_request' */
  uint16_T LegacySerialRead[51];       /* '<S16>/Legacy Serial Read' */
  uint8_T get_ABSActiveSt;             /* '<S2>/Signal_Transfer' */
  uint8_T get_VehSpdVD;                /* '<S2>/Signal_Transfer' */
  uint8_T get_GearLeverIntv;           /* '<S2>/Signal_Transfer' */
  uint8_T get_CrntGearLvlVD;           /* '<S2>/Signal_Transfer' */
  uint8_T get_AccElecECFail;           /* '<S2>/Signal_Transfer' */
  uint8_T get_BrkPedalSt;              /* '<S2>/Signal_Transfer' */
  uint8_T get_StrngWhlIntv;            /* '<S2>/Signal_Transfer' */
  uint8_T get_SysSt;                   /* '<S2>/Signal_Transfer' */
  uint8_T get_DriverSeatBeltSt;        /* '<S2>/Signal_Transfer' */
  uint8_T get_PsngrSeatBeltSt;         /* '<S2>/Signal_Transfer' */
  uint8_T get_SteeringAngleSpdVD;      /* '<S2>/Signal_Transfer' */
  uint8_T get_SteeringAngleVD;         /* '<S2>/Signal_Transfer' */
  uint8_T get_KeySt;                   /* '<S2>/Signal_Transfer' */
  uint8_T FIFOASCIIread[1025];         /* '<S15>/FIFO ASCII read' */
  uint8_T DataTypeConversion8;         /* '<S5>/Data Type Conversion8' */
  uint8_T DataTypeConversion17;        /* '<S5>/Data Type Conversion17' */
  uint8_T DataTypeConversion11;        /* '<S5>/Data Type Conversion11' */
  uint8_T DataTypeConversion15;        /* '<S5>/Data Type Conversion15' */
  uint8_T DataTypeConversion13;        /* '<S5>/Data Type Conversion13' */
  uint8_T DataTypeConversion10;        /* '<S5>/Data Type Conversion10' */
  uint8_T DataTypeConversion3;         /* '<S5>/Data Type Conversion3' */
  uint8_T DataTypeConversion1;         /* '<S5>/Data Type Conversion1' */
  uint8_T get_ABSActiveSt_d;
  uint8_T get_VehSpdVD_l;
  uint8_T get_GearLeverIntv_k;
  uint8_T get_CrntGearLvlVD_a;
  uint8_T get_AccElecECFail_g;
  uint8_T get_BrkPedalSt_d;
  uint8_T get_StrngWhlIntv_h;
  uint8_T get_SysSt_a;
  uint8_T get_DriverSeatBeltSt_j;
  uint8_T get_PsngrSeatBeltSt_b;
  uint8_T get_SteeringAngleSpdVD_n;
  uint8_T get_SteeringAngleVD_m;
  uint8_T get_KeySt_d;
  uint8_T get_ABSActiveSt_o;           /* '<S1>/AION_auto_mode_request' */
  uint8_T get_VehSpdVD_i;              /* '<S1>/AION_auto_mode_request' */
  uint8_T get_GearLeverIntv_b;         /* '<S1>/AION_auto_mode_request' */
  uint8_T get_CrntGearLvlVD_o;         /* '<S1>/AION_auto_mode_request' */
  uint8_T get_AccElecECFail_a;         /* '<S1>/AION_auto_mode_request' */
  uint8_T get_BrkPedalSt_dt;           /* '<S1>/AION_auto_mode_request' */
  uint8_T get_StrngWhlIntv_d;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_SysSt_l;                 /* '<S1>/AION_auto_mode_request' */
  uint8_T get_DriverSeatBeltSt_n;      /* '<S1>/AION_auto_mode_request' */
  uint8_T get_PsngrSeatBeltSt_g;       /* '<S1>/AION_auto_mode_request' */
  uint8_T get_SteeringAngleSpdVD_i;    /* '<S1>/AION_auto_mode_request' */
  uint8_T get_SteeringAngleVD_c;       /* '<S1>/AION_auto_mode_request' */
  uint8_T get_KeySt_o;                 /* '<S1>/AION_auto_mode_request' */
  boolean_T condition;                 /* '<S17>/Equal' */
  boolean_T SCU2ADCU_CAN_read_o1;      /* '<S12>/SCU2ADCU_CAN_read' */
  boolean_T IMU2ADCU_CAN_read_o1;      /* '<S11>/IMU2ADCU_CAN_read' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_AION_IDS_SPEEDGOAT_T {
  AION_ApplicationBus UnitDelay_DSTATE;/* '<S1>/Unit Delay' */
  AION_ApplicationBus TmpRTBAtUnitDelayInport1_Buf[3];/* synthesized block */
  CAN_DATATYPE RT2_Buf0;               /* '<S19>/RT2' */
  CAN_DATATYPE RT2_Buf1;               /* '<S19>/RT2' */
  CAN_DATATYPE RT2_Buf2;               /* '<S19>/RT2' */
  real_T TmpRTBAtSwitch1Inport1_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch1Inport1_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch1Inport1_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitch2Inport1_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch2Inport1_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch2Inport1_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitch3Inport1_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch3Inport1_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch3Inport1_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitch4Inport1_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch4Inport1_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch4Inport1_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitch5Inport1_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch5Inport1_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch5Inport1_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitch6Inport1_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch6Inport1_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch6Inport1_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitch7Inport1_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch7Inport1_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch7Inport1_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitch8Inport1_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch8Inport1_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch8Inport1_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitch9Inport1_Buf0;  /* synthesized block */
  real_T TmpRTBAtSwitch9Inport1_Buf1;  /* synthesized block */
  real_T TmpRTBAtSwitch9Inport1_Buf2;  /* synthesized block */
  real_T TmpRTBAtSwitchInport1_Buf0;   /* synthesized block */
  real_T TmpRTBAtSwitchInport1_Buf1;   /* synthesized block */
  real_T TmpRTBAtSwitchInport1_Buf2;   /* synthesized block */
  real_T S_GPSTime_Buf0;               /* '<S15>/S_GPSTime' */
  real_T S_GPSTime_Buf1;               /* '<S15>/S_GPSTime' */
  real_T S_GPSTime_Buf2;               /* '<S15>/S_GPSTime' */
  real_T S_GPSWeek_Buf0;               /* '<S15>/S_GPSWeek' */
  real_T S_GPSWeek_Buf1;               /* '<S15>/S_GPSWeek' */
  real_T S_GPSWeek_Buf2;               /* '<S15>/S_GPSWeek' */
  real_T S_IMUWorkStatus_Buf0;         /* '<S15>/S_IMUWorkStatus' */
  real_T S_IMUWorkStatus_Buf1;         /* '<S15>/S_IMUWorkStatus' */
  real_T S_IMUWorkStatus_Buf2;         /* '<S15>/S_IMUWorkStatus' */
  real_T S_Pitch_Buf0;                 /* '<S15>/S_Pitch' */
  real_T S_Pitch_Buf1;                 /* '<S15>/S_Pitch' */
  real_T S_Pitch_Buf2;                 /* '<S15>/S_Pitch' */
  real_T S_Roll_Buf0;                  /* '<S15>/S_Roll' */
  real_T S_Roll_Buf1;                  /* '<S15>/S_Roll' */
  real_T S_Roll_Buf2;                  /* '<S15>/S_Roll' */
  real_T count_Buf0;                   /* '<S15>/count' */
  real_T count_Buf1;                   /* '<S15>/count' */
  real_T count_Buf2;                   /* '<S15>/count' */
  real_T S_AccelerationX_Buf[3];       /* synthesized block */
  real_T S_AccelerationY_Buf[3];       /* synthesized block */
  real_T S_AccelerationZ_Buf[3];       /* synthesized block */
  real_T S_Altitude_Buf[3];            /* synthesized block */
  real_T S_AngleSpeedX_Buf[3];         /* synthesized block */
  real_T S_AngleSpeedY_Buf[3];         /* synthesized block */
  real_T S_AngleSpeedZ_Buf[3];         /* synthesized block */
  real_T S_Heading_Buf[3];             /* synthesized block */
  real_T S_Latitude_Buf[3];            /* synthesized block */
  real_T S_Longitude_Buf[3];           /* synthesized block */
  real_T AutoTrqWhlReq_test_Buf0;      /* synthesized block */
  real_T AutoTrqWhlReq_test_Buf1;      /* synthesized block */
  real_T AutoTrqWhlReq_test_Buf2;      /* synthesized block */
  real_T BrakeReq_test_Buf0;           /* synthesized block */
  real_T BrakeReq_test_Buf1;           /* synthesized block */
  real_T BrakeReq_test_Buf2;           /* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport2_Buf0;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport2_Buf1;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport2_Buf2;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport3_Buf0;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport3_Buf1;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport3_Buf2;/* synthesized block */
  real_T get_AccelerationX_Buf0;       /* synthesized block */
  real_T get_AccelerationX_Buf1;       /* synthesized block */
  real_T get_AccelerationX_Buf2;       /* synthesized block */
  real_T get_AccelerationY_Buf0;       /* synthesized block */
  real_T get_AccelerationY_Buf1;       /* synthesized block */
  real_T get_AccelerationY_Buf2;       /* synthesized block */
  real_T get_AccelerationZ_Buf0;       /* synthesized block */
  real_T get_AccelerationZ_Buf1;       /* synthesized block */
  real_T get_AccelerationZ_Buf2;       /* synthesized block */
  real_T get_ActVehLaltrlAccel_Buf0;   /* synthesized block */
  real_T get_ActVehLaltrlAccel_Buf1;   /* synthesized block */
  real_T get_ActVehLaltrlAccel_Buf2;   /* synthesized block */
  real_T get_ActVehLongAccel_Buf0;     /* synthesized block */
  real_T get_ActVehLongAccel_Buf1;     /* synthesized block */
  real_T get_ActVehLongAccel_Buf2;     /* synthesized block */
  real_T get_Altitude_Buf0;            /* synthesized block */
  real_T get_Altitude_Buf1;            /* synthesized block */
  real_T get_Altitude_Buf2;            /* synthesized block */
  real_T get_AngleSpeedX_Buf0;         /* synthesized block */
  real_T get_AngleSpeedX_Buf1;         /* synthesized block */
  real_T get_AngleSpeedX_Buf2;         /* synthesized block */
  real_T get_AngleSpeedY_Buf0;         /* synthesized block */
  real_T get_AngleSpeedY_Buf1;         /* synthesized block */
  real_T get_AngleSpeedY_Buf2;         /* synthesized block */
  real_T get_AngleSpeedZ_Buf0;         /* synthesized block */
  real_T get_AngleSpeedZ_Buf1;         /* synthesized block */
  real_T get_AngleSpeedZ_Buf2;         /* synthesized block */
  real_T get_GPSTime_Buf0;             /* synthesized block */
  real_T get_GPSTime_Buf1;             /* synthesized block */
  real_T get_GPSTime_Buf2;             /* synthesized block */
  real_T get_GPSWeek_Buf0;             /* synthesized block */
  real_T get_GPSWeek_Buf1;             /* synthesized block */
  real_T get_GPSWeek_Buf2;             /* synthesized block */
  real_T get_GasPedalActPst_Buf0;      /* synthesized block */
  real_T get_GasPedalActPst_Buf1;      /* synthesized block */
  real_T get_GasPedalActPst_Buf2;      /* synthesized block */
  real_T get_Heading_Buf0;             /* synthesized block */
  real_T get_Heading_Buf1;             /* synthesized block */
  real_T get_Heading_Buf2;             /* synthesized block */
  real_T get_Latitude_Buf0;            /* synthesized block */
  real_T get_Latitude_Buf1;            /* synthesized block */
  real_T get_Latitude_Buf2;            /* synthesized block */
  real_T get_Longitude_Buf0;           /* synthesized block */
  real_T get_Longitude_Buf1;           /* synthesized block */
  real_T get_Longitude_Buf2;           /* synthesized block */
  real_T get_Pitch_Buf0;               /* synthesized block */
  real_T get_Pitch_Buf1;               /* synthesized block */
  real_T get_Pitch_Buf2;               /* synthesized block */
  real_T get_Roll_Buf0;                /* synthesized block */
  real_T get_Roll_Buf1;                /* synthesized block */
  real_T get_Roll_Buf2;                /* synthesized block */
  real_T get_SteeringAngle_Buf0;       /* synthesized block */
  real_T get_SteeringAngle_Buf1;       /* synthesized block */
  real_T get_SteeringAngle_Buf2;       /* synthesized block */
  real_T get_StrngWhlTorq_Buf0;        /* synthesized block */
  real_T get_StrngWhlTorq_Buf1;        /* synthesized block */
  real_T get_StrngWhlTorq_Buf2;        /* synthesized block */
  real_T get_VehSpd_Buf0;              /* synthesized block */
  real_T get_VehSpd_Buf1;              /* synthesized block */
  real_T get_VehSpd_Buf2;              /* synthesized block */
  real_T get_YawRate_Buf0;             /* synthesized block */
  real_T get_YawRate_Buf1;             /* synthesized block */
  real_T get_YawRate_Buf2;             /* synthesized block */
  void *ADCU2SCU_Brake_Command_CAN_write_PWORK;
                                  /* '<S19>/ADCU2SCU_Brake_Command_CAN_write' */
  void *ADCU2SCU_Gear_Command_CAN_write_PWORK;
                                   /* '<S19>/ADCU2SCU_Gear_Command_CAN_write' */
  void* RT2_d0_SEMAPHORE;              /* '<S19>/RT2' */
  void *LegacySerialRead_PWORK;        /* '<S16>/Legacy Serial Read' */
  void *FIFOwrite_PWORK[4];            /* '<S16>/FIFO write' */
  void *LegacySerialWrite_PWORK;       /* '<S16>/Legacy Serial Write' */
  void *FIFOASCIIread_PWORK[3];        /* '<S15>/FIFO ASCII read' */
  void *GPCHCDecode_PWORK[2];          /* '<S15>/GPCHC Decode ' */
  void* TmpRTBAtSwitch1Inport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtSwitch2Inport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtSwitch3Inport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtSwitch4Inport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtSwitch5Inport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtSwitch6Inport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtSwitch7Inport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtSwitch8Inport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtSwitch9Inport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtSwitchInport1_d0_SEMAPHORE;/* synthesized block */
  void* S_GPSTime_d0_SEMAPHORE;        /* '<S15>/S_GPSTime' */
  void* S_GPSWeek_d0_SEMAPHORE;        /* '<S15>/S_GPSWeek' */
  void* S_IMUWorkStatus_d0_SEMAPHORE;  /* '<S15>/S_IMUWorkStatus' */
  void* S_Pitch_d0_SEMAPHORE;          /* '<S15>/S_Pitch' */
  void* S_Roll_d0_SEMAPHORE;           /* '<S15>/S_Roll' */
  void* count_d0_SEMAPHORE;            /* '<S15>/count' */
  void* S_AccelerationX_d0_SEMAPHORE;  /* synthesized block */
  void* S_AccelerationY_d0_SEMAPHORE;  /* synthesized block */
  void* S_AccelerationZ_d0_SEMAPHORE;  /* synthesized block */
  void* S_Altitude_d0_SEMAPHORE;       /* synthesized block */
  void* S_AngleSpeedX_d0_SEMAPHORE;    /* synthesized block */
  void* S_AngleSpeedY_d0_SEMAPHORE;    /* synthesized block */
  void* S_AngleSpeedZ_d0_SEMAPHORE;    /* synthesized block */
  void* S_Heading_d0_SEMAPHORE;        /* synthesized block */
  void* S_Latitude_d0_SEMAPHORE;       /* synthesized block */
  void* S_Longitude_d0_SEMAPHORE;      /* synthesized block */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy10_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy11_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy12_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy13_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy14_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy15_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy16_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy17_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy18_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy19_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy1_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy20_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy21_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy22_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy23_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy24_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy25_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy26_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy27_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy2_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy3_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy4_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy5_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy6_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy7_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy8_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy9_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SignalCopy_at_outport_0_PWORK;/* synthesized block */

  void* AutoTrqWhlReq_test_d0_SEMAPHORE;/* synthesized block */
  void* BrakeReq_test_d0_SEMAPHORE;    /* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport15_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport18_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport4_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport7_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport8_d0_SEMAPHORE;/* synthesized block */
  void* get_AccelerationX_d0_SEMAPHORE;/* synthesized block */
  void* get_AccelerationY_d0_SEMAPHORE;/* synthesized block */
  void* get_AccelerationZ_d0_SEMAPHORE;/* synthesized block */
  void* get_ActVehLaltrlAccel_d0_SEMAPHORE;/* synthesized block */
  void* get_ActVehLongAccel_d0_SEMAPHORE;/* synthesized block */
  void* get_ActVehWheelTorq_d0_SEMAPHORE;/* synthesized block */
  void* get_Altitude_d0_SEMAPHORE;     /* synthesized block */
  void* get_AngleSpeedX_d0_SEMAPHORE;  /* synthesized block */
  void* get_AngleSpeedY_d0_SEMAPHORE;  /* synthesized block */
  void* get_AngleSpeedZ_d0_SEMAPHORE;  /* synthesized block */
  void* get_CrntGearLvl_d0_SEMAPHORE;  /* synthesized block */
  void* get_CtrlAvailable_d0_SEMAPHORE;/* synthesized block */
  void* get_GPSTime_d0_SEMAPHORE;      /* synthesized block */
  void* get_GPSWeek_d0_SEMAPHORE;      /* synthesized block */
  void* get_GasPedalActPst_d0_SEMAPHORE;/* synthesized block */
  void* get_HazardLampSt_d0_SEMAPHORE; /* synthesized block */
  void* get_Heading_d0_SEMAPHORE;      /* synthesized block */
  void* get_HighBeamSt_d0_SEMAPHORE;   /* synthesized block */
  void* get_HornSt_d0_SEMAPHORE;       /* synthesized block */
  void* get_IMUWorkStatus_d0_SEMAPHORE;/* synthesized block */
  void* get_LatAutoCheckReport_d0_SEMAPHORE;/* synthesized block */
  void* get_LatCtrlMode_d0_SEMAPHORE;  /* synthesized block */
  void* get_LatQuitReport_d0_SEMAPHORE;/* synthesized block */
  void* get_Latitude_d0_SEMAPHORE;     /* synthesized block */
  void* get_LeftTurnLampSt_d0_SEMAPHORE;/* synthesized block */
  void* get_LngAutoCheckIReport_d0_SEMAPHORE;/* synthesized block */
  void* get_LngCtrlMode_d0_SEMAPHORE;  /* synthesized block */
  void* get_LngQuitReport_d0_SEMAPHORE;/* synthesized block */
  void* get_Longitude_d0_SEMAPHORE;    /* synthesized block */
  void* get_LowBeamSt_d0_SEMAPHORE;    /* synthesized block */
  void* get_Pitch_d0_SEMAPHORE;        /* synthesized block */
  void* get_RightTurnLampSt_d0_SEMAPHORE;/* synthesized block */
  void* get_Roll_d0_SEMAPHORE;         /* synthesized block */
  void* get_SteeringAngle_d0_SEMAPHORE;/* synthesized block */
  void* get_SteeringAngleSpd_d0_SEMAPHORE;/* synthesized block */
  void* get_StrngWhlTorq_d0_SEMAPHORE; /* synthesized block */
  void* get_VehDrvMod_d0_SEMAPHORE;    /* synthesized block */
  void* get_VehRdySt_d0_SEMAPHORE;     /* synthesized block */
  void* get_VehRng_d0_SEMAPHORE;       /* synthesized block */
  void* get_VehSpd_d0_SEMAPHORE;       /* synthesized block */
  void* get_VehWheelTorqMax_d0_SEMAPHORE;/* synthesized block */
  void* get_YawRate_d0_SEMAPHORE;      /* synthesized block */
  void* set_Checksum1_d0_SEMAPHORE;    /* synthesized block */
  void* set_Checksum2_d0_SEMAPHORE;    /* synthesized block */
  void* set_Checksum3_d0_SEMAPHORE;    /* synthesized block */
  void* set_MsgCounter1_d0_SEMAPHORE;  /* synthesized block */
  void* set_MsgCounter2_d0_SEMAPHORE;  /* synthesized block */
  void* set_MsgCounter3_d0_SEMAPHORE;  /* synthesized block */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_AutoTrqWhlReq_test_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_BrakeReq_test_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_LatCtrlReq_test_at_outport_0_PWORK;/* synthesized block */

  void* TmpRTBAtUnitDelayInport1_d0_SEMAPHORE;/* synthesized block */
  void *ADCU2SCU_Steer_Command_CAN_write_PWORK;
                                  /* '<S19>/ADCU2SCU_Steer_Command_CAN_write' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_10_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_11_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_12_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_13_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_19_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_2_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_3_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_4_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_5_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_6_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_7_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_8_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GPCHC_Validation_at_outport_9_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Count_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Equal_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack1_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack1_at_outport_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack1_at_outport_2_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack2_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack2_at_outport_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack3_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack4_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack4_at_outport_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack5_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack5_at_outport_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack5_at_outport_2_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack_at_outport_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_GNSS2ADCU_Brake_Status_CAN_unpack_at_outport_2_PWORK;/* synthesized block */

  uint32_T get_ActVehWheelTorq_Buf0;   /* synthesized block */
  uint32_T get_ActVehWheelTorq_Buf1;   /* synthesized block */
  uint32_T get_ActVehWheelTorq_Buf2;   /* synthesized block */
  uint32_T get_LatAutoCheckReport_Buf0;/* synthesized block */
  uint32_T get_LatAutoCheckReport_Buf1;/* synthesized block */
  uint32_T get_LatAutoCheckReport_Buf2;/* synthesized block */
  uint32_T get_LatQuitReport_Buf0;     /* synthesized block */
  uint32_T get_LatQuitReport_Buf1;     /* synthesized block */
  uint32_T get_LatQuitReport_Buf2;     /* synthesized block */
  uint32_T get_LngAutoCheckIReport_Buf0;/* synthesized block */
  uint32_T get_LngAutoCheckIReport_Buf1;/* synthesized block */
  uint32_T get_LngAutoCheckIReport_Buf2;/* synthesized block */
  uint32_T get_LngQuitReport_Buf0;     /* synthesized block */
  uint32_T get_LngQuitReport_Buf1;     /* synthesized block */
  uint32_T get_LngQuitReport_Buf2;     /* synthesized block */
  uint32_T get_SteeringAngleSpd_Buf0;  /* synthesized block */
  uint32_T get_SteeringAngleSpd_Buf1;  /* synthesized block */
  uint32_T get_SteeringAngleSpd_Buf2;  /* synthesized block */
  uint32_T get_VehRng_Buf0;            /* synthesized block */
  uint32_T get_VehRng_Buf1;            /* synthesized block */
  uint32_T get_VehRng_Buf2;            /* synthesized block */
  uint32_T get_VehWheelTorqMax_Buf0;   /* synthesized block */
  uint32_T get_VehWheelTorqMax_Buf1;   /* synthesized block */
  uint32_T get_VehWheelTorqMax_Buf2;   /* synthesized block */
  uint32_T set_Checksum1_Buf0;         /* synthesized block */
  uint32_T set_Checksum1_Buf1;         /* synthesized block */
  uint32_T set_Checksum1_Buf2;         /* synthesized block */
  uint32_T set_Checksum2_Buf0;         /* synthesized block */
  uint32_T set_Checksum2_Buf1;         /* synthesized block */
  uint32_T set_Checksum2_Buf2;         /* synthesized block */
  uint32_T set_Checksum3_Buf0;         /* synthesized block */
  uint32_T set_Checksum3_Buf1;         /* synthesized block */
  uint32_T set_Checksum3_Buf2;         /* synthesized block */
  uint32_T set_MsgCounter1_Buf0;       /* synthesized block */
  uint32_T set_MsgCounter1_Buf1;       /* synthesized block */
  uint32_T set_MsgCounter1_Buf2;       /* synthesized block */
  uint32_T set_MsgCounter2_Buf0;       /* synthesized block */
  uint32_T set_MsgCounter2_Buf1;       /* synthesized block */
  uint32_T set_MsgCounter2_Buf2;       /* synthesized block */
  uint32_T set_MsgCounter3_Buf0;       /* synthesized block */
  uint32_T set_MsgCounter3_Buf1;       /* synthesized block */
  uint32_T set_MsgCounter3_Buf2;       /* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport1_Buf0;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport1_Buf1;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport1_Buf2;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport4_Buf0;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport4_Buf1;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport4_Buf2;/* synthesized block */
  Gear_request TmpRTBAtAION_auto_mode_requestInport7_Buf0;/* synthesized block */
  Gear_request TmpRTBAtAION_auto_mode_requestInport7_Buf1;/* synthesized block */
  Gear_request TmpRTBAtAION_auto_mode_requestInport7_Buf2;/* synthesized block */
  Validation_status TmpRTBAtAION_auto_mode_requestInport8_Buf0;/* synthesized block */
  Validation_status TmpRTBAtAION_auto_mode_requestInport8_Buf1;/* synthesized block */
  Validation_status TmpRTBAtAION_auto_mode_requestInport8_Buf2;/* synthesized block */
  Beam_request TmpRTBAtAION_auto_mode_requestInport15_Buf0;/* synthesized block */
  Beam_request TmpRTBAtAION_auto_mode_requestInport15_Buf1;/* synthesized block */
  Beam_request TmpRTBAtAION_auto_mode_requestInport15_Buf2;/* synthesized block */
  Enable_request TmpRTBAtAION_auto_mode_requestInport16_Buf0;/* synthesized block */
  Enable_request TmpRTBAtAION_auto_mode_requestInport16_Buf1;/* synthesized block */
  Enable_request TmpRTBAtAION_auto_mode_requestInport16_Buf2;/* synthesized block */
  Active_request TmpRTBAtAION_auto_mode_requestInport17_Buf0;/* synthesized block */
  Active_request TmpRTBAtAION_auto_mode_requestInport17_Buf1;/* synthesized block */
  Active_request TmpRTBAtAION_auto_mode_requestInport17_Buf2;/* synthesized block */
  Light_request TmpRTBAtAION_auto_mode_requestInport18_Buf0;/* synthesized block */
  Light_request TmpRTBAtAION_auto_mode_requestInport18_Buf1;/* synthesized block */
  Light_request TmpRTBAtAION_auto_mode_requestInport18_Buf2;/* synthesized block */
  Drive_status get_VehDrvMod_Buf0;     /* synthesized block */
  Drive_status get_VehDrvMod_Buf1;     /* synthesized block */
  Drive_status get_VehDrvMod_Buf2;     /* synthesized block */
  Ready_status get_VehRdySt_Buf0;      /* synthesized block */
  Ready_status get_VehRdySt_Buf1;      /* synthesized block */
  Ready_status get_VehRdySt_Buf2;      /* synthesized block */
  Gear_status get_CrntGearLvl_Buf0;    /* synthesized block */
  Gear_status get_CrntGearLvl_Buf1;    /* synthesized block */
  Gear_status get_CrntGearLvl_Buf2;    /* synthesized block */
  Control_status get_LatCtrlMode_Buf0; /* synthesized block */
  Control_status get_LatCtrlMode_Buf1; /* synthesized block */
  Control_status get_LatCtrlMode_Buf2; /* synthesized block */
  Control_status get_LngCtrlMode_Buf0; /* synthesized block */
  Control_status get_LngCtrlMode_Buf1; /* synthesized block */
  Control_status get_LngCtrlMode_Buf2; /* synthesized block */
  Available_status get_CtrlAvailable_Buf0;/* synthesized block */
  Available_status get_CtrlAvailable_Buf1;/* synthesized block */
  Available_status get_CtrlAvailable_Buf2;/* synthesized block */
  Active_status get_HazardLampSt_Buf0; /* synthesized block */
  Active_status get_HazardLampSt_Buf1; /* synthesized block */
  Active_status get_HazardLampSt_Buf2; /* synthesized block */
  Active_status get_HighBeamSt_Buf0;   /* synthesized block */
  Active_status get_HighBeamSt_Buf1;   /* synthesized block */
  Active_status get_HighBeamSt_Buf2;   /* synthesized block */
  Active_status get_HornSt_Buf0;       /* synthesized block */
  Active_status get_HornSt_Buf1;       /* synthesized block */
  Active_status get_HornSt_Buf2;       /* synthesized block */
  Active_status get_LeftTurnLampSt_Buf0;/* synthesized block */
  Active_status get_LeftTurnLampSt_Buf1;/* synthesized block */
  Active_status get_LeftTurnLampSt_Buf2;/* synthesized block */
  Active_status get_LowBeamSt_Buf0;    /* synthesized block */
  Active_status get_LowBeamSt_Buf1;    /* synthesized block */
  Active_status get_LowBeamSt_Buf2;    /* synthesized block */
  Active_status get_RightTurnLampSt_Buf0;/* synthesized block */
  Active_status get_RightTurnLampSt_Buf1;/* synthesized block */
  Active_status get_RightTurnLampSt_Buf2;/* synthesized block */
  IMU_Status get_IMUWorkStatus_Buf0;   /* synthesized block */
  IMU_Status get_IMUWorkStatus_Buf1;   /* synthesized block */
  IMU_Status get_IMUWorkStatus_Buf2;   /* synthesized block */
  int_T CANSetup_IWORK;                /* '<S2>/CAN Setup' */
  int_T ADCU2SCU_Brake_Command_CAN_pack_ModeSignalID;
                                   /* '<S19>/ADCU2SCU_Brake_Command_CAN_pack' */
  int_T ADCU2SCU_Brake_Command_CAN_write_IWORK;
                                  /* '<S19>/ADCU2SCU_Brake_Command_CAN_write' */
  int_T ADCU2SCU_Gear_Command_CAN_pack_ModeSignalID;
                                    /* '<S19>/ADCU2SCU_Gear_Command_CAN_pack' */
  int_T ADCU2SCU_Gear_Command_CAN_write_IWORK;
                                   /* '<S19>/ADCU2SCU_Gear_Command_CAN_write' */
  int_T ADCU2SCU_Steer_Command_CAN_pack_ModeSignalID;
                                   /* '<S19>/ADCU2SCU_Steer_Command_CAN_pack' */
  int_T LegacySerialRead_IWORK[2];     /* '<S16>/Legacy Serial Read' */
  int_T FIFOwrite_IWORK[3];            /* '<S16>/FIFO write' */
  int_T LegacySerialWrite_IWORK;       /* '<S16>/Legacy Serial Write' */
  int_T Setup_IWORK;                   /* '<S16>/Setup' */
  int_T GPCHCDecode_IWORK[4];          /* '<S15>/GPCHC Decode ' */
  int_T ADCU2SCU_Steer_Command_CAN_write_IWORK;
                                  /* '<S19>/ADCU2SCU_Steer_Command_CAN_write' */
  int_T SCU2ADCU_CAN_read_IWORK;       /* '<S12>/SCU2ADCU_CAN_read' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack_ModeSignalID;
                                  /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack_StatusPortID;
                                  /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack1_ModeSignalID;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack1_StatusPortID;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack10_ModeSignalID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack10_StatusPortID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack11_ModeSignalID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack11_StatusPortID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack12_ModeSignalID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack12_StatusPortID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack13_ModeSignalID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack13_StatusPortID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack14_ModeSignalID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack14_StatusPortID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack15_ModeSignalID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack15_StatusPortID;
                                /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack6_ModeSignalID;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack6_StatusPortID;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack7_ModeSignalID;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack7_StatusPortID;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack8_ModeSignalID;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack8_StatusPortID;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack9_ModeSignalID;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack9_StatusPortID;
                                 /* '<S14>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  int_T SCU2ADCU_Status1_CAN_unpack1_ModeSignalID;
                                      /* '<S14>/SCU2ADCU_Status1_CAN_unpack1' */
  int_T SCU2ADCU_Status1_CAN_unpack1_StatusPortID;
                                      /* '<S14>/SCU2ADCU_Status1_CAN_unpack1' */
  int_T IMU2ADCU_CAN_read_IWORK;       /* '<S11>/IMU2ADCU_CAN_read' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack1_ModeSignalID;
                                /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack1' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack1_StatusPortID;
                                /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack1' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack2_ModeSignalID;
                                /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack2' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack2_StatusPortID;
                                /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack2' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack3_ModeSignalID;
                                /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack3' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack3_StatusPortID;
                                /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack3' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack4_ModeSignalID;
                                /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack4' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack4_StatusPortID;
                                /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack4' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack5_ModeSignalID;
                                /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack5' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack5_StatusPortID;
                                /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack5' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack_ModeSignalID;
                                 /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack' */
  int_T GNSS2ADCU_Brake_Status_CAN_unpack_StatusPortID;
                                 /* '<S13>/GNSS2ADCU_Brake_Status_CAN_unpack' */
  int8_T RT2_LstBufWR;                 /* '<S19>/RT2' */
  int8_T RT2_RDBuf;                    /* '<S19>/RT2' */
  int8_T TmpRTBAtSwitch1Inport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch1Inport1_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitch2Inport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch2Inport1_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitch3Inport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch3Inport1_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitch4Inport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch4Inport1_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitch5Inport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch5Inport1_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitch6Inport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch6Inport1_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitch7Inport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch7Inport1_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitch8Inport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch8Inport1_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitch9Inport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitch9Inport1_RDBuf; /* synthesized block */
  int8_T TmpRTBAtSwitchInport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtSwitchInport1_RDBuf;  /* synthesized block */
  int8_T S_GPSTime_LstBufWR;           /* '<S15>/S_GPSTime' */
  int8_T S_GPSTime_RDBuf;              /* '<S15>/S_GPSTime' */
  int8_T S_GPSWeek_LstBufWR;           /* '<S15>/S_GPSWeek' */
  int8_T S_GPSWeek_RDBuf;              /* '<S15>/S_GPSWeek' */
  int8_T S_IMUWorkStatus_LstBufWR;     /* '<S15>/S_IMUWorkStatus' */
  int8_T S_IMUWorkStatus_RDBuf;        /* '<S15>/S_IMUWorkStatus' */
  int8_T S_Pitch_LstBufWR;             /* '<S15>/S_Pitch' */
  int8_T S_Pitch_RDBuf;                /* '<S15>/S_Pitch' */
  int8_T S_Roll_LstBufWR;              /* '<S15>/S_Roll' */
  int8_T S_Roll_RDBuf;                 /* '<S15>/S_Roll' */
  int8_T count_LstBufWR;               /* '<S15>/count' */
  int8_T count_RDBuf;                  /* '<S15>/count' */
  int8_T S_AccelerationX_LstBufWR;     /* synthesized block */
  int8_T S_AccelerationX_RDBuf;        /* synthesized block */
  int8_T S_AccelerationY_LstBufWR;     /* synthesized block */
  int8_T S_AccelerationY_RDBuf;        /* synthesized block */
  int8_T S_AccelerationZ_LstBufWR;     /* synthesized block */
  int8_T S_AccelerationZ_RDBuf;        /* synthesized block */
  int8_T S_Altitude_LstBufWR;          /* synthesized block */
  int8_T S_Altitude_RDBuf;             /* synthesized block */
  int8_T S_AngleSpeedX_LstBufWR;       /* synthesized block */
  int8_T S_AngleSpeedX_RDBuf;          /* synthesized block */
  int8_T S_AngleSpeedY_LstBufWR;       /* synthesized block */
  int8_T S_AngleSpeedY_RDBuf;          /* synthesized block */
  int8_T S_AngleSpeedZ_LstBufWR;       /* synthesized block */
  int8_T S_AngleSpeedZ_RDBuf;          /* synthesized block */
  int8_T S_Heading_LstBufWR;           /* synthesized block */
  int8_T S_Heading_RDBuf;              /* synthesized block */
  int8_T S_Latitude_LstBufWR;          /* synthesized block */
  int8_T S_Latitude_RDBuf;             /* synthesized block */
  int8_T S_Longitude_LstBufWR;         /* synthesized block */
  int8_T S_Longitude_RDBuf;            /* synthesized block */
  int8_T AutoTrqWhlReq_test_LstBufWR;  /* synthesized block */
  int8_T AutoTrqWhlReq_test_RDBuf;     /* synthesized block */
  int8_T BrakeReq_test_LstBufWR;       /* synthesized block */
  int8_T BrakeReq_test_RDBuf;          /* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport1_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport15_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport15_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport16_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport16_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport17_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport17_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport18_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport18_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport2_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport2_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport3_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport3_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport4_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport4_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport7_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport7_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport8_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport8_RDBuf;/* synthesized block */
  int8_T get_AccelerationX_LstBufWR;   /* synthesized block */
  int8_T get_AccelerationX_RDBuf;      /* synthesized block */
  int8_T get_AccelerationY_LstBufWR;   /* synthesized block */
  int8_T get_AccelerationY_RDBuf;      /* synthesized block */
  int8_T get_AccelerationZ_LstBufWR;   /* synthesized block */
  int8_T get_AccelerationZ_RDBuf;      /* synthesized block */
  int8_T get_ActVehLaltrlAccel_LstBufWR;/* synthesized block */
  int8_T get_ActVehLaltrlAccel_RDBuf;  /* synthesized block */
  int8_T get_ActVehLongAccel_LstBufWR; /* synthesized block */
  int8_T get_ActVehLongAccel_RDBuf;    /* synthesized block */
  int8_T get_ActVehWheelTorq_LstBufWR; /* synthesized block */
  int8_T get_ActVehWheelTorq_RDBuf;    /* synthesized block */
  int8_T get_Altitude_LstBufWR;        /* synthesized block */
  int8_T get_Altitude_RDBuf;           /* synthesized block */
  int8_T get_AngleSpeedX_LstBufWR;     /* synthesized block */
  int8_T get_AngleSpeedX_RDBuf;        /* synthesized block */
  int8_T get_AngleSpeedY_LstBufWR;     /* synthesized block */
  int8_T get_AngleSpeedY_RDBuf;        /* synthesized block */
  int8_T get_AngleSpeedZ_LstBufWR;     /* synthesized block */
  int8_T get_AngleSpeedZ_RDBuf;        /* synthesized block */
  int8_T get_CrntGearLvl_LstBufWR;     /* synthesized block */
  int8_T get_CrntGearLvl_RDBuf;        /* synthesized block */
  int8_T get_CtrlAvailable_LstBufWR;   /* synthesized block */
  int8_T get_CtrlAvailable_RDBuf;      /* synthesized block */
  int8_T get_GPSTime_LstBufWR;         /* synthesized block */
  int8_T get_GPSTime_RDBuf;            /* synthesized block */
  int8_T get_GPSWeek_LstBufWR;         /* synthesized block */
  int8_T get_GPSWeek_RDBuf;            /* synthesized block */
  int8_T get_GasPedalActPst_LstBufWR;  /* synthesized block */
  int8_T get_GasPedalActPst_RDBuf;     /* synthesized block */
  int8_T get_HazardLampSt_LstBufWR;    /* synthesized block */
  int8_T get_HazardLampSt_RDBuf;       /* synthesized block */
  int8_T get_Heading_LstBufWR;         /* synthesized block */
  int8_T get_Heading_RDBuf;            /* synthesized block */
  int8_T get_HighBeamSt_LstBufWR;      /* synthesized block */
  int8_T get_HighBeamSt_RDBuf;         /* synthesized block */
  int8_T get_HornSt_LstBufWR;          /* synthesized block */
  int8_T get_HornSt_RDBuf;             /* synthesized block */
  int8_T get_IMUWorkStatus_LstBufWR;   /* synthesized block */
  int8_T get_IMUWorkStatus_RDBuf;      /* synthesized block */
  int8_T get_LatAutoCheckReport_LstBufWR;/* synthesized block */
  int8_T get_LatAutoCheckReport_RDBuf; /* synthesized block */
  int8_T get_LatCtrlMode_LstBufWR;     /* synthesized block */
  int8_T get_LatCtrlMode_RDBuf;        /* synthesized block */
  int8_T get_LatQuitReport_LstBufWR;   /* synthesized block */
  int8_T get_LatQuitReport_RDBuf;      /* synthesized block */
  int8_T get_Latitude_LstBufWR;        /* synthesized block */
  int8_T get_Latitude_RDBuf;           /* synthesized block */
  int8_T get_LeftTurnLampSt_LstBufWR;  /* synthesized block */
  int8_T get_LeftTurnLampSt_RDBuf;     /* synthesized block */
  int8_T get_LngAutoCheckIReport_LstBufWR;/* synthesized block */
  int8_T get_LngAutoCheckIReport_RDBuf;/* synthesized block */
  int8_T get_LngCtrlMode_LstBufWR;     /* synthesized block */
  int8_T get_LngCtrlMode_RDBuf;        /* synthesized block */
  int8_T get_LngQuitReport_LstBufWR;   /* synthesized block */
  int8_T get_LngQuitReport_RDBuf;      /* synthesized block */
  int8_T get_Longitude_LstBufWR;       /* synthesized block */
  int8_T get_Longitude_RDBuf;          /* synthesized block */
  int8_T get_LowBeamSt_LstBufWR;       /* synthesized block */
  int8_T get_LowBeamSt_RDBuf;          /* synthesized block */
  int8_T get_Pitch_LstBufWR;           /* synthesized block */
  int8_T get_Pitch_RDBuf;              /* synthesized block */
  int8_T get_RightTurnLampSt_LstBufWR; /* synthesized block */
  int8_T get_RightTurnLampSt_RDBuf;    /* synthesized block */
  int8_T get_Roll_LstBufWR;            /* synthesized block */
  int8_T get_Roll_RDBuf;               /* synthesized block */
  int8_T get_SteeringAngle_LstBufWR;   /* synthesized block */
  int8_T get_SteeringAngle_RDBuf;      /* synthesized block */
  int8_T get_SteeringAngleSpd_LstBufWR;/* synthesized block */
  int8_T get_SteeringAngleSpd_RDBuf;   /* synthesized block */
  int8_T get_StrngWhlTorq_LstBufWR;    /* synthesized block */
  int8_T get_StrngWhlTorq_RDBuf;       /* synthesized block */
  int8_T get_VehDrvMod_LstBufWR;       /* synthesized block */
  int8_T get_VehDrvMod_RDBuf;          /* synthesized block */
  int8_T get_VehRdySt_LstBufWR;        /* synthesized block */
  int8_T get_VehRdySt_RDBuf;           /* synthesized block */
  int8_T get_VehRng_LstBufWR;          /* synthesized block */
  int8_T get_VehRng_RDBuf;             /* synthesized block */
  int8_T get_VehSpd_LstBufWR;          /* synthesized block */
  int8_T get_VehSpd_RDBuf;             /* synthesized block */
  int8_T get_VehWheelTorqMax_LstBufWR; /* synthesized block */
  int8_T get_VehWheelTorqMax_RDBuf;    /* synthesized block */
  int8_T get_YawRate_LstBufWR;         /* synthesized block */
  int8_T get_YawRate_RDBuf;            /* synthesized block */
  int8_T set_Checksum1_LstBufWR;       /* synthesized block */
  int8_T set_Checksum1_RDBuf;          /* synthesized block */
  int8_T set_Checksum2_LstBufWR;       /* synthesized block */
  int8_T set_Checksum2_RDBuf;          /* synthesized block */
  int8_T set_Checksum3_LstBufWR;       /* synthesized block */
  int8_T set_Checksum3_RDBuf;          /* synthesized block */
  int8_T set_MsgCounter1_LstBufWR;     /* synthesized block */
  int8_T set_MsgCounter1_RDBuf;        /* synthesized block */
  int8_T set_MsgCounter2_LstBufWR;     /* synthesized block */
  int8_T set_MsgCounter2_RDBuf;        /* synthesized block */
  int8_T set_MsgCounter3_LstBufWR;     /* synthesized block */
  int8_T set_MsgCounter3_RDBuf;        /* synthesized block */
  int8_T TmpRTBAtUnitDelayInport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtUnitDelayInport1_RDBuf;/* synthesized block */
  MdlrefDW_AION_signal_transfer_T Signal_Transfer_InstanceData;/* '<S2>/Signal_Transfer' */
  MdlrefDW_AION_auto_mode_request_T AION_auto_mode_request_InstanceData;/* '<S1>/AION_auto_mode_request' */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_IDS_SPEEDGOAT_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[4];
    SimStruct childSFunctions[10];
    SimStruct *childSFunctionPtrs[10];
    struct _ssBlkInfo2 blkInfo2[10];
    struct _ssSFcnModelMethods2 methods2[10];
    struct _ssSFcnModelMethods3 methods3[10];
    struct _ssSFcnModelMethods4 methods4[10];
    struct _ssStatesInfo2 statesInfo2[10];
    ssPeriodicStatesInfo periodicStatesInfo[10];
    struct _ssPortInfo2 inputOutputPortInfo2[10];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[31];
      mxArray *params[31];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn4;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[4];
      mxArray *params[4];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn5;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[3];
      mxArray *params[3];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn6;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn7;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      struct _ssPortOutputs outputPortInfo[1];
      struct _ssOutPortUnit outputPortUnits[1];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[1];
      uint_T attribs[8];
      mxArray *params[8];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn8;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn9;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    uint32_T clockTick3;
    uint32_T clockTickH3;
    struct {
      uint32_T TID[4];
      uint32_T cLimit[4];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[4];
    time_T offsetTimesArray[4];
    int_T sampleTimeTaskIDArray[4];
    int_T sampleHitArray[4];
    int_T perTaskSampleHitsArray[16];
    time_T tArray[4];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_AION_IDS_SPEEDGOAT_T AION_IDS_SPEEDGOAT_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_AION_IDS_SPEEDGOAT_T AION_IDS_SPEEDGOAT_DW;

/* External data declarations for dependent source files */
extern const real_T AION_IDS_SPEEDGOAT_RGND;/* real_T ground */
extern const uint8_T AION_IDS_SPEEDGOAT_U8GND;/* uint8_T ground */
extern const AION_ApplicationBus AION_IDS_SPEEDGOAT_rtZAION_ApplicationBus;/* AION_ApplicationBus ground */

/* Model block global parameters (default storage) */
extern real_T rtP_AutoTrqWhlReq_test;  /* Variable: AutoTrqWhlReq_test
                                        * Referenced by: '<S5>/AutoTrqWhlReq_test'
                                        */
extern real_T rtP_BeamReq_test;        /* Variable: BeamReq_test
                                        * Referenced by: '<S5>/BeamReq_test'
                                        */
extern real_T rtP_BodyCtrlReq_test;    /* Variable: BodyCtrlReq_test
                                        * Referenced by: '<S5>/BodyCtrlReq_test'
                                        */
extern real_T rtP_BrakeReq_test;       /* Variable: BrakeReq_test
                                        * Referenced by: '<S5>/BrakeReq_test'
                                        */
extern real_T rtP_GearLvlReqVD_test;   /* Variable: GearLvlReqVD_test
                                        * Referenced by: '<S5>/GearLvlReqVD_test'
                                        */
extern real_T rtP_GearLvlReq_test;     /* Variable: GearLvlReq_test
                                        * Referenced by: '<S5>/GearLvlReq_test'
                                        */
extern real_T rtP_HornRingReq_test;    /* Variable: HornRingReq_test
                                        * Referenced by: '<S5>/HornRingReq_test'
                                        */
extern real_T rtP_IMU_ADCU_CYCLE_TIME; /* Variable: IMU_ADCU_CYCLE_TIME
                                        * Referenced by: '<S9>/IMU2ADCU_SampleTime'
                                        */
extern real_T rtP_LatCtrlReq_test;     /* Variable: LatCtrlReq_test
                                        * Referenced by: '<S5>/LatCtrlReq_test'
                                        */
extern real_T rtP_LngCtrlReq_test;     /* Variable: LngCtrlReq_test
                                        * Referenced by: '<S5>/LngCtrlReq_test'
                                        */
extern real_T rtP_O_ALTITUDE;          /* Variable: O_ALTITUDE
                                        * Referenced by: '<S17>/Constant4'
                                        */
extern real_T rtP_O_LATITUDE;          /* Variable: O_LATITUDE
                                        * Referenced by: '<S17>/Constant2'
                                        */
extern real_T rtP_O_LONGITUDE;         /* Variable: O_LONGITUDE
                                        * Referenced by: '<S17>/Constant3'
                                        */
extern real_T rtP_SCU_ADCU_CYCLE_TIME; /* Variable: SCU_ADCU_CYCLE_TIME
                                        * Referenced by: '<S9>/SCU2ADCU_SampleTime(s)'
                                        */
extern real_T rtP_SteerAngReq_test;    /* Variable: SteerAngReq_test
                                        * Referenced by: '<S5>/SteerAngReq_test'
                                        */
extern real_T rtP_SteerWhlTorqReq_test;/* Variable: SteerWhlTorqReq_test
                                        * Referenced by: '<S5>/SteerWhlTorqReq_test'
                                        */
extern real_T rtP_TurnLightReq_test;   /* Variable: TurnLightReq_test
                                        * Referenced by: '<S5>/TurnLightReq_test'
                                        */
extern void rate_scheduler(void);

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void AION_IDS_SPEEDGOAT_initialize(void);
  extern void AION_IDS_SPEEDGOAT_step0(void);
  extern void AION_IDS_SPEEDGOAT_step1(void);
  extern void AION_IDS_SPEEDGOAT_step2(void);
  extern void AION_IDS_SPEEDGOAT_step3(void);
  extern void AION_IDS_SPEEDGOAT_step(int_T tid);
  extern void AION_IDS_SPEEDGOAT_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_AION_IDS_SPEEDGOAT_T *const AION_IDS_SPEEDGOAT_M;

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
 * '<Root>' : 'AION_IDS_SPEEDGOAT'
 * '<S1>'   : 'AION_IDS_SPEEDGOAT/Application_Layer'
 * '<S2>'   : 'AION_IDS_SPEEDGOAT/Communication_Layer'
 * '<S3>'   : 'AION_IDS_SPEEDGOAT/DashBoard'
 * '<S4>'   : 'AION_IDS_SPEEDGOAT/DocBlock'
 * '<S5>'   : 'AION_IDS_SPEEDGOAT/Application_Layer/Initialization'
 * '<S6>'   : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test'
 * '<S7>'   : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort'
 * '<S8>'   : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort'
 * '<S9>'   : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN'
 * '<S10>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputSerial'
 * '<S11>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN/IMU2ADCU(IDS)_loop_receive'
 * '<S12>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN/SCU2ADCU(IDS)_loop_receive'
 * '<S13>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN/IMU2ADCU(IDS)_loop_receive/CAN_unpack_IMU2ADCU'
 * '<S14>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN/SCU2ADCU(IDS)_loop_receive/CAN_unpack_SCU2ADCU'
 * '<S15>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputSerial/GNSS2ADCU'
 * '<S16>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputSerial/GNSS2ADCU/Baseboard Serial F'
 * '<S17>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputSerial/GNSS2ADCU/GPCHC_Validation'
 * '<S18>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN'
 * '<S19>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN/CAN_pack_ADCU2SCU'
 */
#endif                                 /* RTW_HEADER_AION_IDS_SPEEDGOAT_h_ */
