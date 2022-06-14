/*
 * AION_IDS_SPEEDGOAT_data.cpp
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

#include "AION_IDS_SPEEDGOAT.h"
#include "AION_IDS_SPEEDGOAT_private.h"

/* Model block global parameters (default storage) */
real_T rtP_AutoTrqWhlReq_test = 130.0; /* Variable: AutoTrqWhlReq_test
                                        * Referenced by: '<S5>/AutoTrqWhlReq_test'
                                        */
real_T rtP_BeamReq_test = 0.0;         /* Variable: BeamReq_test
                                        * Referenced by: '<S5>/BeamReq_test'
                                        */
real_T rtP_BodyCtrlReq_test = 0.0;     /* Variable: BodyCtrlReq_test
                                        * Referenced by: '<S5>/BodyCtrlReq_test'
                                        */
real_T rtP_BrakeReq_test = 0.0;        /* Variable: BrakeReq_test
                                        * Referenced by: '<S5>/BrakeReq_test'
                                        */
real_T rtP_GearLvlReqVD_test = 0.0;    /* Variable: GearLvlReqVD_test
                                        * Referenced by: '<S5>/GearLvlReqVD_test'
                                        */
real_T rtP_GearLvlReq_test = 0.0;      /* Variable: GearLvlReq_test
                                        * Referenced by: '<S5>/GearLvlReq_test'
                                        */
real_T rtP_HornRingReq_test = 0.0;     /* Variable: HornRingReq_test
                                        * Referenced by: '<S5>/HornRingReq_test'
                                        */
real_T rtP_IMU_ADCU_CYCLE_TIME = 0.02; /* Variable: IMU_ADCU_CYCLE_TIME
                                        * Referenced by: '<S9>/IMU2ADCU_SampleTime'
                                        */
real_T rtP_LatCtrlReq_test = 0.0;      /* Variable: LatCtrlReq_test
                                        * Referenced by: '<S5>/LatCtrlReq_test'
                                        */
real_T rtP_LngCtrlReq_test = 0.0;      /* Variable: LngCtrlReq_test
                                        * Referenced by: '<S5>/LngCtrlReq_test'
                                        */
real_T rtP_O_ALTITUDE = 0.0;           /* Variable: O_ALTITUDE
                                        * Referenced by: '<S17>/Constant4'
                                        */
real_T rtP_O_LATITUDE = 0.0;           /* Variable: O_LATITUDE
                                        * Referenced by: '<S17>/Constant2'
                                        */
real_T rtP_O_LONGITUDE = 0.0;          /* Variable: O_LONGITUDE
                                        * Referenced by: '<S17>/Constant3'
                                        */
real_T rtP_SCU_ADCU_CYCLE_TIME = 0.02; /* Variable: SCU_ADCU_CYCLE_TIME
                                        * Referenced by: '<S9>/SCU2ADCU_SampleTime(s)'
                                        */
real_T rtP_SteerAngReq_test = -221.9318468860084;/* Variable: SteerAngReq_test
                                                  * Referenced by: '<S5>/SteerAngReq_test'
                                                  */
real_T rtP_SteerWhlTorqReq_test = 0.0; /* Variable: SteerWhlTorqReq_test
                                        * Referenced by: '<S5>/SteerWhlTorqReq_test'
                                        */
real_T rtP_TurnLightReq_test = 0.0;    /* Variable: TurnLightReq_test
                                        * Referenced by: '<S5>/TurnLightReq_test'
                                        */
