/*
 * AION_IDS_SPEEDGOAT.cpp
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

#include "AION_IDS_SPEEDGOAT.h"
#include "AION_IDS_SPEEDGOAT_private.h"

const AION_ApplicationBus AION_IDS_SPEEDGOAT_rtZAION_ApplicationBus = {
  {
    Manual,                            /* set_LatCtrlReq */
    0.0                                /* set_SteerAngReq */
  },                                   /* set_lateral_control_info */

  {
    Manual,                            /* set_LngCtrlReq */
    0.0,                               /* set_AutoTrqWhlReq */
    0.0,                               /* set_BrakeReq */
    NoRequest,                         /* set_GearLvlReq */
    Invalid                            /* set_GearLvlReqVD */
  },                                   /* set_longitudinal_control_info */

  {
    0U,                                /* set_Checksum1 */
    0U,                                /* set_MsgCounter1 */
    0U,                                /* set_Checksum2 */
    0U,                                /* set_MsgCounter2 */
    0U,                                /* set_Checksum3 */
    0U,                                /* set_MsgCounter3 */
    NoBeamRequest,                     /* set_BeamReq */
    Disable,                           /* set_BodyCtrlReq */
    NotActiveRequest,                  /* set_HornRingReq */
    NoLightRequest                     /* set_TurnLightReq */
  },                                   /* set_ADCU_info */

  {
    0U,                                /* get_ABSActiveSt */
    0.0,                               /* get_VehSpd */
    0U,                                /* get_VehSpdVD */
    0.0,                               /* get_YawRate */
    0.0,                               /* get_ActVehLaltrlAccel */
    0.0                                /* get_ActVehLongAccel */
  },                                   /* get_BCS_info */

  {
    0U,                                /* get_ActVehWheelTorq */
    0U,                                /* get_GearLeverIntv */
    InvalidDriveStatus,                /* get_VehDrvMod */
    NotReady,                          /* get_VehRdySt */
    0U,                                /* get_VehRng */
    InvalidGearStatus,                 /* get_CrntGearLvl */
    0U,                                /* get_CrntGearLvlVD */
    0.0,                               /* get_GasPedalActPst */
    0U,                                /* get_AccElecECFail */
    0U,                                /* get_VehWheelTorqMax */
    0U                                 /* get_BrkPedalSt */
  },                                   /* get_VCU_info */

  {
    0U,                                /* get_LatAutoCheckReport */
    ManualStatus,                      /* get_LatCtrlMode */
    0U,                                /* get_LatQuitReport */
    0U,                                /* get_LngAutoCheckIReport */
    ManualStatus,                      /* get_LngCtrlMode */
    0U,                                /* get_LngQuitReport */
    0U                                 /* get_StrngWhlIntv */
  },                                   /* get_SCU_info */

  {
    0U                                 /* get_SysSt */
  },                                   /* get_EPB_info */

  {
    0U,                                /* get_DriverSeatBeltSt */
    0U                                 /* get_PsngrSeatBeltSt */
  },                                   /* get_SRS_info */

  {
    0.0,                               /* get_SteeringAngle */
    0U,                                /* get_SteeringAngleSpd */
    0U,                                /* get_SteeringAngleSpdVD */
    0U,                                /* get_SteeringAngleVD */
    0.0                                /* get_StrngWhlTorq */
  },                                   /* get_EPS_info */

  {
    NotAvailable,                      /* get_CtrlAvailable */
    NotActiveStatus,                   /* get_HazardLampSt */
    NotActiveStatus,                   /* get_HighBeamSt */
    NotActiveStatus,                   /* get_HornSt */
    0U,                                /* get_KeySt */
    NotActiveStatus,                   /* get_LeftTurnLampSt */
    NotActiveStatus,                   /* get_LowBeamSt */
    NotActiveStatus                    /* get_RightTurnLampSt */
  }                                    /* get_BCM_info */
} ;                                    /* AION_ApplicationBus ground */

/* Block signals (default storage) */
B_AION_IDS_SPEEDGOAT_T AION_IDS_SPEEDGOAT_B;

/* Block states (default storage) */
DW_AION_IDS_SPEEDGOAT_T AION_IDS_SPEEDGOAT_DW;

/* Real-time model */
RT_MODEL_AION_IDS_SPEEDGOAT_T AION_IDS_SPEEDGOAT_M_ =
  RT_MODEL_AION_IDS_SPEEDGOAT_T();
RT_MODEL_AION_IDS_SPEEDGOAT_T *const AION_IDS_SPEEDGOAT_M =
  &AION_IDS_SPEEDGOAT_M_;

/*
 *   This function updates active task flag for each subrate.
 * The function is called in the model base rate function.
 * It maintains SampleHit information to allow scheduling
 * of the subrates from the base rate function.
 */
void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[1])++;
  if ((AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [0.02s, 0.0s] */
    AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[1] = 0;
  }

  (AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[2])++;
  if ((AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[2]) > 4) {/* Sample time: [0.05s, 0.0s] */
    AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[2] = 0;
  }

  (AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[3])++;
  if ((AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[3]) > 19) {/* Sample time: [0.2s, 0.0s] */
    AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[3] = 0;
  }
}

