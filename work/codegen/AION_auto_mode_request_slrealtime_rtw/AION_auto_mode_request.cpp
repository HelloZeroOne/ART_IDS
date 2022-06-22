/*
 * AION_auto_mode_request.cpp
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

#include "AION_auto_mode_request.h"
#include "AION_auto_mode_request_private.h"

/* Named constants for Chart: '<Root>/Chart' */
const int32_T AION_auto_mode_request_CALL_EVENT = -1;
const uint32_T AION_auto_mode_request_IN_Name = 1U;
const uint32_T AION_auto_mode_request_IN_Name1 = 2U;

/* Block signals (default storage) */
B_AION_auto_mode_request_T AION_auto_mode_request_B;

/* Block states (default storage) */
DW_AION_auto_mode_request_T AION_auto_mode_request_DW;

/* External inputs (root inport signals with default storage) */
ExtU_AION_auto_mode_request_T AION_auto_mode_request_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_AION_auto_mode_request_T AION_auto_mode_request_Y;

/* Real-time model */
RT_MODEL_AION_auto_mode_request_T AION_auto_mode_request_M_ =
  RT_MODEL_AION_auto_mode_request_T();
RT_MODEL_AION_auto_mode_request_T *const AION_auto_mode_request_M =
  &AION_auto_mode_request_M_;
real_T look1_binlxpw(real_T u0, const real_T bp0[], const real_T table[],
                     uint32_T maxIndex)
{
  real_T frac;
  real_T yL_0d0;
  uint32_T bpIdx;
  uint32_T iLeft;
  uint32_T iRght;

  /* Column-major Lookup 1-D
     Search method: 'binary'
     Use previous index: 'off'
     Interpolation method: 'Linear point-slope'
     Extrapolation method: 'Linear'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  /* Prelookup - Index and Fraction
     Index Search method: 'binary'
     Extrapolation method: 'Linear'
     Use previous index: 'off'
     Use last breakpoint for index at or above upper limit: 'off'
     Remove protection against out-of-range input in generated code: 'off'
   */
  if (u0 <= bp0[0U]) {
    iLeft = 0U;
    frac = (u0 - bp0[0U]) / (bp0[1U] - bp0[0U]);
  } else if (u0 < bp0[maxIndex]) {
    /* Binary Search */
    bpIdx = maxIndex >> 1U;
    iLeft = 0U;
    iRght = maxIndex;
    while (iRght - iLeft > 1U) {
      if (u0 < bp0[bpIdx]) {
        iRght = bpIdx;
      } else {
        iLeft = bpIdx;
      }

      bpIdx = (iRght + iLeft) >> 1U;
    }

    frac = (u0 - bp0[iLeft]) / (bp0[iLeft + 1U] - bp0[iLeft]);
  } else {
    iLeft = maxIndex - 1U;
    frac = (u0 - bp0[maxIndex - 1U]) / (bp0[maxIndex] - bp0[maxIndex - 1U]);
  }

  /* Column-major Interpolation 1-D
     Interpolation method: 'Linear point-slope'
     Use last breakpoint for index at or above upper limit: 'off'
     Overflow mode: 'portable wrapping'
   */
  yL_0d0 = table[iLeft];
  return (table[iLeft + 1U] - yL_0d0) * frac + yL_0d0;
}

