/*
 * AION_IDS_SPEEDGOAT.h
 *
 * Code generation for model "AION_IDS_SPEEDGOAT".
 *
 * Model version              : 4.253
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Fri Jun  3 21:01:02 2022
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
#include <math.h>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "can_message.h"
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
                                   /* '<S13>/ADCU2SCU_Brake_Command_CAN_pack' */
  CAN_DATATYPE RT_f;                   /* '<S13>/RT' */
  CAN_DATATYPE ADCU2SCU_Gear_Command_CAN_pack;
                                    /* '<S13>/ADCU2SCU_Gear_Command_CAN_pack' */
  CAN_DATATYPE RT1;                    /* '<S13>/RT1' */
  CAN_DATATYPE ADCU2SCU_Steer_Command_CAN_pack;
                                   /* '<S13>/ADCU2SCU_Steer_Command_CAN_pack' */
  CAN_DATATYPE RT2;                    /* '<S13>/RT2' */
  CAN_DATATYPE SCU2ADCU_CAN_read_o2;   /* '<S10>/SCU2ADCU_CAN_read' */
  real_T SCU2ADCU_SampleTimes;         /* '<S9>/SCU2ADCU_SampleTime(s)' */
  real_T set_SteerAngReq;              /* '<S2>/Signal_Transfer' */
  real_T set_AutoTrqWhlReq;            /* '<S2>/Signal_Transfer' */
  real_T set_BrakeReq;                 /* '<S2>/Signal_Transfer' */
  real_T get_VehSpd;                   /* '<S2>/Signal_Transfer' */
  real_T get_YawRate;                  /* '<S2>/Signal_Transfer' */
  real_T get_ActVehLaltrlAccel;        /* '<S2>/Signal_Transfer' */
  real_T get_ActVehLongAccel;          /* '<S2>/Signal_Transfer' */
  real_T get_GasPedalActPst;           /* '<S2>/Signal_Transfer' */
  real_T get_SteeringAngle;            /* '<S2>/Signal_Transfer' */
  real_T get_StrngWhlTorq;             /* '<S2>/Signal_Transfer' */
  real_T ADCU_AutoTrqWhlReq;           /* '<S2>/Signal_Transfer' */
  real_T ADCU_BrakeReq;                /* '<S2>/Signal_Transfer' */
  real_T ADCU_GearLvlReq;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_GearLvlReqVD;            /* '<S2>/Signal_Transfer' */
  real_T ADCU_LngCtrlReq;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_LatCtrlReq;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_SteerAngReq;             /* '<S2>/Signal_Transfer' */
  real_T ADCU_BeamReq;                 /* '<S2>/Signal_Transfer' */
  real_T ADCU_BodyCtrlReq;             /* '<S2>/Signal_Transfer' */
  real_T ADCU_HornRingReq;             /* '<S2>/Signal_Transfer' */
  real_T ADCU_TurnLightReq;            /* '<S2>/Signal_Transfer' */
  real_T AutoTrqWhlReq_test;           /* '<S5>/AutoTrqWhlReq_test' */
  real_T BrakeReq_test;                /* '<S5>/BrakeReq_test' */
  real_T LatCtrlReq_test;              /* '<S5>/LatCtrlReq_test' */
  real_T get_SteeringAngle_m;          /* '<S1>/RT1' */
  real_T get_SteeringAngle_d;          /* '<S6>/Signal Copy3' */
  real_T get_VehSpd_a;                 /* '<S1>/RT1' */
  real_T get_VehSpd_h;                 /* '<S6>/Signal Copy6' */
  real_T TmpRTBAtAION_auto_mode_requestInport2;
  real_T AutoTrqWhlReq_test_p;
  real_T BrakeReq_test_e;
  real_T get_YawRate_o;                /* '<S1>/RT1' */
  real_T get_ActVehLaltrlAccel_f;      /* '<S1>/RT1' */
  real_T get_ActVehLongAccel_a;        /* '<S1>/RT1' */
  real_T get_GasPedalActPst_f;         /* '<S1>/RT1' */
  real_T get_StrngWhlTorq_e;           /* '<S1>/RT1' */
  real_T set_SteerAngReq_k;            /* '<S1>/AION_auto_mode_request' */
  real_T set_AutoTrqWhlReq_g;          /* '<S1>/AION_auto_mode_request' */
  real_T set_BrakeReq_e;               /* '<S1>/AION_auto_mode_request' */
  real_T get_VehSpd_d;                 /* '<S1>/AION_auto_mode_request' */
  real_T get_YawRate_a;                /* '<S1>/AION_auto_mode_request' */
  real_T get_ActVehLaltrlAccel_a;      /* '<S1>/AION_auto_mode_request' */
  real_T get_ActVehLongAccel_h;        /* '<S1>/AION_auto_mode_request' */
  real_T get_GasPedalActPst_l;         /* '<S1>/AION_auto_mode_request' */
  real_T get_SteeringAngle_l;          /* '<S1>/AION_auto_mode_request' */
  real_T get_StrngWhlTorq_d;           /* '<S1>/AION_auto_mode_request' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o1;
                                  /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o2;
                                  /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o3;
                                  /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack1;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o1;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o2;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o3;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o4;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o5;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o6;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o7;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o8;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack11_o1;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack11_o2;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack11_o3;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack12_o1;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack12_o2;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack13;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o1;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o2;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o3;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack15;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o1;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o2;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack7;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o1;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o2;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o3;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o4;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o5;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack9_o1;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack9_o2;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o1;
                                      /* '<S11>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o2;
                                      /* '<S11>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o3;
                                      /* '<S11>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o4;
                                      /* '<S11>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o5;
                                      /* '<S11>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o6;
                                      /* '<S11>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o7;
                                      /* '<S11>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o8;
                                      /* '<S11>/SCU2ADCU_Status1_CAN_unpack1' */
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
  uint32_T set_Checksum1_n;            /* '<S1>/RT1' */
  uint32_T set_MsgCounter1_a;          /* '<S1>/RT1' */
  uint32_T set_Checksum2_o;            /* '<S1>/RT1' */
  uint32_T set_MsgCounter2_g;          /* '<S1>/RT1' */
  uint32_T set_Checksum3_j;            /* '<S1>/RT1' */
  uint32_T set_MsgCounter3_k;          /* '<S1>/RT1' */
  uint32_T get_ActVehWheelTorq_d;      /* '<S1>/RT1' */
  uint32_T get_VehRng_j;               /* '<S1>/RT1' */
  uint32_T get_VehWheelTorqMax_d;      /* '<S1>/RT1' */
  uint32_T get_LatAutoCheckReport_d;   /* '<S1>/RT1' */
  uint32_T get_LatQuitReport_d;        /* '<S1>/RT1' */
  uint32_T get_LngAutoCheckIReport_e;  /* '<S1>/RT1' */
  uint32_T get_LngQuitReport_o;        /* '<S1>/RT1' */
  uint32_T get_SteeringAngleSpd_j;     /* '<S1>/RT1' */
  uint32_T set_Checksum1_b;            /* '<S1>/AION_auto_mode_request' */
  uint32_T set_MsgCounter1_i;          /* '<S1>/AION_auto_mode_request' */
  uint32_T set_Checksum2_j;            /* '<S1>/AION_auto_mode_request' */
  uint32_T set_MsgCounter2_f;          /* '<S1>/AION_auto_mode_request' */
  uint32_T set_Checksum3_o;            /* '<S1>/AION_auto_mode_request' */
  uint32_T set_MsgCounter3_b;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_ActVehWheelTorq_g;      /* '<S1>/AION_auto_mode_request' */
  uint32_T get_VehRng_d;               /* '<S1>/AION_auto_mode_request' */
  uint32_T get_VehWheelTorqMax_k;      /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LatAutoCheckReport_g;   /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LatQuitReport_c;        /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LngAutoCheckIReport_l;  /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LngQuitReport_j;        /* '<S1>/AION_auto_mode_request' */
  uint32_T get_SteeringAngleSpd_i;     /* '<S1>/AION_auto_mode_request' */
  Validation_status set_GearLvlReqVD;  /* '<S2>/Signal_Transfer' */
  Validation_status DataTypeConversion4;/* '<S5>/Data Type Conversion4' */
  Validation_status TmpRTBAtAION_auto_mode_requestInport7;
  Validation_status set_GearLvlReqVD_a;/* '<S1>/AION_auto_mode_request' */
  Ready_status get_VehRdySt;           /* '<S2>/Signal_Transfer' */
  Ready_status get_VehRdySt_c;         /* '<S1>/RT1' */
  Ready_status get_VehRdySt_g;         /* '<S6>/Signal Copy' */
  Ready_status get_VehRdySt_a;         /* '<S1>/AION_auto_mode_request' */
  Light_request set_TurnLightReq;      /* '<S2>/Signal_Transfer' */
  Light_request DataTypeConversion14;  /* '<S5>/Data Type Conversion14' */
  Light_request TmpRTBAtAION_auto_mode_requestInport17;
  Light_request set_TurnLightReq_j;    /* '<S1>/AION_auto_mode_request' */
  Gear_status get_CrntGearLvl;         /* '<S2>/Signal_Transfer' */
  Gear_status get_CrntGearLvl_g;       /* '<S1>/RT1' */
  Gear_status get_CrntGearLvl_e;       /* '<S1>/AION_auto_mode_request' */
  Gear_request set_GearLvlReq;         /* '<S2>/Signal_Transfer' */
  Gear_request DataTypeConversion2;    /* '<S5>/Data Type Conversion2' */
  Gear_request TmpRTBAtAION_auto_mode_requestInport6;
  Gear_request set_GearLvlReq_o;       /* '<S1>/AION_auto_mode_request' */
  Enable_request set_BodyCtrlReq;      /* '<S2>/Signal_Transfer' */
  Enable_request DataTypeConversion12; /* '<S5>/Data Type Conversion12' */
  Enable_request TmpRTBAtAION_auto_mode_requestInport15;
  Enable_request set_BodyCtrlReq_b;    /* '<S1>/AION_auto_mode_request' */
  Drive_status get_VehDrvMod;          /* '<S2>/Signal_Transfer' */
  Drive_status get_VehDrvMod_a;        /* '<S1>/RT1' */
  Drive_status get_VehDrvMod_j;        /* '<S6>/Signal Copy1' */
  Drive_status get_VehDrvMod_b;        /* '<S1>/AION_auto_mode_request' */
  Control_status get_LatCtrlMode;      /* '<S2>/Signal_Transfer' */
  Control_status get_LngCtrlMode;      /* '<S2>/Signal_Transfer' */
  Control_status get_LatCtrlMode_l;    /* '<S1>/RT1' */
  Control_status get_LatCtrlMode_h;    /* '<S6>/Signal Copy2' */
  Control_status get_LngCtrlMode_i;    /* '<S1>/RT1' */
  Control_status get_LngCtrlMode_f;    /* '<S6>/Signal Copy4' */
  Control_status get_LatCtrlMode_o;    /* '<S1>/AION_auto_mode_request' */
  Control_status get_LngCtrlMode_l;    /* '<S1>/AION_auto_mode_request' */
  Control_request set_LatCtrlReq;      /* '<S2>/Signal_Transfer' */
  Control_request set_LngCtrlReq;      /* '<S2>/Signal_Transfer' */
  Control_request DataTypeConversion7; /* '<S5>/Data Type Conversion7' */
  Control_request DataTypeConversion9; /* '<S5>/Data Type Conversion9' */
  Control_request TmpRTBAtAION_auto_mode_requestInport1;
  Control_request TmpRTBAtAION_auto_mode_requestInport3;
  Control_request set_LatCtrlReq_n;    /* '<S1>/AION_auto_mode_request' */
  Control_request set_LngCtrlReq_p;    /* '<S1>/AION_auto_mode_request' */
  Beam_request set_BeamReq;            /* '<S2>/Signal_Transfer' */
  Beam_request DataTypeConversion18;   /* '<S5>/Data Type Conversion18' */
  Beam_request TmpRTBAtAION_auto_mode_requestInport14;
  Beam_request set_BeamReq_i;          /* '<S1>/AION_auto_mode_request' */
  Available_status get_CtrlAvailable;  /* '<S2>/Signal_Transfer' */
  Available_status get_CtrlAvailable_j;/* '<S1>/RT1' */
  Available_status get_CtrlAvailable_a;/* '<S6>/Signal Copy7' */
  Available_status get_CtrlAvailable_jx;/* '<S1>/AION_auto_mode_request' */
  Active_status get_HazardLampSt;      /* '<S2>/Signal_Transfer' */
  Active_status get_HighBeamSt;        /* '<S2>/Signal_Transfer' */
  Active_status get_HornSt;            /* '<S2>/Signal_Transfer' */
  Active_status get_LeftTurnLampSt;    /* '<S2>/Signal_Transfer' */
  Active_status get_LowBeamSt;         /* '<S2>/Signal_Transfer' */
  Active_status get_RightTurnLampSt;   /* '<S2>/Signal_Transfer' */
  Active_status get_RightTurnLampSt_l; /* '<S1>/RT1' */
  Active_status get_LowBeamSt_n;       /* '<S6>/Signal Copy10' */
  Active_status get_LeftTurnLampSt_g;  /* '<S1>/RT1' */
  Active_status get_HighBeamSt_o;      /* '<S6>/Signal Copy11' */
  Active_status get_HighBeamSt_d;      /* '<S1>/RT1' */
  Active_status get_LeftTurnLampSt_j;  /* '<S6>/Signal Copy12' */
  Active_status get_LowBeamSt_i;       /* '<S1>/RT1' */
  Active_status get_RightTurnLampSt_e; /* '<S6>/Signal Copy13' */
  Active_status get_HazardLampSt_g;    /* '<S1>/RT1' */
  Active_status get_HazardLampSt_h;    /* '<S6>/Signal Copy8' */
  Active_status get_HornSt_f;          /* '<S1>/RT1' */
  Active_status get_HornSt_m;          /* '<S6>/Signal Copy9' */
  Active_status get_HazardLampSt_o;    /* '<S1>/AION_auto_mode_request' */
  Active_status get_HighBeamSt_f;      /* '<S1>/AION_auto_mode_request' */
  Active_status get_HornSt_n;          /* '<S1>/AION_auto_mode_request' */
  Active_status get_LeftTurnLampSt_k;  /* '<S1>/AION_auto_mode_request' */
  Active_status get_LowBeamSt_g;       /* '<S1>/AION_auto_mode_request' */
  Active_status get_RightTurnLampSt_c; /* '<S1>/AION_auto_mode_request' */
  Active_request set_HornRingReq;      /* '<S2>/Signal_Transfer' */
  Active_request DataTypeConversion16; /* '<S5>/Data Type Conversion16' */
  Active_request TmpRTBAtAION_auto_mode_requestInport16;
  Active_request set_HornRingReq_m;    /* '<S1>/AION_auto_mode_request' */
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
  uint8_T DataTypeConversion8;         /* '<S5>/Data Type Conversion8' */
  uint8_T DataTypeConversion17;        /* '<S5>/Data Type Conversion17' */
  uint8_T DataTypeConversion11;        /* '<S5>/Data Type Conversion11' */
  uint8_T DataTypeConversion15;        /* '<S5>/Data Type Conversion15' */
  uint8_T DataTypeConversion13;        /* '<S5>/Data Type Conversion13' */
  uint8_T DataTypeConversion10;        /* '<S5>/Data Type Conversion10' */
  uint8_T DataTypeConversion3;         /* '<S5>/Data Type Conversion3' */
  uint8_T DataTypeConversion1;         /* '<S5>/Data Type Conversion1' */
  uint8_T get_GearLeverIntv_d;         /* '<S1>/RT1' */
  uint8_T get_CrntGearLvl_f;           /* '<S6>/Signal Copy5' */
  uint8_T get_ABSActiveSt_j;           /* '<S1>/RT1' */
  uint8_T get_VehSpdVD_a;              /* '<S1>/RT1' */
  uint8_T get_CrntGearLvlVD_p;         /* '<S1>/RT1' */
  uint8_T get_AccElecECFail_b;         /* '<S1>/RT1' */
  uint8_T get_BrkPedalSt_d;            /* '<S1>/RT1' */
  uint8_T get_StrngWhlIntv_g;          /* '<S1>/RT1' */
  uint8_T get_SysSt_b;                 /* '<S1>/RT1' */
  uint8_T get_DriverSeatBeltSt_p;      /* '<S1>/RT1' */
  uint8_T get_PsngrSeatBeltSt_e;       /* '<S1>/RT1' */
  uint8_T get_SteeringAngleSpdVD_f;    /* '<S1>/RT1' */
  uint8_T get_SteeringAngleVD_d;       /* '<S1>/RT1' */
  uint8_T get_KeySt_e;                 /* '<S1>/RT1' */
  uint8_T get_ABSActiveSt_i;           /* '<S1>/AION_auto_mode_request' */
  uint8_T get_VehSpdVD_f;              /* '<S1>/AION_auto_mode_request' */
  uint8_T get_GearLeverIntv_l;         /* '<S1>/AION_auto_mode_request' */
  uint8_T get_CrntGearLvlVD_n;         /* '<S1>/AION_auto_mode_request' */
  uint8_T get_AccElecECFail_g;         /* '<S1>/AION_auto_mode_request' */
  uint8_T get_BrkPedalSt_i;            /* '<S1>/AION_auto_mode_request' */
  uint8_T get_StrngWhlIntv_o;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_SysSt_c;                 /* '<S1>/AION_auto_mode_request' */
  uint8_T get_DriverSeatBeltSt_o;      /* '<S1>/AION_auto_mode_request' */
  uint8_T get_PsngrSeatBeltSt_d;       /* '<S1>/AION_auto_mode_request' */
  uint8_T get_SteeringAngleSpdVD_o;    /* '<S1>/AION_auto_mode_request' */
  uint8_T get_SteeringAngleVD_n;       /* '<S1>/AION_auto_mode_request' */
  uint8_T get_KeySt_o;                 /* '<S1>/AION_auto_mode_request' */
  boolean_T SCU2ADCU_CAN_read_o1;      /* '<S10>/SCU2ADCU_CAN_read' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_AION_IDS_SPEEDGOAT_T {
  AION_ApplicationBus UnitDelay_DSTATE;/* '<S1>/Unit Delay' */
  AION_ApplicationBus TmpRTBAtUnitDelayInport1_Buf[3];/* synthesized block */
  CAN_DATATYPE RT2_Buf0;               /* '<S13>/RT2' */
  CAN_DATATYPE RT2_Buf1;               /* '<S13>/RT2' */
  CAN_DATATYPE RT2_Buf2;               /* '<S13>/RT2' */
  real_T AutoTrqWhlReq_test_Buf0;      /* synthesized block */
  real_T AutoTrqWhlReq_test_Buf1;      /* synthesized block */
  real_T AutoTrqWhlReq_test_Buf2;      /* synthesized block */
  real_T BrakeReq_test_Buf0;           /* synthesized block */
  real_T BrakeReq_test_Buf1;           /* synthesized block */
  real_T BrakeReq_test_Buf2;           /* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport2_Buf0;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport2_Buf1;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport2_Buf2;/* synthesized block */
  real_T RT1_19_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_19_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_19_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_21_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_21_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_21_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_22_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_22_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_22_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_23_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_23_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_23_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_31_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_31_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_31_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_45_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_45_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_45_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_49_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_49_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_49_Buf2;                  /* '<S1>/RT1' */
  void *ADCU2SCU_Brake_Command_CAN_write_PWORK;
                                  /* '<S13>/ADCU2SCU_Brake_Command_CAN_write' */
  void *ADCU2SCU_Gear_Command_CAN_write_PWORK;
                                   /* '<S13>/ADCU2SCU_Gear_Command_CAN_write' */
  void* RT2_d0_SEMAPHORE;              /* '<S13>/RT2' */
  void* AutoTrqWhlReq_test_d0_SEMAPHORE;/* synthesized block */
  void* BrakeReq_test_d0_SEMAPHORE;    /* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport14_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport15_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport6_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport7_d0_SEMAPHORE;/* synthesized block */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_AutoTrqWhlReq_test_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_BrakeReq_test_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_LatCtrlReq_test_at_outport_0_PWORK;/* synthesized block */

  void* RT1_10_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_11_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_12_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_13_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_19_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_21_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_22_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_23_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_24_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_26_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_27_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_28_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_29_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_31_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_33_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_35_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_36_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_37_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_38_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_39_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_40_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_45_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_46_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_49_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_50_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_51_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_52_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_53_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_55_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_56_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_57_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_8_d0_SEMAPHORE;            /* '<S1>/RT1' */
  void* RT1_9_d0_SEMAPHORE;            /* '<S1>/RT1' */
  void* TmpRTBAtUnitDelayInport1_d0_SEMAPHORE;/* synthesized block */
  void *ADCU2SCU_Steer_Command_CAN_write_PWORK;
                                  /* '<S13>/ADCU2SCU_Steer_Command_CAN_write' */
  uint32_T RT1_10_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_10_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_10_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_11_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_11_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_11_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_12_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_12_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_12_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_13_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_13_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_13_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_24_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_24_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_24_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_28_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_28_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_28_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_33_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_33_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_33_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_35_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_35_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_35_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_37_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_37_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_37_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_38_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_38_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_38_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_40_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_40_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_40_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_46_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_46_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_46_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_8_Buf0;                 /* '<S1>/RT1' */
  uint32_T RT1_8_Buf1;                 /* '<S1>/RT1' */
  uint32_T RT1_8_Buf2;                 /* '<S1>/RT1' */
  uint32_T RT1_9_Buf0;                 /* '<S1>/RT1' */
  uint32_T RT1_9_Buf1;                 /* '<S1>/RT1' */
  uint32_T RT1_9_Buf2;                 /* '<S1>/RT1' */
  Control_request TmpRTBAtAION_auto_mode_requestInport1_Buf0;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport1_Buf1;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport1_Buf2;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport3_Buf0;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport3_Buf1;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport3_Buf2;/* synthesized block */
  Gear_request TmpRTBAtAION_auto_mode_requestInport6_Buf0;/* synthesized block */
  Gear_request TmpRTBAtAION_auto_mode_requestInport6_Buf1;/* synthesized block */
  Gear_request TmpRTBAtAION_auto_mode_requestInport6_Buf2;/* synthesized block */
  Validation_status TmpRTBAtAION_auto_mode_requestInport7_Buf0;/* synthesized block */
  Validation_status TmpRTBAtAION_auto_mode_requestInport7_Buf1;/* synthesized block */
  Validation_status TmpRTBAtAION_auto_mode_requestInport7_Buf2;/* synthesized block */
  Beam_request TmpRTBAtAION_auto_mode_requestInport14_Buf0;/* synthesized block */
  Beam_request TmpRTBAtAION_auto_mode_requestInport14_Buf1;/* synthesized block */
  Beam_request TmpRTBAtAION_auto_mode_requestInport14_Buf2;/* synthesized block */
  Enable_request TmpRTBAtAION_auto_mode_requestInport15_Buf0;/* synthesized block */
  Enable_request TmpRTBAtAION_auto_mode_requestInport15_Buf1;/* synthesized block */
  Enable_request TmpRTBAtAION_auto_mode_requestInport15_Buf2;/* synthesized block */
  Active_request TmpRTBAtAION_auto_mode_requestInport16_Buf0;/* synthesized block */
  Active_request TmpRTBAtAION_auto_mode_requestInport16_Buf1;/* synthesized block */
  Active_request TmpRTBAtAION_auto_mode_requestInport16_Buf2;/* synthesized block */
  Light_request TmpRTBAtAION_auto_mode_requestInport17_Buf0;/* synthesized block */
  Light_request TmpRTBAtAION_auto_mode_requestInport17_Buf1;/* synthesized block */
  Light_request TmpRTBAtAION_auto_mode_requestInport17_Buf2;/* synthesized block */
  Drive_status RT1_26_Buf0;            /* '<S1>/RT1' */
  Drive_status RT1_26_Buf1;            /* '<S1>/RT1' */
  Drive_status RT1_26_Buf2;            /* '<S1>/RT1' */
  Ready_status RT1_27_Buf0;            /* '<S1>/RT1' */
  Ready_status RT1_27_Buf1;            /* '<S1>/RT1' */
  Ready_status RT1_27_Buf2;            /* '<S1>/RT1' */
  Gear_status RT1_29_Buf0;             /* '<S1>/RT1' */
  Gear_status RT1_29_Buf1;             /* '<S1>/RT1' */
  Gear_status RT1_29_Buf2;             /* '<S1>/RT1' */
  Control_status RT1_36_Buf0;          /* '<S1>/RT1' */
  Control_status RT1_36_Buf1;          /* '<S1>/RT1' */
  Control_status RT1_36_Buf2;          /* '<S1>/RT1' */
  Control_status RT1_39_Buf0;          /* '<S1>/RT1' */
  Control_status RT1_39_Buf1;          /* '<S1>/RT1' */
  Control_status RT1_39_Buf2;          /* '<S1>/RT1' */
  Available_status RT1_50_Buf0;        /* '<S1>/RT1' */
  Available_status RT1_50_Buf1;        /* '<S1>/RT1' */
  Available_status RT1_50_Buf2;        /* '<S1>/RT1' */
  Active_status RT1_51_Buf0;           /* '<S1>/RT1' */
  Active_status RT1_51_Buf1;           /* '<S1>/RT1' */
  Active_status RT1_51_Buf2;           /* '<S1>/RT1' */
  Active_status RT1_52_Buf0;           /* '<S1>/RT1' */
  Active_status RT1_52_Buf1;           /* '<S1>/RT1' */
  Active_status RT1_52_Buf2;           /* '<S1>/RT1' */
  Active_status RT1_53_Buf0;           /* '<S1>/RT1' */
  Active_status RT1_53_Buf1;           /* '<S1>/RT1' */
  Active_status RT1_53_Buf2;           /* '<S1>/RT1' */
  Active_status RT1_55_Buf0;           /* '<S1>/RT1' */
  Active_status RT1_55_Buf1;           /* '<S1>/RT1' */
  Active_status RT1_55_Buf2;           /* '<S1>/RT1' */
  Active_status RT1_56_Buf0;           /* '<S1>/RT1' */
  Active_status RT1_56_Buf1;           /* '<S1>/RT1' */
  Active_status RT1_56_Buf2;           /* '<S1>/RT1' */
  Active_status RT1_57_Buf0;           /* '<S1>/RT1' */
  Active_status RT1_57_Buf1;           /* '<S1>/RT1' */
  Active_status RT1_57_Buf2;           /* '<S1>/RT1' */
  int_T CANSetup_IWORK;                /* '<S2>/CAN Setup' */
  int_T ADCU2SCU_Brake_Command_CAN_pack_ModeSignalID;
                                   /* '<S13>/ADCU2SCU_Brake_Command_CAN_pack' */
  int_T ADCU2SCU_Brake_Command_CAN_write_IWORK;
                                  /* '<S13>/ADCU2SCU_Brake_Command_CAN_write' */
  int_T ADCU2SCU_Gear_Command_CAN_pack_ModeSignalID;
                                    /* '<S13>/ADCU2SCU_Gear_Command_CAN_pack' */
  int_T ADCU2SCU_Gear_Command_CAN_write_IWORK;
                                   /* '<S13>/ADCU2SCU_Gear_Command_CAN_write' */
  int_T ADCU2SCU_Steer_Command_CAN_pack_ModeSignalID;
                                   /* '<S13>/ADCU2SCU_Steer_Command_CAN_pack' */
  int_T ADCU2SCU_Steer_Command_CAN_write_IWORK;
                                  /* '<S13>/ADCU2SCU_Steer_Command_CAN_write' */
  int_T SCU2ADCU_CAN_read_IWORK;       /* '<S10>/SCU2ADCU_CAN_read' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack_ModeSignalID;
                                  /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack_StatusPortID;
                                  /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack1_ModeSignalID;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack1_StatusPortID;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack10_ModeSignalID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack10_StatusPortID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack11_ModeSignalID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack11_StatusPortID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack12_ModeSignalID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack12_StatusPortID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack13_ModeSignalID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack13_StatusPortID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack14_ModeSignalID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack14_StatusPortID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack15_ModeSignalID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack15_StatusPortID;
                                /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack6_ModeSignalID;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack6_StatusPortID;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack7_ModeSignalID;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack7_StatusPortID;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack8_ModeSignalID;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack8_StatusPortID;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack9_ModeSignalID;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack9_StatusPortID;
                                 /* '<S11>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  int_T SCU2ADCU_Status1_CAN_unpack1_ModeSignalID;
                                      /* '<S11>/SCU2ADCU_Status1_CAN_unpack1' */
  int_T SCU2ADCU_Status1_CAN_unpack1_StatusPortID;
                                      /* '<S11>/SCU2ADCU_Status1_CAN_unpack1' */
  int8_T RT2_LstBufWR;                 /* '<S13>/RT2' */
  int8_T RT2_RDBuf;                    /* '<S13>/RT2' */
  int8_T AutoTrqWhlReq_test_LstBufWR;  /* synthesized block */
  int8_T AutoTrqWhlReq_test_RDBuf;     /* synthesized block */
  int8_T BrakeReq_test_LstBufWR;       /* synthesized block */
  int8_T BrakeReq_test_RDBuf;          /* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport1_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport14_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport14_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport15_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport15_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport16_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport16_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport17_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport17_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport2_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport2_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport3_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport3_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport6_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport6_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport7_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport7_RDBuf;/* synthesized block */
  int8_T RT1_10_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_10_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_11_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_11_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_12_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_12_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_13_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_13_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_19_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_19_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_21_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_21_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_22_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_22_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_23_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_23_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_24_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_24_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_26_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_26_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_27_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_27_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_28_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_28_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_29_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_29_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_31_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_31_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_33_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_33_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_35_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_35_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_36_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_36_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_37_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_37_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_38_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_38_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_39_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_39_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_40_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_40_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_45_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_45_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_46_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_46_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_49_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_49_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_50_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_50_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_51_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_51_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_52_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_52_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_53_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_53_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_55_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_55_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_56_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_56_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_57_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_57_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_8_LstBufWR;               /* '<S1>/RT1' */
  int8_T RT1_8_RDBuf;                  /* '<S1>/RT1' */
  int8_T RT1_9_LstBufWR;               /* '<S1>/RT1' */
  int8_T RT1_9_RDBuf;                  /* '<S1>/RT1' */
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
    SimStruct childSFunctions[5];
    SimStruct *childSFunctionPtrs[5];
    struct _ssBlkInfo2 blkInfo2[5];
    struct _ssSFcnModelMethods2 methods2[5];
    struct _ssSFcnModelMethods3 methods3[5];
    struct _ssSFcnModelMethods4 methods4[5];
    struct _ssStatesInfo2 statesInfo2[5];
    ssPeriodicStatesInfo periodicStatesInfo[5];
    struct _ssPortInfo2 inputOutputPortInfo2[5];
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
      uint_T attribs[31];
      mxArray *params[31];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

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
extern real_T rtP_LatCtrlReq_test;     /* Variable: LatCtrlReq_test
                                        * Referenced by: '<S5>/LatCtrlReq_test'
                                        */
extern real_T rtP_LngCtrlReq_test;     /* Variable: LngCtrlReq_test
                                        * Referenced by: '<S5>/LngCtrlReq_test'
                                        */
extern real_T rtP_SCU_ADCU_CYCLE_TIME; /* Variable: SCU_ADCU_CYCLE_TIME
                                        * Referenced by: '<S9>/SCU2ADCU_SampleTime(s)'
                                        */
extern real_T rtP_SteerAngReq_test;    /* Variable: SteerAngReq_test
                                        * Referenced by: '<S5>/SteerAngReq_test'
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
 * '<S10>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN/SCU2ADCU(IDS)_loop_receive'
 * '<S11>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN/SCU2ADCU(IDS)_loop_receive/CAN_unpack_SCU2ADCU'
 * '<S12>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN'
 * '<S13>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN/CAN_pack_ADCU2SCU'
 */
#endif                                 /* RTW_HEADER_AION_IDS_SPEEDGOAT_h_ */