/* Model step function for TID0 */
void AION_IDS_SPEEDGOAT_step0(void)    /* Sample time: [0.01s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_IDS_SPEEDGOAT_M->Timing.clockTick0)) {
    ++AION_IDS_SPEEDGOAT_M->Timing.clockTickH0;
  }

  AION_IDS_SPEEDGOAT_M->Timing.t[0] = AION_IDS_SPEEDGOAT_M->Timing.clockTick0 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize0 +
    AION_IDS_SPEEDGOAT_M->Timing.clockTickH0 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize0 * 4294967296.0;
}

/* Model step function for TID1 */
void AION_IDS_SPEEDGOAT_step1(void)    /* Sample time: [0.02s, 0.0s] */
{
  real_T tmp;
  int8_T wrBufIdx;

  /* S-Function (sg_IO612_setup_s): '<S2>/CAN Setup' */

  /* Level2 S-Function Block: '<S2>/CAN Setup' (sg_IO612_setup_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[1];
    sfcnOutputs(rts,1);
  }

  /* Constant: '<S9>/SCU2ADCU_SampleTime(s)' */
  AION_IDS_SPEEDGOAT_B.SCU2ADCU_SampleTimes = rtP_SCU_ADCU_CYCLE_TIME;
  do {
    /* Level2 S-Function Block: '<S10>/SCU2ADCU_CAN_read' (sg_IO61X_read_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[0];
      sfcnOutputs(rts,1);
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack' */
      if ((6 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((384 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 1
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 40
             *  length                  = 13
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.05625
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint16_T)(0x1FU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.05625;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 37
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o3 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack1' */
      if ((2 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((547 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 8
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.00097656
             *  offset                  = -2.0943
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint16_T)(0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.00097656) + -2.0943;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1 = result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */
      if ((7 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((554 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 52
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 2
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 24
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 40
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 0
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o6 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o7 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 6
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o8 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack11' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((706 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 11
             *  length                  = 3
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x38U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 10
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 14
             *  length                  = 10
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0xC0U)) >> 6);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) << 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o3 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack12' */
      if ((5 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((555 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 36
             *  length                  = 3
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x70U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 35
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o2 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack13' */
      if ((6 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((556 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 42
             *  length                  = 14
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]) &
                      (uint16_T)(0xFCU)) >> 2);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) << 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13 = result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack14' */
      if ((6 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((557 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 30
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 40
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.392
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.392;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 10
             *  length                  = 14
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0xFCU)) >> 2);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) << 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o3 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack15' */
      if ((7 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((559 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 53
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15 = result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack6' */
      if ((5 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((551 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 36
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.027127
             *  offset                  = -21.593
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint16_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.027127) + -21.593;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 12
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.027127
             *  offset                  = -21.593
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.027127) + -21.593;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o2 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack7' */
      if ((2 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((552 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 8
             *  length                  = 3
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x7U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7 = result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack8' */
      if ((6 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((553 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = -780.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.1) + -780.0;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 38
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 4.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0xC0U)) >> 6);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x3FU)) << 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 4.0;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 34
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 40
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = -12.7
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.1) + -12.7;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o5 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack9' */
      if ((1 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((705 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 2
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 0
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o2 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S11>/SCU2ADCU_Status1_CAN_unpack1' */
      if ((3 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((704 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 18
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 16
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint8_T)(0x1U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 5
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 17
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint8_T)(0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o4 = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 2
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o5 = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 12
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o6 = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 4
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o7 = result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 14
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o8 = result;
              }
            }
          }
        }
      }
    }
  } while (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o1);

  /* UnitDelay: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_B.UnitDelay = AION_IDS_SPEEDGOAT_DW.UnitDelay_DSTATE;

  /* ModelReference generated from: '<S2>/Signal_Transfer' */
  AION_signal_transfer(&AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o2,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o1,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o1,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o2,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o3,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o4,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o6,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o7,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o8,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o2,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o5,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o1,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o2,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o1,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_lateral_control_info.set_LatCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_lateral_control_info.set_SteerAngReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_longitudinal_control_info.set_LngCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_longitudinal_control_info.set_AutoTrqWhlReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_longitudinal_control_info.set_BrakeReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_longitudinal_control_info.set_GearLvlReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_longitudinal_control_info.set_GearLvlReqVD,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_ADCU_info.set_BeamReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_ADCU_info.set_BodyCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_ADCU_info.set_HornRingReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_ADCU_info.set_TurnLightReq,
                       &AION_IDS_SPEEDGOAT_B.set_LatCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.set_SteerAngReq,
                       &AION_IDS_SPEEDGOAT_B.set_LngCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.set_AutoTrqWhlReq,
                       &AION_IDS_SPEEDGOAT_B.set_BrakeReq,
                       &AION_IDS_SPEEDGOAT_B.set_GearLvlReq,
                       &AION_IDS_SPEEDGOAT_B.set_GearLvlReqVD,
                       &AION_IDS_SPEEDGOAT_B.set_Checksum1,
                       &AION_IDS_SPEEDGOAT_B.set_MsgCounter1,
                       &AION_IDS_SPEEDGOAT_B.set_Checksum2,
                       &AION_IDS_SPEEDGOAT_B.set_MsgCounter2,
                       &AION_IDS_SPEEDGOAT_B.set_Checksum3,
                       &AION_IDS_SPEEDGOAT_B.set_MsgCounter3,
                       &AION_IDS_SPEEDGOAT_B.set_BeamReq,
                       &AION_IDS_SPEEDGOAT_B.set_BodyCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.set_HornRingReq,
                       &AION_IDS_SPEEDGOAT_B.set_TurnLightReq,
                       &AION_IDS_SPEEDGOAT_B.get_ABSActiveSt,
                       &AION_IDS_SPEEDGOAT_B.get_VehSpd,
                       &AION_IDS_SPEEDGOAT_B.get_VehSpdVD,
                       &AION_IDS_SPEEDGOAT_B.get_YawRate,
                       &AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel,
                       &AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel,
                       &AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq,
                       &AION_IDS_SPEEDGOAT_B.get_GearLeverIntv,
                       &AION_IDS_SPEEDGOAT_B.get_VehDrvMod,
                       &AION_IDS_SPEEDGOAT_B.get_VehRdySt,
                       &AION_IDS_SPEEDGOAT_B.get_VehRng,
                       &AION_IDS_SPEEDGOAT_B.get_CrntGearLvl,
                       &AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD,
                       &AION_IDS_SPEEDGOAT_B.get_GasPedalActPst,
                       &AION_IDS_SPEEDGOAT_B.get_AccElecECFail,
                       &AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax,
                       &AION_IDS_SPEEDGOAT_B.get_BrkPedalSt,
                       &AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport,
                       &AION_IDS_SPEEDGOAT_B.get_LatCtrlMode,
                       &AION_IDS_SPEEDGOAT_B.get_LatQuitReport,
                       &AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport,
                       &AION_IDS_SPEEDGOAT_B.get_LngCtrlMode,
                       &AION_IDS_SPEEDGOAT_B.get_LngQuitReport,
                       &AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv,
                       &AION_IDS_SPEEDGOAT_B.get_SysSt,
                       &AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt,
                       &AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt,
                       &AION_IDS_SPEEDGOAT_B.get_SteeringAngle,
                       &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd,
                       &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD,
                       &AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD,
                       &AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq,
                       &AION_IDS_SPEEDGOAT_B.get_CtrlAvailable,
                       &AION_IDS_SPEEDGOAT_B.get_HazardLampSt,
                       &AION_IDS_SPEEDGOAT_B.get_HighBeamSt,
                       &AION_IDS_SPEEDGOAT_B.get_HornSt,
                       &AION_IDS_SPEEDGOAT_B.get_KeySt,
                       &AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt,
                       &AION_IDS_SPEEDGOAT_B.get_LowBeamSt,
                       &AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt,
                       &AION_IDS_SPEEDGOAT_B.ADCU_AutoTrqWhlReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_BrakeReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReqVD,
                       &AION_IDS_SPEEDGOAT_B.ADCU_LngCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_LatCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_SteerAngReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_BeamReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_BodyCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_HornRingReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_TurnLightReq,
                       &(AION_IDS_SPEEDGOAT_DW.Signal_Transfer_InstanceData.rtb));

  /* S-Function (scanpack): '<S13>/ADCU2SCU_Brake_Command_CAN_pack' */
  /* S-Function (scanpack): '<S13>/ADCU2SCU_Brake_Command_CAN_pack' */
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.ID = 544U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Length = 5U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Extended = 0U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Remote = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[0] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[1] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[2] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[3] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[5] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[6] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 26
     *  length                  = 14
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = -5000.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_AutoTrqWhlReq;

        /* no factor to apply */
        result = result - -5000.0;

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(16383)) {
          packedValue = (uint16_T) 16383;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[3] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x3FU) <<
              2));
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[2] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[2] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x3FC0U) >>
              6));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 8
     *  length                  = 16
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.0004882
     *  offset                  = -16.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_BrakeReq;

        /* full scaling operation */
        result = (result - -16.0) * (1 / 0.0004882);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[1] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[1] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[0] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 37
     *  length                  = 3
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(7)) {
          packedValue = (uint8_T) 7;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x7U) << 5));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 36
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReqVD;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 24
     *  length                  = 2
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_LngCtrlReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(3)) {
          packedValue = (uint8_T) 3;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[3] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[3] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U));
          }
        }
      }
    }
  }

  /* RateTransition: '<S13>/RT' */
  AION_IDS_SPEEDGOAT_B.RT_f =
    AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack;

  /* S-Function (sg_IO61X_write_s): '<S13>/ADCU2SCU_Brake_Command_CAN_write' */

  /* Level2 S-Function Block: '<S13>/ADCU2SCU_Brake_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[2];
    sfcnOutputs(rts,1);
  }

  /* S-Function (scanpack): '<S13>/ADCU2SCU_Gear_Command_CAN_pack' */
  /* S-Function (scanpack): '<S13>/ADCU2SCU_Gear_Command_CAN_pack' */
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.ID = 545U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Length = 6U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Extended = 0U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Remote = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[0] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[1] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[2] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[3] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[4] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[5] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[6] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 44
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_LatCtrlReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[5] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[5] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 8
     *  length                  = 16
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.1
     *  offset                  = -780.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_SteerAngReq;

        /* full scaling operation */
        result = (result - -780.0) * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[1] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[1] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[0] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }
  }

  /* RateTransition: '<S13>/RT1' */
  AION_IDS_SPEEDGOAT_B.RT1 = AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack;

  /* S-Function (sg_IO61X_write_s): '<S13>/ADCU2SCU_Gear_Command_CAN_write' */

  /* Level2 S-Function Block: '<S13>/ADCU2SCU_Gear_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[3];
    sfcnOutputs(rts,1);
  }

  /* S-Function (scanpack): '<S13>/ADCU2SCU_Steer_Command_CAN_pack' */
  /* S-Function (scanpack): '<S13>/ADCU2SCU_Steer_Command_CAN_pack' */
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.ID = 640U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Length = 1U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Extended = 0U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Remote = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[1] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[2] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[3] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[4] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[5] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[6] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 2
     *  length                  = 2
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_BeamReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(3)) {
          packedValue = (uint8_T) 3;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U) << 2));
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 4
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_BodyCtrlReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 5
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_HornRingReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 5));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 0
     *  length                  = 2
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_TurnLightReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(3)) {
          packedValue = (uint8_T) 3;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U));
          }
        }
      }
    }
  }

  /* RateTransition: '<S13>/RT2' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT2_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT2_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT2_Buf0 =
      AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT2_Buf1 =
      AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT2_Buf2 =
      AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT2_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S13>/RT2' */

  /* Constant: '<S5>/AutoTrqWhlReq_test' */
  AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test = rtP_AutoTrqWhlReq_test;

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf0 =
      AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf1 =
      AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf2 =
      AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_LstBufWR = wrBufIdx;

  /* Constant: '<S5>/BrakeReq_test' */
  AION_IDS_SPEEDGOAT_B.BrakeReq_test = rtP_BrakeReq_test;

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_LstBufWR +
    1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.BrakeReq_test_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf0 =
      AION_IDS_SPEEDGOAT_B.BrakeReq_test;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf1 =
      AION_IDS_SPEEDGOAT_B.BrakeReq_test;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf2 =
      AION_IDS_SPEEDGOAT_B.BrakeReq_test;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_LstBufWR = wrBufIdx;

  /* Constant: '<S5>/LatCtrlReq_test' */
  AION_IDS_SPEEDGOAT_B.LatCtrlReq_test = rtP_LatCtrlReq_test;

  /* DataTypeConversion: '<S5>/Data Type Conversion8' */
  tmp = std::floor(AION_IDS_SPEEDGOAT_B.LatCtrlReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion8' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion8 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion7' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion7 = static_cast<Control_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion8);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion7;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion7;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion7;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion17' incorporates:
   *  Constant: '<S5>/BeamReq_test'
   */
  tmp = std::floor(rtP_BeamReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion17' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion17 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion18' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion18 = static_cast<Beam_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion17);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion18;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion18;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion18;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion11' incorporates:
   *  Constant: '<S5>/BodyCtrlReq_test'
   */
  tmp = std::floor(rtP_BodyCtrlReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion11' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion11 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion12' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion12 = static_cast<Enable_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion11);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion12;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion12;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion12;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion15' incorporates:
   *  Constant: '<S5>/HornRingReq_test'
   */
  tmp = std::floor(rtP_HornRingReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion15' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion15 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion16' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion16 = static_cast<Active_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion15);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion16;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion16;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion16;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion13' incorporates:
   *  Constant: '<S5>/TurnLightReq_test'
   */
  tmp = std::floor(rtP_TurnLightReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion13' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion13 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion14' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion14 = static_cast<Light_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion13);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion14;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion14;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion14;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_LstBufWR =
    wrBufIdx;

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' incorporates:
   *  Constant: '<S5>/SteerAngReq_test'
   */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf0 =
      rtP_SteerAngReq_test;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf1 =
      rtP_SteerAngReq_test;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf2 =
      rtP_SteerAngReq_test;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion10' incorporates:
   *  Constant: '<S5>/LngCtrlReq_test'
   */
  tmp = std::floor(rtP_LngCtrlReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion10' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion10 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion9' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion9 = static_cast<Control_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion10);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion9;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion9;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion9;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion3' incorporates:
   *  Constant: '<S5>/GearLvlReq_test'
   */
  tmp = std::floor(rtP_GearLvlReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion3' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion3 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion2' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion2 = static_cast<Gear_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion3);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion2;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion2;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion2;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion1' incorporates:
   *  Constant: '<S5>/GearLvlReqVD_test'
   */
  tmp = std::floor(rtP_GearLvlReqVD_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion1' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion1 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion4' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion4 = static_cast<Validation_status>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion1);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion4;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion4;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion4;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_LstBufWR =
    wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_10_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_10_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_10_Buf0 = AION_IDS_SPEEDGOAT_B.set_Checksum2;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_10_Buf1 = AION_IDS_SPEEDGOAT_B.set_Checksum2;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_10_Buf2 = AION_IDS_SPEEDGOAT_B.set_Checksum2;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_10_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_11_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_11_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_11_Buf0 = AION_IDS_SPEEDGOAT_B.set_MsgCounter2;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_11_Buf1 = AION_IDS_SPEEDGOAT_B.set_MsgCounter2;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_11_Buf2 = AION_IDS_SPEEDGOAT_B.set_MsgCounter2;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_11_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_12_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_12_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_12_Buf0 = AION_IDS_SPEEDGOAT_B.set_Checksum3;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_12_Buf1 = AION_IDS_SPEEDGOAT_B.set_Checksum3;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_12_Buf2 = AION_IDS_SPEEDGOAT_B.set_Checksum3;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_12_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_13_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_13_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_13_Buf0 = AION_IDS_SPEEDGOAT_B.set_MsgCounter3;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_13_Buf1 = AION_IDS_SPEEDGOAT_B.set_MsgCounter3;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_13_Buf2 = AION_IDS_SPEEDGOAT_B.set_MsgCounter3;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_13_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_19_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_19_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_19_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_19_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_19_Buf0 = AION_IDS_SPEEDGOAT_B.get_VehSpd;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_19_Buf1 = AION_IDS_SPEEDGOAT_B.get_VehSpd;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_19_Buf2 = AION_IDS_SPEEDGOAT_B.get_VehSpd;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_19_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_21_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_21_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_21_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_21_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_21_Buf0 = AION_IDS_SPEEDGOAT_B.get_YawRate;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_21_Buf1 = AION_IDS_SPEEDGOAT_B.get_YawRate;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_21_Buf2 = AION_IDS_SPEEDGOAT_B.get_YawRate;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_21_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_22_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_22_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_22_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_22_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_22_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_22_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_22_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_22_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_23_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_23_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_23_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_23_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_23_Buf0 = AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_23_Buf1 = AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_23_Buf2 = AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_23_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_24_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_24_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_24_Buf0 = AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_24_Buf1 = AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_24_Buf2 = AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_24_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_26_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_26_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_26_Buf0 = AION_IDS_SPEEDGOAT_B.get_VehDrvMod;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_26_Buf1 = AION_IDS_SPEEDGOAT_B.get_VehDrvMod;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_26_Buf2 = AION_IDS_SPEEDGOAT_B.get_VehDrvMod;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_26_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_27_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_27_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_27_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_27_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_27_Buf0 = AION_IDS_SPEEDGOAT_B.get_VehRdySt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_27_Buf1 = AION_IDS_SPEEDGOAT_B.get_VehRdySt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_27_Buf2 = AION_IDS_SPEEDGOAT_B.get_VehRdySt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_27_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_28_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_28_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_28_Buf0 = AION_IDS_SPEEDGOAT_B.get_VehRng;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_28_Buf1 = AION_IDS_SPEEDGOAT_B.get_VehRng;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_28_Buf2 = AION_IDS_SPEEDGOAT_B.get_VehRng;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_28_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_29_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_29_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_29_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_29_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_29_Buf0 = AION_IDS_SPEEDGOAT_B.get_CrntGearLvl;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_29_Buf1 = AION_IDS_SPEEDGOAT_B.get_CrntGearLvl;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_29_Buf2 = AION_IDS_SPEEDGOAT_B.get_CrntGearLvl;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_29_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_31_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_31_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_31_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_31_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_31_Buf0 = AION_IDS_SPEEDGOAT_B.get_GasPedalActPst;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_31_Buf1 = AION_IDS_SPEEDGOAT_B.get_GasPedalActPst;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_31_Buf2 = AION_IDS_SPEEDGOAT_B.get_GasPedalActPst;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_31_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_33_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_33_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_33_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_33_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_33_Buf0 = AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_33_Buf1 = AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_33_Buf2 = AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_33_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_35_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_35_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_35_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_35_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_35_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_35_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_36_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_36_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_36_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_36_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_36_Buf0 = AION_IDS_SPEEDGOAT_B.get_LatCtrlMode;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_36_Buf1 = AION_IDS_SPEEDGOAT_B.get_LatCtrlMode;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_36_Buf2 = AION_IDS_SPEEDGOAT_B.get_LatCtrlMode;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_36_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_37_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_37_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_37_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_37_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_37_Buf0 = AION_IDS_SPEEDGOAT_B.get_LatQuitReport;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_37_Buf1 = AION_IDS_SPEEDGOAT_B.get_LatQuitReport;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_37_Buf2 = AION_IDS_SPEEDGOAT_B.get_LatQuitReport;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_37_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_38_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_38_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_38_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_38_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_38_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_38_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_38_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_38_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_39_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_39_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_39_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_39_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_39_Buf0 = AION_IDS_SPEEDGOAT_B.get_LngCtrlMode;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_39_Buf1 = AION_IDS_SPEEDGOAT_B.get_LngCtrlMode;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_39_Buf2 = AION_IDS_SPEEDGOAT_B.get_LngCtrlMode;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_39_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_40_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_40_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_40_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_40_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_40_Buf0 = AION_IDS_SPEEDGOAT_B.get_LngQuitReport;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_40_Buf1 = AION_IDS_SPEEDGOAT_B.get_LngQuitReport;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_40_Buf2 = AION_IDS_SPEEDGOAT_B.get_LngQuitReport;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_40_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_45_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_45_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_45_Buf0 = AION_IDS_SPEEDGOAT_B.get_SteeringAngle;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_45_Buf1 = AION_IDS_SPEEDGOAT_B.get_SteeringAngle;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_45_Buf2 = AION_IDS_SPEEDGOAT_B.get_SteeringAngle;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_45_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_46_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_46_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_46_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_46_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_46_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_46_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_46_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_46_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_49_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_49_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_49_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_49_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_49_Buf0 = AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_49_Buf1 = AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_49_Buf2 = AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_49_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_50_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_50_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_50_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_50_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_50_Buf0 = AION_IDS_SPEEDGOAT_B.get_CtrlAvailable;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_50_Buf1 = AION_IDS_SPEEDGOAT_B.get_CtrlAvailable;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_50_Buf2 = AION_IDS_SPEEDGOAT_B.get_CtrlAvailable;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_50_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_51_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_51_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_51_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_51_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_51_Buf0 = AION_IDS_SPEEDGOAT_B.get_HazardLampSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_51_Buf1 = AION_IDS_SPEEDGOAT_B.get_HazardLampSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_51_Buf2 = AION_IDS_SPEEDGOAT_B.get_HazardLampSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_51_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_52_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_52_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_52_Buf0 = AION_IDS_SPEEDGOAT_B.get_HighBeamSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_52_Buf1 = AION_IDS_SPEEDGOAT_B.get_HighBeamSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_52_Buf2 = AION_IDS_SPEEDGOAT_B.get_HighBeamSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_52_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_53_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_53_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_53_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_53_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_53_Buf0 = AION_IDS_SPEEDGOAT_B.get_HornSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_53_Buf1 = AION_IDS_SPEEDGOAT_B.get_HornSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_53_Buf2 = AION_IDS_SPEEDGOAT_B.get_HornSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_53_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_55_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_55_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_55_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_55_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_55_Buf0 = AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_55_Buf1 = AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_55_Buf2 = AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_55_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_56_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_56_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_56_Buf0 = AION_IDS_SPEEDGOAT_B.get_LowBeamSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_56_Buf1 = AION_IDS_SPEEDGOAT_B.get_LowBeamSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_56_Buf2 = AION_IDS_SPEEDGOAT_B.get_LowBeamSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_56_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_57_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_57_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_57_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_57_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_57_Buf0 = AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_57_Buf1 = AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_57_Buf2 = AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_57_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_8_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_8_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_8_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_8_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_8_Buf0 = AION_IDS_SPEEDGOAT_B.set_Checksum1;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_8_Buf1 = AION_IDS_SPEEDGOAT_B.set_Checksum1;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_8_Buf2 = AION_IDS_SPEEDGOAT_B.set_Checksum1;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_8_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_9_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_9_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_9_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_9_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_9_Buf0 = AION_IDS_SPEEDGOAT_B.set_MsgCounter1;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_9_Buf1 = AION_IDS_SPEEDGOAT_B.set_MsgCounter1;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_9_Buf2 = AION_IDS_SPEEDGOAT_B.set_MsgCounter1;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_9_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/Unit Delay' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);

  /* RateTransition generated from: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtUnitDelayInport1 =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_Buf[AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_RDBuf];

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_DW.UnitDelay_DSTATE =
    AION_IDS_SPEEDGOAT_B.TmpRTBAtUnitDelayInport1;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_IDS_SPEEDGOAT_M->Timing.clockTick1)) {
    ++AION_IDS_SPEEDGOAT_M->Timing.clockTickH1;
  }

  AION_IDS_SPEEDGOAT_M->Timing.t[1] = AION_IDS_SPEEDGOAT_M->Timing.clockTick1 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize1 +
    AION_IDS_SPEEDGOAT_M->Timing.clockTickH1 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize1 * 4294967296.0;
}

/* Model step function for TID2 */
void AION_IDS_SPEEDGOAT_step2(void)    /* Sample time: [0.05s, 0.0s] */
{
  /* RateTransition: '<S13>/RT2' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT2_RDBuf = AION_IDS_SPEEDGOAT_DW.RT2_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT2_RDBuf) {
   case 0:
    /* RateTransition: '<S13>/RT2' */
    AION_IDS_SPEEDGOAT_B.RT2 = AION_IDS_SPEEDGOAT_DW.RT2_Buf0;
    break;

   case 1:
    /* RateTransition: '<S13>/RT2' */
    AION_IDS_SPEEDGOAT_B.RT2 = AION_IDS_SPEEDGOAT_DW.RT2_Buf1;
    break;

   case 2:
    /* RateTransition: '<S13>/RT2' */
    AION_IDS_SPEEDGOAT_B.RT2 = AION_IDS_SPEEDGOAT_DW.RT2_Buf2;
    break;
  }

  /* End of RateTransition: '<S13>/RT2' */

  /* S-Function (sg_IO61X_write_s): '<S13>/ADCU2SCU_Steer_Command_CAN_write' */

  /* Level2 S-Function Block: '<S13>/ADCU2SCU_Steer_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[4];
    sfcnOutputs(rts,2);
  }

  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_IDS_SPEEDGOAT_M->Timing.clockTick2)) {
    ++AION_IDS_SPEEDGOAT_M->Timing.clockTickH2;
  }

  AION_IDS_SPEEDGOAT_M->Timing.t[2] = AION_IDS_SPEEDGOAT_M->Timing.clockTick2 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize2 +
    AION_IDS_SPEEDGOAT_M->Timing.clockTickH2 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize2 * 4294967296.0;
}

/* Model step function for TID3 */
void AION_IDS_SPEEDGOAT_step3(void)    /* Sample time: [0.2s, 0.0s] */
{
  int8_T wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_27_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_27_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_27_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_27_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_27_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_c = AION_IDS_SPEEDGOAT_DW.RT1_27_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_c = AION_IDS_SPEEDGOAT_DW.RT1_27_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_c = AION_IDS_SPEEDGOAT_DW.RT1_27_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy' */
  AION_IDS_SPEEDGOAT_B.get_VehRdySt_g = AION_IDS_SPEEDGOAT_B.get_VehRdySt_c;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_26_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_26_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_26_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a = AION_IDS_SPEEDGOAT_DW.RT1_26_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a = AION_IDS_SPEEDGOAT_DW.RT1_26_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a = AION_IDS_SPEEDGOAT_DW.RT1_26_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy1' */
  AION_IDS_SPEEDGOAT_B.get_VehDrvMod_j = AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_57_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_57_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_57_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_57_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_57_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l =
      AION_IDS_SPEEDGOAT_DW.RT1_57_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l =
      AION_IDS_SPEEDGOAT_DW.RT1_57_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l =
      AION_IDS_SPEEDGOAT_DW.RT1_57_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy10' */
  AION_IDS_SPEEDGOAT_B.get_LowBeamSt_n =
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_55_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_55_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_55_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_55_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_55_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g =
      AION_IDS_SPEEDGOAT_DW.RT1_55_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g =
      AION_IDS_SPEEDGOAT_DW.RT1_55_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g =
      AION_IDS_SPEEDGOAT_DW.RT1_55_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy11' */
  AION_IDS_SPEEDGOAT_B.get_HighBeamSt_o =
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_52_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_52_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_52_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d = AION_IDS_SPEEDGOAT_DW.RT1_52_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d = AION_IDS_SPEEDGOAT_DW.RT1_52_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d = AION_IDS_SPEEDGOAT_DW.RT1_52_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy12' */
  AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_j =
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_56_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_56_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_56_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i = AION_IDS_SPEEDGOAT_DW.RT1_56_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i = AION_IDS_SPEEDGOAT_DW.RT1_56_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i = AION_IDS_SPEEDGOAT_DW.RT1_56_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy13' */
  AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_e =
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_36_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_36_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_36_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_36_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_36_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l = AION_IDS_SPEEDGOAT_DW.RT1_36_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l = AION_IDS_SPEEDGOAT_DW.RT1_36_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l = AION_IDS_SPEEDGOAT_DW.RT1_36_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy2' */
  AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_h =
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_45_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_45_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_45_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m = AION_IDS_SPEEDGOAT_DW.RT1_45_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m = AION_IDS_SPEEDGOAT_DW.RT1_45_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m = AION_IDS_SPEEDGOAT_DW.RT1_45_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy3' */
  AION_IDS_SPEEDGOAT_B.get_SteeringAngle_d =
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_39_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_39_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_39_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_39_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_39_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i = AION_IDS_SPEEDGOAT_DW.RT1_39_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i = AION_IDS_SPEEDGOAT_DW.RT1_39_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i = AION_IDS_SPEEDGOAT_DW.RT1_39_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy4' */
  AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_f =
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_GearLeverIntv_d =
    AION_IDS_SPEEDGOAT_B.get_GearLeverIntv;

  /* SignalConversion: '<S6>/Signal Copy5' */
  AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_f =
    AION_IDS_SPEEDGOAT_B.get_GearLeverIntv_d;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_19_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_19_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_19_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_19_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_19_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehSpd_a = AION_IDS_SPEEDGOAT_DW.RT1_19_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehSpd_a = AION_IDS_SPEEDGOAT_DW.RT1_19_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehSpd_a = AION_IDS_SPEEDGOAT_DW.RT1_19_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy6' */
  AION_IDS_SPEEDGOAT_B.get_VehSpd_h = AION_IDS_SPEEDGOAT_B.get_VehSpd_a;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_50_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_50_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_50_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_50_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_50_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j = AION_IDS_SPEEDGOAT_DW.RT1_50_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j = AION_IDS_SPEEDGOAT_DW.RT1_50_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j = AION_IDS_SPEEDGOAT_DW.RT1_50_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy7' */
  AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_a =
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_51_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_51_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_51_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_51_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_51_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g = AION_IDS_SPEEDGOAT_DW.RT1_51_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g = AION_IDS_SPEEDGOAT_DW.RT1_51_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g = AION_IDS_SPEEDGOAT_DW.RT1_51_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy8' */
  AION_IDS_SPEEDGOAT_B.get_HazardLampSt_h =
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_53_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_53_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_53_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_53_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_53_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HornSt_f = AION_IDS_SPEEDGOAT_DW.RT1_53_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HornSt_f = AION_IDS_SPEEDGOAT_DW.RT1_53_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HornSt_f = AION_IDS_SPEEDGOAT_DW.RT1_53_Buf2;
    break;
  }

  /* SignalConversion: '<S6>/Signal Copy9' */
  AION_IDS_SPEEDGOAT_B.get_HornSt_m = AION_IDS_SPEEDGOAT_B.get_HornSt_f;

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_RDBuf =
    AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p =
      AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p =
      AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p =
      AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_RDBuf =
    AION_IDS_SPEEDGOAT_DW.BrakeReq_test_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.BrakeReq_test_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.BrakeReq_test_e =
      AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.BrakeReq_test_e =
      AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.BrakeReq_test_e =
      AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport6 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport6 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport6 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport7 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport7 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport7 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_8_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_8_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_8_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_8_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_8_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum1_n = AION_IDS_SPEEDGOAT_DW.RT1_8_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum1_n = AION_IDS_SPEEDGOAT_DW.RT1_8_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum1_n = AION_IDS_SPEEDGOAT_DW.RT1_8_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_9_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_9_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_9_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_9_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_9_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter1_a = AION_IDS_SPEEDGOAT_DW.RT1_9_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter1_a = AION_IDS_SPEEDGOAT_DW.RT1_9_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter1_a = AION_IDS_SPEEDGOAT_DW.RT1_9_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_10_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_10_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_10_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum2_o = AION_IDS_SPEEDGOAT_DW.RT1_10_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum2_o = AION_IDS_SPEEDGOAT_DW.RT1_10_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum2_o = AION_IDS_SPEEDGOAT_DW.RT1_10_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_11_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_11_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_11_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter2_g = AION_IDS_SPEEDGOAT_DW.RT1_11_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter2_g = AION_IDS_SPEEDGOAT_DW.RT1_11_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter2_g = AION_IDS_SPEEDGOAT_DW.RT1_11_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_12_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_12_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_12_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum3_j = AION_IDS_SPEEDGOAT_DW.RT1_12_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum3_j = AION_IDS_SPEEDGOAT_DW.RT1_12_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum3_j = AION_IDS_SPEEDGOAT_DW.RT1_12_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_13_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_13_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_13_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter3_k = AION_IDS_SPEEDGOAT_DW.RT1_13_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter3_k = AION_IDS_SPEEDGOAT_DW.RT1_13_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter3_k = AION_IDS_SPEEDGOAT_DW.RT1_13_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport14 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport14 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport14 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport15 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport15 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport15 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ABSActiveSt_j = AION_IDS_SPEEDGOAT_B.get_ABSActiveSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehSpdVD_a = AION_IDS_SPEEDGOAT_B.get_VehSpdVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_21_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_21_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_21_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_21_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_21_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_YawRate_o = AION_IDS_SPEEDGOAT_DW.RT1_21_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_YawRate_o = AION_IDS_SPEEDGOAT_DW.RT1_21_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_YawRate_o = AION_IDS_SPEEDGOAT_DW.RT1_21_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_22_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_22_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_22_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_22_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_22_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f =
      AION_IDS_SPEEDGOAT_DW.RT1_22_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f =
      AION_IDS_SPEEDGOAT_DW.RT1_22_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f =
      AION_IDS_SPEEDGOAT_DW.RT1_22_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_23_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_23_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_23_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_23_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_23_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a =
      AION_IDS_SPEEDGOAT_DW.RT1_23_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a =
      AION_IDS_SPEEDGOAT_DW.RT1_23_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a =
      AION_IDS_SPEEDGOAT_DW.RT1_23_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_24_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_24_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_24_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_d =
      AION_IDS_SPEEDGOAT_DW.RT1_24_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_d =
      AION_IDS_SPEEDGOAT_DW.RT1_24_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_d =
      AION_IDS_SPEEDGOAT_DW.RT1_24_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_28_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_28_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_28_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRng_j = AION_IDS_SPEEDGOAT_DW.RT1_28_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRng_j = AION_IDS_SPEEDGOAT_DW.RT1_28_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRng_j = AION_IDS_SPEEDGOAT_DW.RT1_28_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_29_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_29_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_29_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_29_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_29_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g = AION_IDS_SPEEDGOAT_DW.RT1_29_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g = AION_IDS_SPEEDGOAT_DW.RT1_29_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g = AION_IDS_SPEEDGOAT_DW.RT1_29_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD_p =
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_31_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_31_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_31_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_31_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_31_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f =
      AION_IDS_SPEEDGOAT_DW.RT1_31_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f =
      AION_IDS_SPEEDGOAT_DW.RT1_31_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f =
      AION_IDS_SPEEDGOAT_DW.RT1_31_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_AccElecECFail_b =
    AION_IDS_SPEEDGOAT_B.get_AccElecECFail;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_33_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_33_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_33_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_33_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_33_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_d =
      AION_IDS_SPEEDGOAT_DW.RT1_33_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_d =
      AION_IDS_SPEEDGOAT_DW.RT1_33_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_d =
      AION_IDS_SPEEDGOAT_DW.RT1_33_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_BrkPedalSt_d = AION_IDS_SPEEDGOAT_B.get_BrkPedalSt;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_35_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_35_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_35_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_d =
      AION_IDS_SPEEDGOAT_DW.RT1_35_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_d =
      AION_IDS_SPEEDGOAT_DW.RT1_35_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_d =
      AION_IDS_SPEEDGOAT_DW.RT1_35_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_37_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_37_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_37_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_37_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_37_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatQuitReport_d = AION_IDS_SPEEDGOAT_DW.RT1_37_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatQuitReport_d = AION_IDS_SPEEDGOAT_DW.RT1_37_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatQuitReport_d = AION_IDS_SPEEDGOAT_DW.RT1_37_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_38_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_38_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_38_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_38_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_38_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_e =
      AION_IDS_SPEEDGOAT_DW.RT1_38_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_e =
      AION_IDS_SPEEDGOAT_DW.RT1_38_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_e =
      AION_IDS_SPEEDGOAT_DW.RT1_38_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_40_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_40_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_40_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_40_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_40_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngQuitReport_o = AION_IDS_SPEEDGOAT_DW.RT1_40_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngQuitReport_o = AION_IDS_SPEEDGOAT_DW.RT1_40_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngQuitReport_o = AION_IDS_SPEEDGOAT_DW.RT1_40_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv_g =
    AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SysSt_b = AION_IDS_SPEEDGOAT_B.get_SysSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt_p =
    AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt_e =
    AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_46_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_46_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_46_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_46_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_46_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_j =
      AION_IDS_SPEEDGOAT_DW.RT1_46_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_j =
      AION_IDS_SPEEDGOAT_DW.RT1_46_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_j =
      AION_IDS_SPEEDGOAT_DW.RT1_46_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD_f =
    AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD_d =
    AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_49_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_49_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_49_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_49_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_49_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e = AION_IDS_SPEEDGOAT_DW.RT1_49_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e = AION_IDS_SPEEDGOAT_DW.RT1_49_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e = AION_IDS_SPEEDGOAT_DW.RT1_49_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_KeySt_e = AION_IDS_SPEEDGOAT_B.get_KeySt;

  /* ModelReference generated from: '<S1>/AION_auto_mode_request' */
  AION_auto_mode_request
    (&AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3,
     &AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p,
     &AION_IDS_SPEEDGOAT_B.BrakeReq_test_e,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport6,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport7,
     &AION_IDS_SPEEDGOAT_B.set_Checksum1_n,
     &AION_IDS_SPEEDGOAT_B.set_MsgCounter1_a,
     &AION_IDS_SPEEDGOAT_B.set_Checksum2_o,
     &AION_IDS_SPEEDGOAT_B.set_MsgCounter2_g,
     &AION_IDS_SPEEDGOAT_B.set_Checksum3_j,
     &AION_IDS_SPEEDGOAT_B.set_MsgCounter3_k,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport14,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport15,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17,
     &AION_IDS_SPEEDGOAT_B.get_ABSActiveSt_j, &AION_IDS_SPEEDGOAT_B.get_VehSpd_a,
     &AION_IDS_SPEEDGOAT_B.get_VehSpdVD_a, &AION_IDS_SPEEDGOAT_B.get_YawRate_o,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a,
     &AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_d,
     &AION_IDS_SPEEDGOAT_B.get_GearLeverIntv_d,
     &AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a, &AION_IDS_SPEEDGOAT_B.get_VehRdySt_c,
     &AION_IDS_SPEEDGOAT_B.get_VehRng_j, &AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g,
     &AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD_p,
     &AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f,
     &AION_IDS_SPEEDGOAT_B.get_AccElecECFail_b,
     &AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_d,
     &AION_IDS_SPEEDGOAT_B.get_BrkPedalSt_d,
     &AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_d,
     &AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l,
     &AION_IDS_SPEEDGOAT_B.get_LatQuitReport_d,
     &AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_e,
     &AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i,
     &AION_IDS_SPEEDGOAT_B.get_LngQuitReport_o,
     &AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv_g, &AION_IDS_SPEEDGOAT_B.get_SysSt_b,
     &AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt_p,
     &AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt_e,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_j,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD_f,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD_d,
     &AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e,
     &AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j,
     &AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g,
     &AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d, &AION_IDS_SPEEDGOAT_B.get_HornSt_f,
     &AION_IDS_SPEEDGOAT_B.get_KeySt_e,
     &AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g,
     &AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i,
     &AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l,
     &AION_IDS_SPEEDGOAT_B.set_LatCtrlReq_n,
     &AION_IDS_SPEEDGOAT_B.set_SteerAngReq_k,
     &AION_IDS_SPEEDGOAT_B.set_LngCtrlReq_p,
     &AION_IDS_SPEEDGOAT_B.set_AutoTrqWhlReq_g,
     &AION_IDS_SPEEDGOAT_B.set_BrakeReq_e,
     &AION_IDS_SPEEDGOAT_B.set_GearLvlReq_o,
     &AION_IDS_SPEEDGOAT_B.set_GearLvlReqVD_a,
     &AION_IDS_SPEEDGOAT_B.set_Checksum1_b,
     &AION_IDS_SPEEDGOAT_B.set_MsgCounter1_i,
     &AION_IDS_SPEEDGOAT_B.set_Checksum2_j,
     &AION_IDS_SPEEDGOAT_B.set_MsgCounter2_f,
     &AION_IDS_SPEEDGOAT_B.set_Checksum3_o,
     &AION_IDS_SPEEDGOAT_B.set_MsgCounter3_b,
     &AION_IDS_SPEEDGOAT_B.set_BeamReq_i,
     &AION_IDS_SPEEDGOAT_B.set_BodyCtrlReq_b,
     &AION_IDS_SPEEDGOAT_B.set_HornRingReq_m,
     &AION_IDS_SPEEDGOAT_B.set_TurnLightReq_j,
     &AION_IDS_SPEEDGOAT_B.get_ABSActiveSt_i, &AION_IDS_SPEEDGOAT_B.get_VehSpd_d,
     &AION_IDS_SPEEDGOAT_B.get_VehSpdVD_f, &AION_IDS_SPEEDGOAT_B.get_YawRate_a,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_a,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_h,
     &AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_g,
     &AION_IDS_SPEEDGOAT_B.get_GearLeverIntv_l,
     &AION_IDS_SPEEDGOAT_B.get_VehDrvMod_b, &AION_IDS_SPEEDGOAT_B.get_VehRdySt_a,
     &AION_IDS_SPEEDGOAT_B.get_VehRng_d, &AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_e,
     &AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD_n,
     &AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_l,
     &AION_IDS_SPEEDGOAT_B.get_AccElecECFail_g,
     &AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_k,
     &AION_IDS_SPEEDGOAT_B.get_BrkPedalSt_i,
     &AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_g,
     &AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_o,
     &AION_IDS_SPEEDGOAT_B.get_LatQuitReport_c,
     &AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_l,
     &AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_l,
     &AION_IDS_SPEEDGOAT_B.get_LngQuitReport_j,
     &AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv_o, &AION_IDS_SPEEDGOAT_B.get_SysSt_c,
     &AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt_o,
     &AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt_d,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngle_l,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_i,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD_o,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD_n,
     &AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_d,
     &AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_jx,
     &AION_IDS_SPEEDGOAT_B.get_HazardLampSt_o,
     &AION_IDS_SPEEDGOAT_B.get_HighBeamSt_f, &AION_IDS_SPEEDGOAT_B.get_HornSt_n,
     &AION_IDS_SPEEDGOAT_B.get_KeySt_o,
     &AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_k,
     &AION_IDS_SPEEDGOAT_B.get_LowBeamSt_g,
     &AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_c,
     &(AION_IDS_SPEEDGOAT_DW.AION_auto_mode_request_InstanceData.rtb));

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_lateral_control_info.set_LatCtrlReq
    = AION_IDS_SPEEDGOAT_B.set_LatCtrlReq_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_lateral_control_info.set_SteerAngReq
    = AION_IDS_SPEEDGOAT_B.set_SteerAngReq_k;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_longitudinal_control_info.set_LngCtrlReq
    = AION_IDS_SPEEDGOAT_B.set_LngCtrlReq_p;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_longitudinal_control_info.set_AutoTrqWhlReq
    = AION_IDS_SPEEDGOAT_B.set_AutoTrqWhlReq_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_longitudinal_control_info.set_BrakeReq
    = AION_IDS_SPEEDGOAT_B.set_BrakeReq_e;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_longitudinal_control_info.set_GearLvlReq
    = AION_IDS_SPEEDGOAT_B.set_GearLvlReq_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_longitudinal_control_info.set_GearLvlReqVD
    = AION_IDS_SPEEDGOAT_B.set_GearLvlReqVD_a;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_Checksum1 =
    AION_IDS_SPEEDGOAT_B.set_Checksum1_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_MsgCounter1 =
    AION_IDS_SPEEDGOAT_B.set_MsgCounter1_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_Checksum2 =
    AION_IDS_SPEEDGOAT_B.set_Checksum2_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_MsgCounter2 =
    AION_IDS_SPEEDGOAT_B.set_MsgCounter2_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_Checksum3 =
    AION_IDS_SPEEDGOAT_B.set_Checksum3_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_MsgCounter3 =
    AION_IDS_SPEEDGOAT_B.set_MsgCounter3_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_BeamReq =
    AION_IDS_SPEEDGOAT_B.set_BeamReq_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_BodyCtrlReq =
    AION_IDS_SPEEDGOAT_B.set_BodyCtrlReq_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_HornRingReq =
    AION_IDS_SPEEDGOAT_B.set_HornRingReq_m;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_TurnLightReq =
    AION_IDS_SPEEDGOAT_B.set_TurnLightReq_j;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_ABSActiveSt =
    AION_IDS_SPEEDGOAT_B.get_ABSActiveSt_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_VehSpd =
    AION_IDS_SPEEDGOAT_B.get_VehSpd_d;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_VehSpdVD =
    AION_IDS_SPEEDGOAT_B.get_VehSpdVD_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_YawRate =
    AION_IDS_SPEEDGOAT_B.get_YawRate_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_ActVehLaltrlAccel
    = AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_ActVehLongAccel
    = AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_h;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_ActVehWheelTorq
    = AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_GearLeverIntv =
    AION_IDS_SPEEDGOAT_B.get_GearLeverIntv_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_VehDrvMod =
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_VehRdySt =
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_VehRng =
    AION_IDS_SPEEDGOAT_B.get_VehRng_d;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_CrntGearLvl =
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_e;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_CrntGearLvlVD =
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_GasPedalActPst =
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_AccElecECFail =
    AION_IDS_SPEEDGOAT_B.get_AccElecECFail_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_VehWheelTorqMax
    = AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_k;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_BrkPedalSt =
    AION_IDS_SPEEDGOAT_B.get_BrkPedalSt_i;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LatAutoCheckReport
    = AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LatCtrlMode =
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LatQuitReport =
    AION_IDS_SPEEDGOAT_B.get_LatQuitReport_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LngAutoCheckIReport
    = AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LngCtrlMode =
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LngQuitReport =
    AION_IDS_SPEEDGOAT_B.get_LngQuitReport_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_StrngWhlIntv =
    AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv_o;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPB_info.get_SysSt =
    AION_IDS_SPEEDGOAT_B.get_SysSt_c;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SRS_info.get_DriverSeatBeltSt
    = AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SRS_info.get_PsngrSeatBeltSt
    = AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt_d;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_SteeringAngle =
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_SteeringAngleSpd
    = AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_SteeringAngleSpdVD
    = AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_SteeringAngleVD
    = AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_StrngWhlTorq =
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_d;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_CtrlAvailable =
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_jx;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_HazardLampSt =
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_HighBeamSt =
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_HornSt =
    AION_IDS_SPEEDGOAT_B.get_HornSt_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_KeySt =
    AION_IDS_SPEEDGOAT_B.get_KeySt_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_LeftTurnLampSt =
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_k;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_LowBeamSt =
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_RightTurnLampSt
    = AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_c;

  /* RateTransition generated from: '<S1>/Unit Delay' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_Buf[wrBufIdx] =
    AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1;
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_LstBufWR = wrBufIdx;

  /* End of RateTransition generated from: '<S1>/Unit Delay' */

  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.2, which is the step size
   * of the task. Size of "clockTick3" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  AION_IDS_SPEEDGOAT_M->Timing.clockTick3++;
  if (!AION_IDS_SPEEDGOAT_M->Timing.clockTick3) {
    AION_IDS_SPEEDGOAT_M->Timing.clockTickH3++;
  }
}