/* Model step function */
void AION_auto_mode_request_step(void)
{
  real_T tmp;
  boolean_T guard1 = false;
  boolean_T sf_internal_predicateOutput;

  /* S-Function (sfix_bitop): '<Root>/Bitwise AND' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_ACCButtInfo'
   */
  AION_auto_mode_request_B.BitwiseAND =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_ACCButtInfo &
    AION_auto_mode_request_P.BitwiseAND_BitMask;

  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/InBus_get_SCU_info_get_LatCtrlMode'
   */
  /* Gateway: Chart */
  AION_auto_mode_request_DW.sfEvent_b = AION_auto_mode_request_CALL_EVENT;

  /* During: Chart */
  if (AION_auto_mode_request_DW.is_active_c3_AION_auto_mode_request == 0U) {
    /* Entry: Chart */
    AION_auto_mode_request_DW.is_active_c3_AION_auto_mode_request = 1U;

    /* Entry Internal: Chart */
    /* Transition: '<S1>:17' */
    AION_auto_mode_request_DW.is_c3_AION_auto_mode_request =
      AION_auto_mode_request_IN_Name1;

    /* Entry 'Name1': '<S1>:16' */
    AION_auto_mode_request_B.LatCtrlReq = 0.0;
    AION_auto_mode_request_DW.HoldFlag++;
    if (AION_auto_mode_request_DW.HoldFlag > 5.0) {
      AION_auto_mode_request_B.QlightChannel_f = 0U;
    }
  } else if (AION_auto_mode_request_DW.is_c3_AION_auto_mode_request ==
             AION_auto_mode_request_IN_Name) {
    /* During 'Name': '<S1>:3' */
    guard1 = false;
    if (AION_auto_mode_request_B.BitwiseAND == 0U) {
      /* Transition: '<S1>:7' */
      AION_auto_mode_request_B.QlightChannel_f = 2U;
      AION_auto_mode_request_DW.HoldFlag = -5.0;
      guard1 = true;
    } else {
      sf_internal_predicateOutput = ((static_cast<int32_T>
        (AION_auto_mode_request_U.InBus_get_SCU_info_get_LatCtrlMode) == 1) || (
        static_cast<int32_T>
        (AION_auto_mode_request_U.InBus_get_SCU_info_get_LatCtrlMode) == 3));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S1>:5' */
        AION_auto_mode_request_B.QlightChannel_f = 3U;
        AION_auto_mode_request_DW.HoldFlag = 0.0;
        guard1 = true;
      } else {
        AION_auto_mode_request_B.LatCtrlReq = 1.0;
        AION_auto_mode_request_DW.HoldFlag++;
        if (AION_auto_mode_request_DW.HoldFlag > 5.0) {
          AION_auto_mode_request_B.QlightChannel_f = 0U;
        }
      }
    }

    if (guard1) {
      AION_auto_mode_request_DW.is_c3_AION_auto_mode_request =
        AION_auto_mode_request_IN_Name1;

      /* Entry 'Name1': '<S1>:16' */
      AION_auto_mode_request_B.LatCtrlReq = 0.0;
      AION_auto_mode_request_DW.HoldFlag++;
      if (AION_auto_mode_request_DW.HoldFlag > 5.0) {
        AION_auto_mode_request_B.QlightChannel_f = 0U;
      }
    }
  } else {
    /* During 'Name1': '<S1>:16' */
    sf_internal_predicateOutput = ((static_cast<int32_T>
      (AION_auto_mode_request_U.InBus_get_SCU_info_get_LatCtrlMode) == 0) &&
      (AION_auto_mode_request_B.BitwiseAND == 1U));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S1>:6' */
      AION_auto_mode_request_B.QlightChannel_f = 1U;
      AION_auto_mode_request_DW.HoldFlag = 0.0;
      AION_auto_mode_request_DW.is_c3_AION_auto_mode_request =
        AION_auto_mode_request_IN_Name;

      /* Entry 'Name': '<S1>:3' */
      AION_auto_mode_request_B.LatCtrlReq = 1.0;
      AION_auto_mode_request_DW.HoldFlag++;
      if (AION_auto_mode_request_DW.HoldFlag > 5.0) {
        AION_auto_mode_request_B.QlightChannel_f = 0U;
      }
    } else {
      AION_auto_mode_request_B.LatCtrlReq = 0.0;
      AION_auto_mode_request_DW.HoldFlag++;
      if (AION_auto_mode_request_DW.HoldFlag > 5.0) {
        AION_auto_mode_request_B.QlightChannel_f = 0U;
      }
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  AION_auto_mode_request_B.QlightChannel =
    AION_auto_mode_request_B.QlightChannel_f;

  /* Lookup_n-D: '<Root>/SPK_Chk' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   */
  AION_auto_mode_request_B.SPK_Chk = look1_binlxpw
    (AION_auto_mode_request_B.QlightChannel,
     AION_auto_mode_request_P.SPK_Chk_bp01Data,
     AION_auto_mode_request_P.SPK_Chk_tableData, 4U);

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_ADCU_info_set_MsgCounter1'
   */
  AION_auto_mode_request_B.set_MsgCounter1 =
    AION_auto_mode_request_U.InBus_set_ADCU_info_set_MsgCounter1;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_ADCU_info_set_Checksum2'
   */
  AION_auto_mode_request_B.set_Checksum2 =
    AION_auto_mode_request_U.InBus_set_ADCU_info_set_Checksum2;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_ADCU_info_set_MsgCounter2'
   */
  AION_auto_mode_request_B.set_MsgCounter2 =
    AION_auto_mode_request_U.InBus_set_ADCU_info_set_MsgCounter2;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_ADCU_info_set_Checksum3'
   */
  AION_auto_mode_request_B.set_Checksum3 =
    AION_auto_mode_request_U.InBus_set_ADCU_info_set_Checksum3;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_ADCU_info_set_MsgCounter3'
   */
  AION_auto_mode_request_B.set_MsgCounter3 =
    AION_auto_mode_request_U.InBus_set_ADCU_info_set_MsgCounter3;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_ADCU_info_set_BeamReq'
   */
  AION_auto_mode_request_B.set_BeamReq =
    AION_auto_mode_request_U.InBus_set_ADCU_info_set_BeamReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_ADCU_info_set_BodyCtrlReq'
   */
  AION_auto_mode_request_B.set_BodyCtrlReq =
    AION_auto_mode_request_U.InBus_set_ADCU_info_set_BodyCtrlReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_ADCU_info_set_HornRingReq'
   */
  AION_auto_mode_request_B.set_HornRingReq =
    AION_auto_mode_request_U.InBus_set_ADCU_info_set_HornRingReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_ADCU_info_set_TurnLightReq'
   */
  AION_auto_mode_request_B.set_TurnLightReq =
    AION_auto_mode_request_U.InBus_set_ADCU_info_set_TurnLightReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_SPK_info_set_Stx'
   */
  AION_auto_mode_request_B.set_Stx =
    AION_auto_mode_request_U.InBus_set_SPK_info_set_Stx;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_lateral_control_info_set_SteerAngReq'
   */
  AION_auto_mode_request_B.set_SteerAngReq =
    AION_auto_mode_request_U.InBus_set_lateral_control_info_set_SteerAngReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_SPK_info_set_FunctionCode'
   */
  AION_auto_mode_request_B.set_FunctionCode =
    AION_auto_mode_request_U.InBus_set_SPK_info_set_FunctionCode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_SPK_info_set_VolumeCode'
   */
  AION_auto_mode_request_B.set_VolumeCode =
    AION_auto_mode_request_U.InBus_set_SPK_info_set_VolumeCode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_SPK_info_set_Parameter'
   */
  AION_auto_mode_request_B.set_Parameter =
    AION_auto_mode_request_U.InBus_set_SPK_info_set_Parameter;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_SPK_info_set_Etx'
   */
  AION_auto_mode_request_B.set_Etx =
    AION_auto_mode_request_U.InBus_set_SPK_info_set_Etx;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCS_info_get_ABSActiveSt'
   */
  AION_auto_mode_request_B.get_ABSActiveSt =
    AION_auto_mode_request_U.InBus_get_BCS_info_get_ABSActiveSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCS_info_get_VehSpd'
   */
  AION_auto_mode_request_B.get_VehSpd =
    AION_auto_mode_request_U.InBus_get_BCS_info_get_VehSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCS_info_get_VehSpdVD'
   */
  AION_auto_mode_request_B.get_VehSpdVD =
    AION_auto_mode_request_U.InBus_get_BCS_info_get_VehSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCS_info_get_YawRate'
   */
  AION_auto_mode_request_B.get_YawRate =
    AION_auto_mode_request_U.InBus_get_BCS_info_get_YawRate;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_lateral_control_info_set_SteerWhlTorqReq'
   */
  AION_auto_mode_request_B.set_SteerWhlTorqReq =
    AION_auto_mode_request_U.InBus_set_lateral_control_info_set_SteerWhlTorqReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCS_info_get_ActVehLaltrlAccel'
   */
  AION_auto_mode_request_B.get_ActVehLaltrlAccel =
    AION_auto_mode_request_U.InBus_get_BCS_info_get_ActVehLaltrlAccel;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCS_info_get_ActVehLongAccel'
   */
  AION_auto_mode_request_B.get_ActVehLongAccel =
    AION_auto_mode_request_U.InBus_get_BCS_info_get_ActVehLongAccel;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_ActVehWheelTorq'
   */
  AION_auto_mode_request_B.get_ActVehWheelTorq =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_ActVehWheelTorq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_GearLeverIntv'
   */
  AION_auto_mode_request_B.get_GearLeverIntv =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_GearLeverIntv;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_VehDrvMod'
   */
  AION_auto_mode_request_B.get_VehDrvMod =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_VehDrvMod;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_VehRdySt'
   */
  AION_auto_mode_request_B.get_VehRdySt =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_VehRdySt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_VehRng'
   */
  AION_auto_mode_request_B.get_VehRng =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_VehRng;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_CrntGearLvl'
   */
  AION_auto_mode_request_B.get_CrntGearLvl =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_CrntGearLvl;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_CrntGearLvlVD'
   */
  AION_auto_mode_request_B.get_CrntGearLvlVD =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_CrntGearLvlVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_GasPedalActPst'
   */
  AION_auto_mode_request_B.get_GasPedalActPst =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_GasPedalActPst;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_AccElecECFail'
   */
  AION_auto_mode_request_B.get_AccElecECFail =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_AccElecECFail;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_VehWheelTorqMax'
   */
  AION_auto_mode_request_B.get_VehWheelTorqMax =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_VehWheelTorqMax;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_BrkPedalSt'
   */
  AION_auto_mode_request_B.get_BrkPedalSt =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_BrkPedalSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_VCU_info_get_ACCButtInfo'
   */
  AION_auto_mode_request_B.get_ACCButtInfo =
    AION_auto_mode_request_U.InBus_get_VCU_info_get_ACCButtInfo;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_SCU_info_get_LatAutoCheckReport'
   */
  AION_auto_mode_request_B.get_LatAutoCheckReport =
    AION_auto_mode_request_U.InBus_get_SCU_info_get_LatAutoCheckReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_SCU_info_get_LatCtrlMode'
   */
  AION_auto_mode_request_B.get_LatCtrlMode =
    AION_auto_mode_request_U.InBus_get_SCU_info_get_LatCtrlMode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_SCU_info_get_LatQuitReport'
   */
  AION_auto_mode_request_B.get_LatQuitReport =
    AION_auto_mode_request_U.InBus_get_SCU_info_get_LatQuitReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_SCU_info_get_LngAutoCheckIReport'
   */
  AION_auto_mode_request_B.get_LngAutoCheckIReport =
    AION_auto_mode_request_U.InBus_get_SCU_info_get_LngAutoCheckIReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_SCU_info_get_LngCtrlMode'
   */
  AION_auto_mode_request_B.get_LngCtrlMode =
    AION_auto_mode_request_U.InBus_get_SCU_info_get_LngCtrlMode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_SCU_info_get_LngQuitReport'
   */
  AION_auto_mode_request_B.get_LngQuitReport =
    AION_auto_mode_request_U.InBus_get_SCU_info_get_LngQuitReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_longitudinal_control_info_set_AutoTrqWhlReq'
   */
  AION_auto_mode_request_B.set_AutoTrqWhlReq =
    AION_auto_mode_request_U.InBus_set_longitudinal_control_info_set_AutoTrqWhlReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_SCU_info_get_StrngWhlIntv'
   */
  AION_auto_mode_request_B.get_StrngWhlIntv =
    AION_auto_mode_request_U.InBus_get_SCU_info_get_StrngWhlIntv;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_EPB_info_get_SysSt'
   */
  AION_auto_mode_request_B.get_SysSt =
    AION_auto_mode_request_U.InBus_get_EPB_info_get_SysSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_SRS_info_get_DriverSeatBeltSt'
   */
  AION_auto_mode_request_B.get_DriverSeatBeltSt =
    AION_auto_mode_request_U.InBus_get_SRS_info_get_DriverSeatBeltSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_SRS_info_get_PsngrSeatBeltSt'
   */
  AION_auto_mode_request_B.get_PsngrSeatBeltSt =
    AION_auto_mode_request_U.InBus_get_SRS_info_get_PsngrSeatBeltSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_EPS_info_get_SteeringAngle'
   */
  AION_auto_mode_request_B.get_SteeringAngle =
    AION_auto_mode_request_U.InBus_get_EPS_info_get_SteeringAngle;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_EPS_info_get_SteeringAngleSpd'
   */
  AION_auto_mode_request_B.get_SteeringAngleSpd =
    AION_auto_mode_request_U.InBus_get_EPS_info_get_SteeringAngleSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_EPS_info_get_SteeringAngleSpdVD'
   */
  AION_auto_mode_request_B.get_SteeringAngleSpdVD =
    AION_auto_mode_request_U.InBus_get_EPS_info_get_SteeringAngleSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_EPS_info_get_SteeringAngleVD'
   */
  AION_auto_mode_request_B.get_SteeringAngleVD =
    AION_auto_mode_request_U.InBus_get_EPS_info_get_SteeringAngleVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_EPS_info_get_StrngWhlTorq'
   */
  AION_auto_mode_request_B.get_StrngWhlTorq =
    AION_auto_mode_request_U.InBus_get_EPS_info_get_StrngWhlTorq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCM_info_get_CtrlAvailable'
   */
  AION_auto_mode_request_B.get_CtrlAvailable =
    AION_auto_mode_request_U.InBus_get_BCM_info_get_CtrlAvailable;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_longitudinal_control_info_set_BrakeReq'
   */
  AION_auto_mode_request_B.set_BrakeReq =
    AION_auto_mode_request_U.InBus_set_longitudinal_control_info_set_BrakeReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCM_info_get_HazardLampSt'
   */
  AION_auto_mode_request_B.get_HazardLampSt =
    AION_auto_mode_request_U.InBus_get_BCM_info_get_HazardLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCM_info_get_HighBeamSt'
   */
  AION_auto_mode_request_B.get_HighBeamSt =
    AION_auto_mode_request_U.InBus_get_BCM_info_get_HighBeamSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCM_info_get_HornSt'
   */
  AION_auto_mode_request_B.get_HornSt =
    AION_auto_mode_request_U.InBus_get_BCM_info_get_HornSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCM_info_get_KeySt'
   */
  AION_auto_mode_request_B.get_KeySt =
    AION_auto_mode_request_U.InBus_get_BCM_info_get_KeySt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCM_info_get_LeftTurnLampSt'
   */
  AION_auto_mode_request_B.get_LeftTurnLampSt =
    AION_auto_mode_request_U.InBus_get_BCM_info_get_LeftTurnLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCM_info_get_LowBeamSt'
   */
  AION_auto_mode_request_B.get_LowBeamSt =
    AION_auto_mode_request_U.InBus_get_BCM_info_get_LowBeamSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_BCM_info_get_RightTurnLampSt'
   */
  AION_auto_mode_request_B.get_RightTurnLampSt =
    AION_auto_mode_request_U.InBus_get_BCM_info_get_RightTurnLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_GPSWeek'
   */
  AION_auto_mode_request_B.get_GPSWeek =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_GPSWeek;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_GPSTime'
   */
  AION_auto_mode_request_B.get_GPSTime =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_GPSTime;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_Heading'
   */
  AION_auto_mode_request_B.get_Heading =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_Heading;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_longitudinal_control_info_set_GearLvlReq'
   */
  AION_auto_mode_request_B.set_GearLvlReq =
    AION_auto_mode_request_U.InBus_set_longitudinal_control_info_set_GearLvlReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_Pitch'
   */
  AION_auto_mode_request_B.get_Pitch =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_Pitch;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_Roll'
   */
  AION_auto_mode_request_B.get_Roll =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_Roll;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_IMUWorkStatus'
   */
  AION_auto_mode_request_B.get_IMUWorkStatus =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_IMUWorkStatus;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_AngleSpeedX'
   */
  AION_auto_mode_request_B.get_AngleSpeedX =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_AngleSpeedX;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_AngleSpeedY'
   */
  AION_auto_mode_request_B.get_AngleSpeedY =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_AngleSpeedY;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_AngleSpeedZ'
   */
  AION_auto_mode_request_B.get_AngleSpeedZ =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_AngleSpeedZ;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_AccelerationX'
   */
  AION_auto_mode_request_B.get_AccelerationX =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_AccelerationX;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_AccelerationY'
   */
  AION_auto_mode_request_B.get_AccelerationY =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_AccelerationY;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_AccelerationZ'
   */
  AION_auto_mode_request_B.get_AccelerationZ =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_AccelerationZ;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_Latitude'
   */
  AION_auto_mode_request_B.get_Latitude =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_Latitude;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_longitudinal_control_info_set_GearLvlReqVD'
   */
  AION_auto_mode_request_B.set_GearLvlReqVD =
    AION_auto_mode_request_U.InBus_set_longitudinal_control_info_set_GearLvlReqVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_Longitude'
   */
  AION_auto_mode_request_B.get_Longitude =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_Longitude;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_get_IMU_info_get_Altitude'
   */
  AION_auto_mode_request_B.get_Altitude =
    AION_auto_mode_request_U.InBus_get_IMU_info_get_Altitude;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/InBus_set_ADCU_info_set_Checksum1'
   */
  AION_auto_mode_request_B.set_Checksum1 =
    AION_auto_mode_request_U.InBus_set_ADCU_info_set_Checksum1;

  /* Chart: '<Root>/Chart2' incorporates:
   *  Inport: '<Root>/InBus_get_SCU_info_get_LngCtrlMode'
   */
  /* Gateway: Chart2 */
  AION_auto_mode_request_DW.sfEvent = AION_auto_mode_request_CALL_EVENT;

  /* During: Chart2 */
  if (AION_auto_mode_request_DW.is_active_c2_AION_auto_mode_request == 0U) {
    /* Entry: Chart2 */
    AION_auto_mode_request_DW.is_active_c2_AION_auto_mode_request = 1U;

    /* Entry Internal: Chart2 */
    /* Transition: '<S2>:1' */
    AION_auto_mode_request_DW.is_c2_AION_auto_mode_request =
      AION_auto_mode_request_IN_Name1;

    /* Entry 'Name1': '<S2>:3' */
    AION_auto_mode_request_B.LngCtrlReq = 0.0;
  } else if (AION_auto_mode_request_DW.is_c2_AION_auto_mode_request ==
             AION_auto_mode_request_IN_Name) {
    /* During 'Name': '<S2>:2' */
    guard1 = false;
    if (AION_auto_mode_request_B.BitwiseAND == 0U) {
      /* Transition: '<S2>:6' */
      guard1 = true;
    } else {
      sf_internal_predicateOutput = ((static_cast<int32_T>
        (AION_auto_mode_request_U.InBus_get_SCU_info_get_LngCtrlMode) == 1) || (
        static_cast<int32_T>
        (AION_auto_mode_request_U.InBus_get_SCU_info_get_LngCtrlMode) == 3));
      if (sf_internal_predicateOutput) {
        /* Transition: '<S2>:5' */
        guard1 = true;
      } else {
        AION_auto_mode_request_B.LngCtrlReq = 1.0;
      }
    }

    if (guard1) {
      AION_auto_mode_request_DW.is_c2_AION_auto_mode_request =
        AION_auto_mode_request_IN_Name1;

      /* Entry 'Name1': '<S2>:3' */
      AION_auto_mode_request_B.LngCtrlReq = 0.0;
    }
  } else {
    /* During 'Name1': '<S2>:3' */
    sf_internal_predicateOutput = ((static_cast<int32_T>
      (AION_auto_mode_request_U.InBus_get_SCU_info_get_LngCtrlMode) == 0) &&
      (AION_auto_mode_request_B.BitwiseAND == 1U));
    if (sf_internal_predicateOutput) {
      /* Transition: '<S2>:4' */
      AION_auto_mode_request_DW.is_c2_AION_auto_mode_request =
        AION_auto_mode_request_IN_Name;

      /* Entry 'Name': '<S2>:2' */
      AION_auto_mode_request_B.LngCtrlReq = 1.0;
    } else {
      AION_auto_mode_request_B.LngCtrlReq = 0.0;
    }
  }

  /* End of Chart: '<Root>/Chart2' */

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  tmp = std::floor(AION_auto_mode_request_B.LatCtrlReq);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  AION_auto_mode_request_B.DataTypeConversion2 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  AION_auto_mode_request_B.DataTypeConversion1 = static_cast<Control_request>
    (AION_auto_mode_request_B.DataTypeConversion2);

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  tmp = std::floor(AION_auto_mode_request_B.LngCtrlReq);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  AION_auto_mode_request_B.DataTypeConversion10 = static_cast<uint8_T>(tmp < 0.0
    ? static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(
    static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  AION_auto_mode_request_B.DataTypeConversion9 = static_cast<Control_request>
    (AION_auto_mode_request_B.DataTypeConversion10);

  /* Outport: '<Root>/OutBus_set_lateral_control_info_set_LatCtrlReq' */
  AION_auto_mode_request_Y.OutBus_set_lateral_control_info_set_LatCtrlReq =
    AION_auto_mode_request_B.DataTypeConversion1;

  /* Outport: '<Root>/OutBus_set_lateral_control_info_set_SteerAngReq' */
  AION_auto_mode_request_Y.OutBus_set_lateral_control_info_set_SteerAngReq =
    AION_auto_mode_request_B.set_SteerAngReq;

  /* Outport: '<Root>/OutBus_set_lateral_control_info_set_SteerWhlTorqReq' */
  AION_auto_mode_request_Y.OutBus_set_lateral_control_info_set_SteerWhlTorqReq =
    AION_auto_mode_request_B.set_SteerWhlTorqReq;

  /* Outport: '<Root>/OutBus_set_longitudinal_control_info_set_LngCtrlReq' */
  AION_auto_mode_request_Y.OutBus_set_longitudinal_control_info_set_LngCtrlReq =
    AION_auto_mode_request_B.DataTypeConversion9;

  /* Outport: '<Root>/OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq' */
  AION_auto_mode_request_Y.OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq
    = AION_auto_mode_request_B.set_AutoTrqWhlReq;

  /* Outport: '<Root>/OutBus_set_longitudinal_control_info_set_BrakeReq' */
  AION_auto_mode_request_Y.OutBus_set_longitudinal_control_info_set_BrakeReq =
    AION_auto_mode_request_B.set_BrakeReq;

  /* Outport: '<Root>/OutBus_set_longitudinal_control_info_set_GearLvlReq' */
  AION_auto_mode_request_Y.OutBus_set_longitudinal_control_info_set_GearLvlReq =
    AION_auto_mode_request_B.set_GearLvlReq;

  /* Outport: '<Root>/OutBus_set_longitudinal_control_info_set_GearLvlReqVD' */
  AION_auto_mode_request_Y.OutBus_set_longitudinal_control_info_set_GearLvlReqVD
    = AION_auto_mode_request_B.set_GearLvlReqVD;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_Checksum1' */
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_Checksum1 =
    AION_auto_mode_request_B.set_Checksum1;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_MsgCounter1' */
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_MsgCounter1 =
    AION_auto_mode_request_B.set_MsgCounter1;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_Checksum2' */
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_Checksum2 =
    AION_auto_mode_request_B.set_Checksum2;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_MsgCounter2' */
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_MsgCounter2 =
    AION_auto_mode_request_B.set_MsgCounter2;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_Checksum3' */
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_Checksum3 =
    AION_auto_mode_request_B.set_Checksum3;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_MsgCounter3' */
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_MsgCounter3 =
    AION_auto_mode_request_B.set_MsgCounter3;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_BeamReq' */
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_BeamReq =
    AION_auto_mode_request_B.set_BeamReq;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_BodyCtrlReq' */
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_BodyCtrlReq =
    AION_auto_mode_request_B.set_BodyCtrlReq;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_HornRingReq' */
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_HornRingReq =
    AION_auto_mode_request_B.set_HornRingReq;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_TurnLightReq' */
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_TurnLightReq =
    AION_auto_mode_request_B.set_TurnLightReq;

  /* Outport: '<Root>/OutBus_set_SPK_info_set_Stx' */
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_Stx =
    AION_auto_mode_request_B.set_Stx;

  /* Outport: '<Root>/OutBus_set_SPK_info_set_FunctionCode' */
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_FunctionCode =
    AION_auto_mode_request_B.set_FunctionCode;

  /* Outport: '<Root>/OutBus_set_SPK_info_set_SoundSourceCode' */
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_SoundSourceCode =
    AION_auto_mode_request_B.QlightChannel;

  /* Outport: '<Root>/OutBus_set_SPK_info_set_VolumeCode' */
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_VolumeCode =
    AION_auto_mode_request_B.set_VolumeCode;

  /* Outport: '<Root>/OutBus_set_SPK_info_set_Parameter' */
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_Parameter =
    AION_auto_mode_request_B.set_Parameter;

  /* Outport: '<Root>/OutBus_set_SPK_info_set_Chk' */
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_Chk =
    AION_auto_mode_request_B.SPK_Chk;

  /* Outport: '<Root>/OutBus_set_SPK_info_set_Etx' */
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_Etx =
    AION_auto_mode_request_B.set_Etx;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_ABSActiveSt' */
  AION_auto_mode_request_Y.OutBus_get_BCS_info_get_ABSActiveSt =
    AION_auto_mode_request_B.get_ABSActiveSt;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_VehSpd' */
  AION_auto_mode_request_Y.OutBus_get_BCS_info_get_VehSpd =
    AION_auto_mode_request_B.get_VehSpd;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_VehSpdVD' */
  AION_auto_mode_request_Y.OutBus_get_BCS_info_get_VehSpdVD =
    AION_auto_mode_request_B.get_VehSpdVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_YawRate' */
  AION_auto_mode_request_Y.OutBus_get_BCS_info_get_YawRate =
    AION_auto_mode_request_B.get_YawRate;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_ActVehLaltrlAccel' */
  AION_auto_mode_request_Y.OutBus_get_BCS_info_get_ActVehLaltrlAccel =
    AION_auto_mode_request_B.get_ActVehLaltrlAccel;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_ActVehLongAccel' */
  AION_auto_mode_request_Y.OutBus_get_BCS_info_get_ActVehLongAccel =
    AION_auto_mode_request_B.get_ActVehLongAccel;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_ActVehWheelTorq' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_ActVehWheelTorq =
    AION_auto_mode_request_B.get_ActVehWheelTorq;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_GearLeverIntv' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_GearLeverIntv =
    AION_auto_mode_request_B.get_GearLeverIntv;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_VehDrvMod' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_VehDrvMod =
    AION_auto_mode_request_B.get_VehDrvMod;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_VehRdySt' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_VehRdySt =
    AION_auto_mode_request_B.get_VehRdySt;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_VehRng' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_VehRng =
    AION_auto_mode_request_B.get_VehRng;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_CrntGearLvl' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_CrntGearLvl =
    AION_auto_mode_request_B.get_CrntGearLvl;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_CrntGearLvlVD' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_CrntGearLvlVD =
    AION_auto_mode_request_B.get_CrntGearLvlVD;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_GasPedalActPst' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_GasPedalActPst =
    AION_auto_mode_request_B.get_GasPedalActPst;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_AccElecECFail' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_AccElecECFail =
    AION_auto_mode_request_B.get_AccElecECFail;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_VehWheelTorqMax' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_VehWheelTorqMax =
    AION_auto_mode_request_B.get_VehWheelTorqMax;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_BrkPedalSt' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_BrkPedalSt =
    AION_auto_mode_request_B.get_BrkPedalSt;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_ACCButtInfo' */
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_ACCButtInfo =
    AION_auto_mode_request_B.get_ACCButtInfo;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LatAutoCheckReport' */
  AION_auto_mode_request_Y.OutBus_get_SCU_info_get_LatAutoCheckReport =
    AION_auto_mode_request_B.get_LatAutoCheckReport;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LatCtrlMode' */
  AION_auto_mode_request_Y.OutBus_get_SCU_info_get_LatCtrlMode =
    AION_auto_mode_request_B.get_LatCtrlMode;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LatQuitReport' */
  AION_auto_mode_request_Y.OutBus_get_SCU_info_get_LatQuitReport =
    AION_auto_mode_request_B.get_LatQuitReport;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LngAutoCheckIReport' */
  AION_auto_mode_request_Y.OutBus_get_SCU_info_get_LngAutoCheckIReport =
    AION_auto_mode_request_B.get_LngAutoCheckIReport;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LngCtrlMode' */
  AION_auto_mode_request_Y.OutBus_get_SCU_info_get_LngCtrlMode =
    AION_auto_mode_request_B.get_LngCtrlMode;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LngQuitReport' */
  AION_auto_mode_request_Y.OutBus_get_SCU_info_get_LngQuitReport =
    AION_auto_mode_request_B.get_LngQuitReport;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_StrngWhlIntv' */
  AION_auto_mode_request_Y.OutBus_get_SCU_info_get_StrngWhlIntv =
    AION_auto_mode_request_B.get_StrngWhlIntv;

  /* Outport: '<Root>/OutBus_get_EPB_info_get_SysSt' */
  AION_auto_mode_request_Y.OutBus_get_EPB_info_get_SysSt =
    AION_auto_mode_request_B.get_SysSt;

  /* Outport: '<Root>/OutBus_get_SRS_info_get_DriverSeatBeltSt' */
  AION_auto_mode_request_Y.OutBus_get_SRS_info_get_DriverSeatBeltSt =
    AION_auto_mode_request_B.get_DriverSeatBeltSt;

  /* Outport: '<Root>/OutBus_get_SRS_info_get_PsngrSeatBeltSt' */
  AION_auto_mode_request_Y.OutBus_get_SRS_info_get_PsngrSeatBeltSt =
    AION_auto_mode_request_B.get_PsngrSeatBeltSt;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_SteeringAngle' */
  AION_auto_mode_request_Y.OutBus_get_EPS_info_get_SteeringAngle =
    AION_auto_mode_request_B.get_SteeringAngle;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_SteeringAngleSpd' */
  AION_auto_mode_request_Y.OutBus_get_EPS_info_get_SteeringAngleSpd =
    AION_auto_mode_request_B.get_SteeringAngleSpd;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_SteeringAngleSpdVD' */
  AION_auto_mode_request_Y.OutBus_get_EPS_info_get_SteeringAngleSpdVD =
    AION_auto_mode_request_B.get_SteeringAngleSpdVD;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_SteeringAngleVD' */
  AION_auto_mode_request_Y.OutBus_get_EPS_info_get_SteeringAngleVD =
    AION_auto_mode_request_B.get_SteeringAngleVD;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_StrngWhlTorq' */
  AION_auto_mode_request_Y.OutBus_get_EPS_info_get_StrngWhlTorq =
    AION_auto_mode_request_B.get_StrngWhlTorq;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_CtrlAvailable' */
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_CtrlAvailable =
    AION_auto_mode_request_B.get_CtrlAvailable;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_HazardLampSt' */
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_HazardLampSt =
    AION_auto_mode_request_B.get_HazardLampSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_HighBeamSt' */
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_HighBeamSt =
    AION_auto_mode_request_B.get_HighBeamSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_HornSt' */
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_HornSt =
    AION_auto_mode_request_B.get_HornSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_KeySt' */
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_KeySt =
    AION_auto_mode_request_B.get_KeySt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_LeftTurnLampSt' */
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_LeftTurnLampSt =
    AION_auto_mode_request_B.get_LeftTurnLampSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_LowBeamSt' */
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_LowBeamSt =
    AION_auto_mode_request_B.get_LowBeamSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_RightTurnLampSt' */
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_RightTurnLampSt =
    AION_auto_mode_request_B.get_RightTurnLampSt;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_GPSWeek' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_GPSWeek =
    AION_auto_mode_request_B.get_GPSWeek;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_GPSTime' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_GPSTime =
    AION_auto_mode_request_B.get_GPSTime;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_Heading' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Heading =
    AION_auto_mode_request_B.get_Heading;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_Pitch' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Pitch =
    AION_auto_mode_request_B.get_Pitch;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_Roll' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Roll =
    AION_auto_mode_request_B.get_Roll;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_IMUWorkStatus' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_IMUWorkStatus =
    AION_auto_mode_request_B.get_IMUWorkStatus;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_AngleSpeedX' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AngleSpeedX =
    AION_auto_mode_request_B.get_AngleSpeedX;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_AngleSpeedY' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AngleSpeedY =
    AION_auto_mode_request_B.get_AngleSpeedY;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_AngleSpeedZ' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AngleSpeedZ =
    AION_auto_mode_request_B.get_AngleSpeedZ;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_AccelerationX' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AccelerationX =
    AION_auto_mode_request_B.get_AccelerationX;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_AccelerationY' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AccelerationY =
    AION_auto_mode_request_B.get_AccelerationY;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_AccelerationZ' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AccelerationZ =
    AION_auto_mode_request_B.get_AccelerationZ;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_Latitude' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Latitude =
    AION_auto_mode_request_B.get_Latitude;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_Longitude' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Longitude =
    AION_auto_mode_request_B.get_Longitude;

  /* Outport: '<Root>/OutBus_get_IMU_info_get_Altitude' */
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Altitude =
    AION_auto_mode_request_B.get_Altitude;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_auto_mode_request_M->Timing.clockTick0)) {
    ++AION_auto_mode_request_M->Timing.clockTickH0;
  }

  AION_auto_mode_request_M->Timing.taskTime0 =
    AION_auto_mode_request_M->Timing.clockTick0 *
    AION_auto_mode_request_M->Timing.stepSize0 +
    AION_auto_mode_request_M->Timing.clockTickH0 *
    AION_auto_mode_request_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void AION_auto_mode_request_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  AION_auto_mode_request_M->Timing.stepSize0 = 0.2;

  /* block I/O */
  (void) std::memset((static_cast<void *>(&AION_auto_mode_request_B)), 0,
                     sizeof(B_AION_auto_mode_request_T));

  {
    AION_auto_mode_request_B.QlightChannel = 0.0;
    AION_auto_mode_request_B.SPK_Chk = 0.0;
    AION_auto_mode_request_B.set_Stx = 0.0;
    AION_auto_mode_request_B.set_SteerAngReq = 0.0;
    AION_auto_mode_request_B.set_FunctionCode = 0.0;
    AION_auto_mode_request_B.set_VolumeCode = 0.0;
    AION_auto_mode_request_B.set_Parameter = 0.0;
    AION_auto_mode_request_B.set_Etx = 0.0;
    AION_auto_mode_request_B.get_VehSpd = 0.0;
    AION_auto_mode_request_B.get_YawRate = 0.0;
    AION_auto_mode_request_B.set_SteerWhlTorqReq = 0.0;
    AION_auto_mode_request_B.get_ActVehLaltrlAccel = 0.0;
    AION_auto_mode_request_B.get_ActVehLongAccel = 0.0;
    AION_auto_mode_request_B.get_GasPedalActPst = 0.0;
    AION_auto_mode_request_B.set_AutoTrqWhlReq = 0.0;
    AION_auto_mode_request_B.get_SteeringAngle = 0.0;
    AION_auto_mode_request_B.get_StrngWhlTorq = 0.0;
    AION_auto_mode_request_B.set_BrakeReq = 0.0;
    AION_auto_mode_request_B.get_GPSWeek = 0.0;
    AION_auto_mode_request_B.get_GPSTime = 0.0;
    AION_auto_mode_request_B.get_Heading = 0.0;
    AION_auto_mode_request_B.get_Pitch = 0.0;
    AION_auto_mode_request_B.get_Roll = 0.0;
    AION_auto_mode_request_B.get_AngleSpeedX = 0.0;
    AION_auto_mode_request_B.get_AngleSpeedY = 0.0;
    AION_auto_mode_request_B.get_AngleSpeedZ = 0.0;
    AION_auto_mode_request_B.get_AccelerationX = 0.0;
    AION_auto_mode_request_B.get_AccelerationY = 0.0;
    AION_auto_mode_request_B.get_AccelerationZ = 0.0;
    AION_auto_mode_request_B.get_Latitude = 0.0;
    AION_auto_mode_request_B.get_Longitude = 0.0;
    AION_auto_mode_request_B.get_Altitude = 0.0;
    AION_auto_mode_request_B.LngCtrlReq = 0.0;
    AION_auto_mode_request_B.LatCtrlReq = 0.0;
    AION_auto_mode_request_B.set_GearLvlReqVD = Invalid;
    AION_auto_mode_request_B.get_VehRdySt = NotReady;
    AION_auto_mode_request_B.set_TurnLightReq = NoLightRequest;
    AION_auto_mode_request_B.get_IMUWorkStatus = Initialization;
    AION_auto_mode_request_B.get_CrntGearLvl = InvalidGearStatus;
    AION_auto_mode_request_B.set_GearLvlReq = NoRequest;
    AION_auto_mode_request_B.set_BodyCtrlReq = Disable;
    AION_auto_mode_request_B.get_VehDrvMod = InvalidDriveStatus;
    AION_auto_mode_request_B.get_LatCtrlMode = ManualStatus;
    AION_auto_mode_request_B.get_LngCtrlMode = ManualStatus;
    AION_auto_mode_request_B.DataTypeConversion1 = Manual;
    AION_auto_mode_request_B.DataTypeConversion9 = Manual;
    AION_auto_mode_request_B.set_BeamReq = NoBeamRequest;
    AION_auto_mode_request_B.get_CtrlAvailable = NotAvailable;
    AION_auto_mode_request_B.get_HazardLampSt = NotActiveStatus;
    AION_auto_mode_request_B.get_HighBeamSt = NotActiveStatus;
    AION_auto_mode_request_B.get_HornSt = NotActiveStatus;
    AION_auto_mode_request_B.get_LeftTurnLampSt = NotActiveStatus;
    AION_auto_mode_request_B.get_LowBeamSt = NotActiveStatus;
    AION_auto_mode_request_B.get_RightTurnLampSt = NotActiveStatus;
    AION_auto_mode_request_B.set_HornRingReq = NotActiveRequest;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&AION_auto_mode_request_DW), 0,
                     sizeof(DW_AION_auto_mode_request_T));
  AION_auto_mode_request_DW.flag = 0.0;
  AION_auto_mode_request_DW.HoldFlag = 0.0;

  /* external inputs */
  (void)std::memset(&AION_auto_mode_request_U, 0, sizeof
                    (ExtU_AION_auto_mode_request_T));
  AION_auto_mode_request_U.InBus_set_lateral_control_info_set_LatCtrlReq =
    Manual;
  AION_auto_mode_request_U.InBus_set_lateral_control_info_set_SteerAngReq = 0.0;
  AION_auto_mode_request_U.InBus_set_lateral_control_info_set_SteerWhlTorqReq =
    0.0;
  AION_auto_mode_request_U.InBus_set_longitudinal_control_info_set_LngCtrlReq =
    Manual;
  AION_auto_mode_request_U.InBus_set_longitudinal_control_info_set_AutoTrqWhlReq
    = 0.0;
  AION_auto_mode_request_U.InBus_set_longitudinal_control_info_set_BrakeReq =
    0.0;
  AION_auto_mode_request_U.InBus_set_longitudinal_control_info_set_GearLvlReq =
    NoRequest;
  AION_auto_mode_request_U.InBus_set_longitudinal_control_info_set_GearLvlReqVD =
    Invalid;
  AION_auto_mode_request_U.InBus_set_ADCU_info_set_BeamReq = NoBeamRequest;
  AION_auto_mode_request_U.InBus_set_ADCU_info_set_BodyCtrlReq = Disable;
  AION_auto_mode_request_U.InBus_set_ADCU_info_set_HornRingReq =
    NotActiveRequest;
  AION_auto_mode_request_U.InBus_set_ADCU_info_set_TurnLightReq = NoLightRequest;
  AION_auto_mode_request_U.InBus_set_SPK_info_set_Stx = 0.0;
  AION_auto_mode_request_U.InBus_set_SPK_info_set_FunctionCode = 0.0;
  AION_auto_mode_request_U.InBus_set_SPK_info_set_SoundSourceCode = 0.0;
  AION_auto_mode_request_U.InBus_set_SPK_info_set_VolumeCode = 0.0;
  AION_auto_mode_request_U.InBus_set_SPK_info_set_Parameter = 0.0;
  AION_auto_mode_request_U.InBus_set_SPK_info_set_Chk = 0.0;
  AION_auto_mode_request_U.InBus_set_SPK_info_set_Etx = 0.0;
  AION_auto_mode_request_U.InBus_get_BCS_info_get_VehSpd = 0.0;
  AION_auto_mode_request_U.InBus_get_BCS_info_get_YawRate = 0.0;
  AION_auto_mode_request_U.InBus_get_BCS_info_get_ActVehLaltrlAccel = 0.0;
  AION_auto_mode_request_U.InBus_get_BCS_info_get_ActVehLongAccel = 0.0;
  AION_auto_mode_request_U.InBus_get_VCU_info_get_VehDrvMod = InvalidDriveStatus;
  AION_auto_mode_request_U.InBus_get_VCU_info_get_VehRdySt = NotReady;
  AION_auto_mode_request_U.InBus_get_VCU_info_get_CrntGearLvl =
    InvalidGearStatus;
  AION_auto_mode_request_U.InBus_get_VCU_info_get_GasPedalActPst = 0.0;
  AION_auto_mode_request_U.InBus_get_SCU_info_get_LatCtrlMode = ManualStatus;
  AION_auto_mode_request_U.InBus_get_SCU_info_get_LngCtrlMode = ManualStatus;
  AION_auto_mode_request_U.InBus_get_EPS_info_get_SteeringAngle = 0.0;
  AION_auto_mode_request_U.InBus_get_EPS_info_get_StrngWhlTorq = 0.0;
  AION_auto_mode_request_U.InBus_get_BCM_info_get_CtrlAvailable = NotAvailable;
  AION_auto_mode_request_U.InBus_get_BCM_info_get_HazardLampSt = NotActiveStatus;
  AION_auto_mode_request_U.InBus_get_BCM_info_get_HighBeamSt = NotActiveStatus;
  AION_auto_mode_request_U.InBus_get_BCM_info_get_HornSt = NotActiveStatus;
  AION_auto_mode_request_U.InBus_get_BCM_info_get_LeftTurnLampSt =
    NotActiveStatus;
  AION_auto_mode_request_U.InBus_get_BCM_info_get_LowBeamSt = NotActiveStatus;
  AION_auto_mode_request_U.InBus_get_BCM_info_get_RightTurnLampSt =
    NotActiveStatus;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_GPSWeek = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_GPSTime = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_Heading = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_Pitch = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_Roll = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_IMUWorkStatus = Initialization;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_AngleSpeedX = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_AngleSpeedY = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_AngleSpeedZ = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_AccelerationX = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_AccelerationY = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_AccelerationZ = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_Latitude = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_Longitude = 0.0;
  AION_auto_mode_request_U.InBus_get_IMU_info_get_Altitude = 0.0;

  /* external outputs */
  (void) std::memset(static_cast<void *>(&AION_auto_mode_request_Y), 0,
                     sizeof(ExtY_AION_auto_mode_request_T));
  AION_auto_mode_request_Y.OutBus_set_lateral_control_info_set_LatCtrlReq =
    Manual;
  AION_auto_mode_request_Y.OutBus_set_lateral_control_info_set_SteerAngReq = 0.0;
  AION_auto_mode_request_Y.OutBus_set_lateral_control_info_set_SteerWhlTorqReq =
    0.0;
  AION_auto_mode_request_Y.OutBus_set_longitudinal_control_info_set_LngCtrlReq =
    Manual;
  AION_auto_mode_request_Y.OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq
    = 0.0;
  AION_auto_mode_request_Y.OutBus_set_longitudinal_control_info_set_BrakeReq =
    0.0;
  AION_auto_mode_request_Y.OutBus_set_longitudinal_control_info_set_GearLvlReq =
    NoRequest;
  AION_auto_mode_request_Y.OutBus_set_longitudinal_control_info_set_GearLvlReqVD
    = Invalid;
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_BeamReq = NoBeamRequest;
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_BodyCtrlReq = Disable;
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_HornRingReq =
    NotActiveRequest;
  AION_auto_mode_request_Y.OutBus_set_ADCU_info_set_TurnLightReq =
    NoLightRequest;
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_Stx = 0.0;
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_FunctionCode = 0.0;
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_SoundSourceCode = 0.0;
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_VolumeCode = 0.0;
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_Parameter = 0.0;
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_Chk = 0.0;
  AION_auto_mode_request_Y.OutBus_set_SPK_info_set_Etx = 0.0;
  AION_auto_mode_request_Y.OutBus_get_BCS_info_get_VehSpd = 0.0;
  AION_auto_mode_request_Y.OutBus_get_BCS_info_get_YawRate = 0.0;
  AION_auto_mode_request_Y.OutBus_get_BCS_info_get_ActVehLaltrlAccel = 0.0;
  AION_auto_mode_request_Y.OutBus_get_BCS_info_get_ActVehLongAccel = 0.0;
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_VehDrvMod =
    InvalidDriveStatus;
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_VehRdySt = NotReady;
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_CrntGearLvl =
    InvalidGearStatus;
  AION_auto_mode_request_Y.OutBus_get_VCU_info_get_GasPedalActPst = 0.0;
  AION_auto_mode_request_Y.OutBus_get_SCU_info_get_LatCtrlMode = ManualStatus;
  AION_auto_mode_request_Y.OutBus_get_SCU_info_get_LngCtrlMode = ManualStatus;
  AION_auto_mode_request_Y.OutBus_get_EPS_info_get_SteeringAngle = 0.0;
  AION_auto_mode_request_Y.OutBus_get_EPS_info_get_StrngWhlTorq = 0.0;
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_CtrlAvailable = NotAvailable;
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_HazardLampSt =
    NotActiveStatus;
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_HighBeamSt = NotActiveStatus;
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_HornSt = NotActiveStatus;
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_LeftTurnLampSt =
    NotActiveStatus;
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_LowBeamSt = NotActiveStatus;
  AION_auto_mode_request_Y.OutBus_get_BCM_info_get_RightTurnLampSt =
    NotActiveStatus;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_GPSWeek = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_GPSTime = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Heading = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Pitch = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Roll = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_IMUWorkStatus =
    Initialization;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AngleSpeedX = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AngleSpeedY = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AngleSpeedZ = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AccelerationX = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AccelerationY = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_AccelerationZ = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Latitude = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Longitude = 0.0;
  AION_auto_mode_request_Y.OutBus_get_IMU_info_get_Altitude = 0.0;

  /* SystemInitialize for Chart: '<Root>/Chart' */
  AION_auto_mode_request_DW.sfEvent_b = AION_auto_mode_request_CALL_EVENT;
  AION_auto_mode_request_DW.is_active_c3_AION_auto_mode_request = 0U;
  AION_auto_mode_request_DW.is_c3_AION_auto_mode_request = 0U;
  AION_auto_mode_request_DW.flag = 0.0;
  AION_auto_mode_request_DW.HoldFlag = 0.0;
  AION_auto_mode_request_B.LatCtrlReq = 0.0;
  AION_auto_mode_request_B.QlightChannel_f = 0U;

  /* SystemInitialize for Chart: '<Root>/Chart2' */
  AION_auto_mode_request_DW.sfEvent = AION_auto_mode_request_CALL_EVENT;
  AION_auto_mode_request_DW.is_active_c2_AION_auto_mode_request = 0U;
  AION_auto_mode_request_DW.is_c2_AION_auto_mode_request = 0U;
  AION_auto_mode_request_B.LngCtrlReq = 0.0;
}

/* Model terminate function */
void AION_auto_mode_request_terminate(void)
{
  /* (no terminate code required) */
}