/* Model wrapper function for compatibility with a static main program */
void AION_IDS_SPEEDGOAT_step(int_T tid)
{
  switch (tid) {
   case 0 :
    AION_IDS_SPEEDGOAT_step0();
    break;

   case 1 :
    AION_IDS_SPEEDGOAT_step1();
    break;

   case 2 :
    AION_IDS_SPEEDGOAT_step2();
    break;

   case 3 :
    AION_IDS_SPEEDGOAT_step3();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void AION_IDS_SPEEDGOAT_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  (AION_IDS_SPEEDGOAT_M)->Timing.TaskCounters.cLimit[0] = 1;
  (AION_IDS_SPEEDGOAT_M)->Timing.TaskCounters.cLimit[1] = 2;
  (AION_IDS_SPEEDGOAT_M)->Timing.TaskCounters.cLimit[2] = 5;
  (AION_IDS_SPEEDGOAT_M)->Timing.TaskCounters.cLimit[3] = 20;
  rtsiSetSolverName(&AION_IDS_SPEEDGOAT_M->solverInfo,"FixedStepDiscrete");
  AION_IDS_SPEEDGOAT_M->solverInfoPtr = (&AION_IDS_SPEEDGOAT_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = AION_IDS_SPEEDGOAT_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    mdlTsMap[3] = 3;
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimes =
      (&AION_IDS_SPEEDGOAT_M->Timing.sampleTimesArray[0]);
    AION_IDS_SPEEDGOAT_M->Timing.offsetTimes =
      (&AION_IDS_SPEEDGOAT_M->Timing.offsetTimesArray[0]);

    /* task periods */
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimes[0] = (0.01);
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimes[1] = (0.02);
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimes[2] = (0.05);
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimes[3] = (0.2);

    /* task offsets */
    AION_IDS_SPEEDGOAT_M->Timing.offsetTimes[0] = (0.0);
    AION_IDS_SPEEDGOAT_M->Timing.offsetTimes[1] = (0.0);
    AION_IDS_SPEEDGOAT_M->Timing.offsetTimes[2] = (0.0);
    AION_IDS_SPEEDGOAT_M->Timing.offsetTimes[3] = (0.0);
  }

  rtmSetTPtr(AION_IDS_SPEEDGOAT_M, &AION_IDS_SPEEDGOAT_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = AION_IDS_SPEEDGOAT_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      AION_IDS_SPEEDGOAT_M->Timing.perTaskSampleHitsArray;
    AION_IDS_SPEEDGOAT_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    AION_IDS_SPEEDGOAT_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(AION_IDS_SPEEDGOAT_M, -1);
  AION_IDS_SPEEDGOAT_M->Timing.stepSize0 = 0.01;
  AION_IDS_SPEEDGOAT_M->Timing.stepSize1 = 0.02;
  AION_IDS_SPEEDGOAT_M->Timing.stepSize2 = 0.05;
  AION_IDS_SPEEDGOAT_M->solverInfoPtr = (&AION_IDS_SPEEDGOAT_M->solverInfo);
  AION_IDS_SPEEDGOAT_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&AION_IDS_SPEEDGOAT_M->solverInfo, 0.01);
  rtsiSetSolverMode(&AION_IDS_SPEEDGOAT_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&AION_IDS_SPEEDGOAT_B)), 0,
                     sizeof(B_AION_IDS_SPEEDGOAT_T));

  {
    AION_IDS_SPEEDGOAT_B.UnitDelay = AION_IDS_SPEEDGOAT_rtZAION_ApplicationBus;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtUnitDelayInport1 =
      AION_IDS_SPEEDGOAT_rtZAION_ApplicationBus;
    AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1 =
      AION_IDS_SPEEDGOAT_rtZAION_ApplicationBus;
    AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.RT_f = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.RT1 = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.RT2 = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2 = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_SampleTimes = 0.0;
    AION_IDS_SPEEDGOAT_B.set_SteerAngReq = 0.0;
    AION_IDS_SPEEDGOAT_B.set_AutoTrqWhlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.set_BrakeReq = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.get_YawRate = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel = 0.0;
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst = 0.0;
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle = 0.0;
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_AutoTrqWhlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_BrakeReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReqVD = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_LngCtrlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_LatCtrlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_SteerAngReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_BeamReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_BodyCtrlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_HornRingReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_TurnLightReq = 0.0;
    AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test = 0.0;
    AION_IDS_SPEEDGOAT_B.BrakeReq_test = 0.0;
    AION_IDS_SPEEDGOAT_B.LatCtrlReq_test = 0.0;
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m = 0.0;
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_d = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehSpd_a = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehSpd_h = 0.0;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2 = 0.0;
    AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p = 0.0;
    AION_IDS_SPEEDGOAT_B.BrakeReq_test_e = 0.0;
    AION_IDS_SPEEDGOAT_B.get_YawRate_o = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a = 0.0;
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f = 0.0;
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e = 0.0;
    AION_IDS_SPEEDGOAT_B.set_SteerAngReq_k = 0.0;
    AION_IDS_SPEEDGOAT_B.set_AutoTrqWhlReq_g = 0.0;
    AION_IDS_SPEEDGOAT_B.set_BrakeReq_e = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehSpd_d = 0.0;
    AION_IDS_SPEEDGOAT_B.get_YawRate_a = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_a = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_h = 0.0;
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_l = 0.0;
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_l = 0.0;
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_d = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o8 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o8 = 0.0;
    AION_IDS_SPEEDGOAT_B.set_GearLvlReqVD = Invalid;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion4 = Invalid;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport7 = Invalid;
    AION_IDS_SPEEDGOAT_B.set_GearLvlReqVD_a = Invalid;
    AION_IDS_SPEEDGOAT_B.get_VehRdySt = NotReady;
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_c = NotReady;
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_g = NotReady;
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_a = NotReady;
    AION_IDS_SPEEDGOAT_B.set_TurnLightReq = NoLightRequest;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion14 = NoLightRequest;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17 = NoLightRequest;
    AION_IDS_SPEEDGOAT_B.set_TurnLightReq_j = NoLightRequest;
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl = InvalidGearStatus;
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g = InvalidGearStatus;
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_e = InvalidGearStatus;
    AION_IDS_SPEEDGOAT_B.set_GearLvlReq = NoRequest;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion2 = NoRequest;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport6 = NoRequest;
    AION_IDS_SPEEDGOAT_B.set_GearLvlReq_o = NoRequest;
    AION_IDS_SPEEDGOAT_B.set_BodyCtrlReq = Disable;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion12 = Disable;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport15 = Disable;
    AION_IDS_SPEEDGOAT_B.set_BodyCtrlReq_b = Disable;
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod = InvalidDriveStatus;
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a = InvalidDriveStatus;
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_j = InvalidDriveStatus;
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_b = InvalidDriveStatus;
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_h = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_f = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_o = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_l = ManualStatus;
    AION_IDS_SPEEDGOAT_B.set_LatCtrlReq = Manual;
    AION_IDS_SPEEDGOAT_B.set_LngCtrlReq = Manual;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion7 = Manual;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion9 = Manual;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1 = Manual;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3 = Manual;
    AION_IDS_SPEEDGOAT_B.set_LatCtrlReq_n = Manual;
    AION_IDS_SPEEDGOAT_B.set_LngCtrlReq_p = Manual;
    AION_IDS_SPEEDGOAT_B.set_BeamReq = NoBeamRequest;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion18 = NoBeamRequest;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport14 = NoBeamRequest;
    AION_IDS_SPEEDGOAT_B.set_BeamReq_i = NoBeamRequest;
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable = NotAvailable;
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j = NotAvailable;
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_a = NotAvailable;
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_jx = NotAvailable;
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HornSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_n = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_o = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_j = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_e = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_h = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HornSt_f = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HornSt_m = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_o = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_f = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HornSt_n = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_k = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_g = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_c = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.set_HornRingReq = NotActiveRequest;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion16 = NotActiveRequest;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16 =
      NotActiveRequest;
    AION_IDS_SPEEDGOAT_B.set_HornRingReq_m = NotActiveRequest;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&AION_IDS_SPEEDGOAT_DW), 0,
                     sizeof(DW_AION_IDS_SPEEDGOAT_T));
  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_19_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_19_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_19_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_21_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_21_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_21_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_22_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_22_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_22_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_23_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_23_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_23_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_31_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_31_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_31_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_45_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_45_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_45_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_49_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_49_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_49_Buf2 = 0.0;

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.sfcnInfo;
    AION_IDS_SPEEDGOAT_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(AION_IDS_SPEEDGOAT_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &AION_IDS_SPEEDGOAT_M->Sizes.numSampTimes);
    AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (AION_IDS_SPEEDGOAT_M)[0]);
    AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (AION_IDS_SPEEDGOAT_M)[1]);
    AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.taskTimePtrs[2] = &(rtmGetTPtr
      (AION_IDS_SPEEDGOAT_M)[2]);
    AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.taskTimePtrs[3] = &(rtmGetTPtr
      (AION_IDS_SPEEDGOAT_M)[3]);
    rtssSetTPtrPtr(sfcnInfo,AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(AION_IDS_SPEEDGOAT_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(AION_IDS_SPEEDGOAT_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (AION_IDS_SPEEDGOAT_M));
    rtssSetStepSizePtr(sfcnInfo, &AION_IDS_SPEEDGOAT_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(AION_IDS_SPEEDGOAT_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &AION_IDS_SPEEDGOAT_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &AION_IDS_SPEEDGOAT_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &AION_IDS_SPEEDGOAT_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &AION_IDS_SPEEDGOAT_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &AION_IDS_SPEEDGOAT_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &AION_IDS_SPEEDGOAT_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &AION_IDS_SPEEDGOAT_M->solverInfoPtr);
  }

  AION_IDS_SPEEDGOAT_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.childSFunctions[0]),
                       0,
                       5*sizeof(SimStruct));
    AION_IDS_SPEEDGOAT_M->childSfunctions =
      (&AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        AION_IDS_SPEEDGOAT_M->childSfunctions[i] =
          (&AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: AION_IDS_SPEEDGOAT/<S10>/SCU2ADCU_CAN_read (sg_IO61X_read_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AION_IDS_SPEEDGOAT_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &AION_IDS_SPEEDGOAT_M->
                         NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "SCU2ADCU_CAN_read");
      ssSetPath(rts,
                "AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN/SCU2ADCU(IDS)_loop_receive/SCU2ADCU_CAN_read");
      ssSetRTModel(rts,AION_IDS_SPEEDGOAT_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &AION_IDS_SPEEDGOAT_DW.SCU2ADCU_CAN_read_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &AION_IDS_SPEEDGOAT_DW.SCU2ADCU_CAN_read_IWORK);
      }

      /* registration */
      sg_IO61X_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AION_IDS_SPEEDGOAT/<S2>/CAN Setup (sg_IO612_setup_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AION_IDS_SPEEDGOAT_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &AION_IDS_SPEEDGOAT_M->
                         NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup");
      ssSetPath(rts, "AION_IDS_SPEEDGOAT/Communication_Layer/CAN Setup");
      ssSetRTModel(rts,AION_IDS_SPEEDGOAT_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 31);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P31_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &AION_IDS_SPEEDGOAT_DW.CANSetup_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &AION_IDS_SPEEDGOAT_DW.CANSetup_IWORK);
      }

      /* registration */
      sg_IO612_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AION_IDS_SPEEDGOAT/<S13>/ADCU2SCU_Brake_Command_CAN_write (sg_IO61X_write_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AION_IDS_SPEEDGOAT_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &AION_IDS_SPEEDGOAT_M->
                         NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &AION_IDS_SPEEDGOAT_B.RT_f);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "ADCU2SCU_Brake_Command_CAN_write");
      ssSetPath(rts,
                "AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN/CAN_pack_ADCU2SCU/ADCU2SCU_Brake_Command_CAN_write");
      ssSetRTModel(rts,AION_IDS_SPEEDGOAT_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Brake_Command_CAN_write_IWORK);
      ssSetPWork(rts, (void **)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Brake_Command_CAN_write_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Brake_Command_CAN_write_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Brake_Command_CAN_write_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AION_IDS_SPEEDGOAT/<S13>/ADCU2SCU_Gear_Command_CAN_write (sg_IO61X_write_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AION_IDS_SPEEDGOAT_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &AION_IDS_SPEEDGOAT_M->
                         NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &AION_IDS_SPEEDGOAT_B.RT1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "ADCU2SCU_Gear_Command_CAN_write");
      ssSetPath(rts,
                "AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN/CAN_pack_ADCU2SCU/ADCU2SCU_Gear_Command_CAN_write");
      ssSetRTModel(rts,AION_IDS_SPEEDGOAT_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Gear_Command_CAN_write_IWORK);
      ssSetPWork(rts, (void **)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Gear_Command_CAN_write_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Gear_Command_CAN_write_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Gear_Command_CAN_write_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AION_IDS_SPEEDGOAT/<S13>/ADCU2SCU_Steer_Command_CAN_write (sg_IO61X_write_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AION_IDS_SPEEDGOAT_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &AION_IDS_SPEEDGOAT_M->
                         NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &AION_IDS_SPEEDGOAT_B.RT2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "ADCU2SCU_Steer_Command_CAN_write");
      ssSetPath(rts,
                "AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN/CAN_pack_ADCU2SCU/ADCU2SCU_Steer_Command_CAN_write");
      ssSetRTModel(rts,AION_IDS_SPEEDGOAT_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Steer_Command_CAN_write_IWORK);
      ssSetPWork(rts, (void **)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Steer_Command_CAN_write_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Steer_Command_CAN_write_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Steer_Command_CAN_write_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Model Initialize function for ModelReference Block: '<S1>/AION_auto_mode_request' */
  AION_auto_mode_request_initialize(rtmGetErrorStatusPointer
    (AION_IDS_SPEEDGOAT_M),
    &(AION_IDS_SPEEDGOAT_DW.AION_auto_mode_request_InstanceData.rtm),
    &(AION_IDS_SPEEDGOAT_DW.AION_auto_mode_request_InstanceData.rtb),
    &(AION_IDS_SPEEDGOAT_DW.AION_auto_mode_request_InstanceData.rtdw));

  /* Model Initialize function for ModelReference Block: '<S2>/Signal_Transfer' */
  AION_signal_transfer_initialize(rtmGetErrorStatusPointer(AION_IDS_SPEEDGOAT_M),
    &(AION_IDS_SPEEDGOAT_DW.Signal_Transfer_InstanceData.rtm),
    &(AION_IDS_SPEEDGOAT_DW.Signal_Transfer_InstanceData.rtb));

  /* Start for S-Function (sg_IO612_setup_s): '<S2>/CAN Setup' */
  /* Level2 S-Function Block: '<S2>/CAN Setup' (sg_IO612_setup_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Iterator SubSystem: '<S9>/SCU2ADCU(IDS)_loop_receive' */

  /* Start for S-Function (sg_IO61X_read_s): '<S10>/SCU2ADCU_CAN_read' */
  /* Level2 S-Function Block: '<S10>/SCU2ADCU_CAN_read' (sg_IO61X_read_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack1' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack1 -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack10' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack10 -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack11' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack11 -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack12' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack12 -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack13' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack13 -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack14' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack14 -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack15' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack15 -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack6' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack6 -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack7' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack7 -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack8' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack8 -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Brake_Status_CAN_unpack9' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Brake_Status_CAN_unpack9 -----------------*/

  /* Start for S-Function (scanunpack): '<S11>/SCU2ADCU_Status1_CAN_unpack1' */

  /*-----------S-Function Block: <S11>/SCU2ADCU_Status1_CAN_unpack1 -----------------*/

  /* End of Start for SubSystem: '<S9>/SCU2ADCU(IDS)_loop_receive' */

  /* Start for S-Function (sg_IO61X_write_s): '<S13>/ADCU2SCU_Brake_Command_CAN_write' */
  /* Level2 S-Function Block: '<S13>/ADCU2SCU_Brake_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO61X_write_s): '<S13>/ADCU2SCU_Gear_Command_CAN_write' */
  /* Level2 S-Function Block: '<S13>/ADCU2SCU_Gear_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for RateTransition: '<S13>/RT2' */
  AION_IDS_SPEEDGOAT_B.RT2 = AION_IDS_SPEEDGOAT_cal->RT2_InitialCondition;

  /* Start for RateTransition: '<S13>/RT2' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p =
    AION_IDS_SPEEDGOAT_cal->AutoTrqWhlReq_test_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.BrakeReq_test_e =
    AION_IDS_SPEEDGOAT_cal->BrakeReq_test_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport1_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport14 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport14_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport15 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport15_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport16_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport17_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport2_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport3_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport6 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport6_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport7 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport7_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_Checksum2_o =
    AION_IDS_SPEEDGOAT_cal->RT1_10_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_MsgCounter2_g =
    AION_IDS_SPEEDGOAT_cal->RT1_11_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_Checksum3_j =
    AION_IDS_SPEEDGOAT_cal->RT1_12_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_MsgCounter3_k =
    AION_IDS_SPEEDGOAT_cal->RT1_13_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehSpd_a =
    AION_IDS_SPEEDGOAT_cal->RT1_19_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_19_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_YawRate_o =
    AION_IDS_SPEEDGOAT_cal->RT1_21_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_21_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f =
    AION_IDS_SPEEDGOAT_cal->RT1_22_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_22_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a =
    AION_IDS_SPEEDGOAT_cal->RT1_23_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_23_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_d =
    AION_IDS_SPEEDGOAT_cal->RT1_24_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a =
    AION_IDS_SPEEDGOAT_cal->RT1_26_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehRdySt_c =
    AION_IDS_SPEEDGOAT_cal->RT1_27_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_27_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehRng_j =
    AION_IDS_SPEEDGOAT_cal->RT1_28_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g =
    AION_IDS_SPEEDGOAT_cal->RT1_29_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_29_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f =
    AION_IDS_SPEEDGOAT_cal->RT1_31_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_31_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_d =
    AION_IDS_SPEEDGOAT_cal->RT1_33_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_33_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_d =
    AION_IDS_SPEEDGOAT_cal->RT1_35_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l =
    AION_IDS_SPEEDGOAT_cal->RT1_36_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_36_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LatQuitReport_d =
    AION_IDS_SPEEDGOAT_cal->RT1_37_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_37_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_e =
    AION_IDS_SPEEDGOAT_cal->RT1_38_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_38_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i =
    AION_IDS_SPEEDGOAT_cal->RT1_39_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_39_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LngQuitReport_o =
    AION_IDS_SPEEDGOAT_cal->RT1_40_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_40_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m =
    AION_IDS_SPEEDGOAT_cal->RT1_45_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_j =
    AION_IDS_SPEEDGOAT_cal->RT1_46_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_46_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e =
    AION_IDS_SPEEDGOAT_cal->RT1_49_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_49_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j =
    AION_IDS_SPEEDGOAT_cal->RT1_50_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_50_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g =
    AION_IDS_SPEEDGOAT_cal->RT1_51_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_51_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d =
    AION_IDS_SPEEDGOAT_cal->RT1_52_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_HornSt_f =
    AION_IDS_SPEEDGOAT_cal->RT1_53_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_53_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g =
    AION_IDS_SPEEDGOAT_cal->RT1_55_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_55_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i =
    AION_IDS_SPEEDGOAT_cal->RT1_56_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l =
    AION_IDS_SPEEDGOAT_cal->RT1_57_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_57_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_Checksum1_n =
    AION_IDS_SPEEDGOAT_cal->RT1_8_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_8_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_MsgCounter1_a =
    AION_IDS_SPEEDGOAT_cal->RT1_9_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_9_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtUnitDelayInport1 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtUnitDelayInport1_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/Unit Delay' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);

  /* Start for S-Function (sg_IO61X_write_s): '<S13>/ADCU2SCU_Steer_Command_CAN_write' */
  /* Level2 S-Function Block: '<S13>/ADCU2SCU_Steer_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_DW.UnitDelay_DSTATE =
    AION_IDS_SPEEDGOAT_cal->UnitDelay_InitialCondition;

  /* InitializeConditions for RateTransition: '<S13>/RT2' */
  AION_IDS_SPEEDGOAT_DW.RT2_Buf0 = AION_IDS_SPEEDGOAT_cal->RT2_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf0 =
    AION_IDS_SPEEDGOAT_cal->AutoTrqWhlReq_test_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf0 =
    AION_IDS_SPEEDGOAT_cal->BrakeReq_test_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport1_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport14_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport15_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport16_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport17_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport2_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport3_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport6_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport7_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_10_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_10_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_11_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_11_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_12_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_12_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_13_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_13_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_19_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_19_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_21_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_21_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_22_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_22_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_23_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_23_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_24_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_24_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_26_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_26_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_27_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_27_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_28_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_28_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_29_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_29_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_31_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_31_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_33_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_33_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_35_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_35_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_36_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_36_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_37_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_37_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_38_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_38_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_39_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_39_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_40_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_40_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_45_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_45_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_46_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_46_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_49_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_49_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_50_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_50_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_51_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_51_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_52_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_52_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_53_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_53_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_55_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_55_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_56_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_56_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_57_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_57_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_8_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_8_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_9_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_9_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_Buf[0] =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtUnitDelayInport1_InitialCondition;
}

/* Model terminate function */
void AION_IDS_SPEEDGOAT_terminate(void)
{
  /* Terminate for S-Function (sg_IO612_setup_s): '<S2>/CAN Setup' */
  /* Level2 S-Function Block: '<S2>/CAN Setup' (sg_IO612_setup_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for Iterator SubSystem: '<S9>/SCU2ADCU(IDS)_loop_receive' */

  /* Terminate for S-Function (sg_IO61X_read_s): '<S10>/SCU2ADCU_CAN_read' */
  /* Level2 S-Function Block: '<S10>/SCU2ADCU_CAN_read' (sg_IO61X_read_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S9>/SCU2ADCU(IDS)_loop_receive' */

  /* Terminate for S-Function (sg_IO61X_write_s): '<S13>/ADCU2SCU_Brake_Command_CAN_write' */
  /* Level2 S-Function Block: '<S13>/ADCU2SCU_Brake_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO61X_write_s): '<S13>/ADCU2SCU_Gear_Command_CAN_write' */
  /* Level2 S-Function Block: '<S13>/ADCU2SCU_Gear_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for RateTransition: '<S13>/RT2' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport14_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport15_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport6_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport7_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_19_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_21_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_22_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_23_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_27_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_29_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_31_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_33_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_36_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_37_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_38_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_39_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_40_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_46_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_49_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_50_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_51_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_53_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_55_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_57_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_8_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_9_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/Unit Delay' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);

  /* Terminate for S-Function (sg_IO61X_write_s): '<S13>/ADCU2SCU_Steer_Command_CAN_write' */
  /* Level2 S-Function Block: '<S13>/ADCU2SCU_Steer_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[4];
    sfcnTerminate(rts);
  }
}
