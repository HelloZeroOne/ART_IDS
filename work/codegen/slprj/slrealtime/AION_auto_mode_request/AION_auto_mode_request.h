/*
 * Code generation for system model 'AION_auto_mode_request'
 * For more details, see corresponding source file AION_auto_mode_request.c
 *
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

/* Block signals for model 'AION_auto_mode_request' */
struct B_AION_auto_mode_request_c_T {
  real_T QlightChannel;                /* '<Root>/Data Type Conversion4' */
  real_T SPK_Chk;                      /* '<Root>/SPK_Chk' */
  real_T LngCtrlReq;                   /* '<Root>/Chart2' */
  real_T LatCtrlReq;                   /* '<Root>/Chart' */
  uint32_T BitwiseAND;                 /* '<Root>/Bitwise AND' */
  uint8_T DataTypeConversion2;         /* '<Root>/Data Type Conversion2' */
  uint8_T DataTypeConversion10;        /* '<Root>/Data Type Conversion10' */
  uint8_T QlightChannel_f;             /* '<Root>/Chart' */
};

/* Block states (default storage) for model 'AION_auto_mode_request' */
struct DW_AION_auto_mode_request_f_T {
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_DataTypeConversion4_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_SPK_Chk_at_outport_0_PWORK;/* synthesized block */

  uint32_T is_c2_AION_auto_mode_request;/* '<Root>/Chart2' */
  uint32_T is_c3_AION_auto_mode_request;/* '<Root>/Chart' */
  uint8_T is_active_c2_AION_auto_mode_request;/* '<Root>/Chart2' */
  uint8_T is_active_c3_AION_auto_mode_request;/* '<Root>/Chart' */
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
  const char_T **errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T *stopRequestedFlag;
  } Timing;
};

struct MdlrefDW_AION_auto_mode_request_T {
  B_AION_auto_mode_request_c_T rtb;
  DW_AION_auto_mode_request_f_T rtdw;
  RT_MODEL_AION_auto_mode_request_T rtm;
};

/* Model reference registration function */
extern void AION_auto_mode_request_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AION_auto_mode_request_T *const AION_auto_mode_request_M,
  B_AION_auto_mode_request_c_T *localB, DW_AION_auto_mode_request_f_T *localDW);
extern void AION_auto_mode_request_Init(B_AION_auto_mode_request_c_T *localB,
  DW_AION_auto_mode_request_f_T *localDW);
extern void AION_auto_mode_request_Reset(B_AION_auto_mode_request_c_T *localB,
  DW_AION_auto_mode_request_f_T *localDW);
extern void AION_auto_mode_request(const real_T
  *rtu_InBus_set_lateral_control_info_set_SteerAngReq, const real_T
  *rtu_InBus_set_lateral_control_info_set_SteerWhlTorqReq, const real_T
  *rtu_InBus_set_longitudinal_control_info_set_AutoTrqWhlReq, const real_T
  *rtu_InBus_set_longitudinal_control_info_set_BrakeReq, const Gear_request
  *rtu_InBus_set_longitudinal_control_info_set_GearLvlReq, const
  Validation_status *rtu_InBus_set_longitudinal_control_info_set_GearLvlReqVD,
  const uint32_T *rtu_InBus_set_ADCU_info_set_Checksum1, const uint32_T
  *rtu_InBus_set_ADCU_info_set_MsgCounter1, const uint32_T
  *rtu_InBus_set_ADCU_info_set_Checksum2, const uint32_T
  *rtu_InBus_set_ADCU_info_set_MsgCounter2, const uint32_T
  *rtu_InBus_set_ADCU_info_set_Checksum3, const uint32_T
  *rtu_InBus_set_ADCU_info_set_MsgCounter3, const Beam_request
  *rtu_InBus_set_ADCU_info_set_BeamReq, const Enable_request
  *rtu_InBus_set_ADCU_info_set_BodyCtrlReq, const Active_request
  *rtu_InBus_set_ADCU_info_set_HornRingReq, const Light_request
  *rtu_InBus_set_ADCU_info_set_TurnLightReq, const real_T
  *rtu_InBus_set_SPK_info_set_Stx, const real_T
  *rtu_InBus_set_SPK_info_set_FunctionCode, const real_T
  *rtu_InBus_set_SPK_info_set_VolumeCode, const real_T
  *rtu_InBus_set_SPK_info_set_Parameter, const real_T
  *rtu_InBus_set_SPK_info_set_Etx, const uint8_T
  *rtu_InBus_get_BCS_info_get_ABSActiveSt, const real_T
  *rtu_InBus_get_BCS_info_get_VehSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_VehSpdVD, const real_T
  *rtu_InBus_get_BCS_info_get_YawRate, const real_T
  *rtu_InBus_get_BCS_info_get_ActVehLaltrlAccel, const real_T
  *rtu_InBus_get_BCS_info_get_ActVehLongAccel, const uint32_T
  *rtu_InBus_get_VCU_info_get_ActVehWheelTorq, const uint8_T
  *rtu_InBus_get_VCU_info_get_GearLeverIntv, const Drive_status
  *rtu_InBus_get_VCU_info_get_VehDrvMod, const Ready_status
  *rtu_InBus_get_VCU_info_get_VehRdySt, const uint32_T
  *rtu_InBus_get_VCU_info_get_VehRng, const Gear_status
  *rtu_InBus_get_VCU_info_get_CrntGearLvl, const uint8_T
  *rtu_InBus_get_VCU_info_get_CrntGearLvlVD, const real_T
  *rtu_InBus_get_VCU_info_get_GasPedalActPst, const uint8_T
  *rtu_InBus_get_VCU_info_get_AccElecECFail, const uint32_T
  *rtu_InBus_get_VCU_info_get_VehWheelTorqMax, const uint8_T
  *rtu_InBus_get_VCU_info_get_BrkPedalSt, const uint32_T
  *rtu_InBus_get_VCU_info_get_ACCButtInfo, const uint32_T
  *rtu_InBus_get_SCU_info_get_LatAutoCheckReport, const Control_status
  *rtu_InBus_get_SCU_info_get_LatCtrlMode, const uint32_T
  *rtu_InBus_get_SCU_info_get_LatQuitReport, const uint32_T
  *rtu_InBus_get_SCU_info_get_LngAutoCheckIReport, const Control_status
  *rtu_InBus_get_SCU_info_get_LngCtrlMode, const uint32_T
  *rtu_InBus_get_SCU_info_get_LngQuitReport, const uint8_T
  *rtu_InBus_get_SCU_info_get_StrngWhlIntv, const uint8_T
  *rtu_InBus_get_EPB_info_get_SysSt, const uint8_T
  *rtu_InBus_get_SRS_info_get_DriverSeatBeltSt, const uint8_T
  *rtu_InBus_get_SRS_info_get_PsngrSeatBeltSt, const real_T
  *rtu_InBus_get_EPS_info_get_SteeringAngle, const uint32_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleSpd, const uint8_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleSpdVD, const uint8_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleVD, const real_T
  *rtu_InBus_get_EPS_info_get_StrngWhlTorq, const Available_status
  *rtu_InBus_get_BCM_info_get_CtrlAvailable, const Active_status
  *rtu_InBus_get_BCM_info_get_HazardLampSt, const Active_status
  *rtu_InBus_get_BCM_info_get_HighBeamSt, const Active_status
  *rtu_InBus_get_BCM_info_get_HornSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_KeySt, const Active_status
  *rtu_InBus_get_BCM_info_get_LeftTurnLampSt, const Active_status
  *rtu_InBus_get_BCM_info_get_LowBeamSt, const Active_status
  *rtu_InBus_get_BCM_info_get_RightTurnLampSt, const real_T
  *rtu_InBus_get_IMU_info_get_GPSWeek, const real_T
  *rtu_InBus_get_IMU_info_get_GPSTime, const real_T
  *rtu_InBus_get_IMU_info_get_Heading, const real_T
  *rtu_InBus_get_IMU_info_get_Pitch, const real_T
  *rtu_InBus_get_IMU_info_get_Roll, const IMU_Status
  *rtu_InBus_get_IMU_info_get_IMUWorkStatus, const real_T
  *rtu_InBus_get_IMU_info_get_AngleSpeedX, const real_T
  *rtu_InBus_get_IMU_info_get_AngleSpeedY, const real_T
  *rtu_InBus_get_IMU_info_get_AngleSpeedZ, const real_T
  *rtu_InBus_get_IMU_info_get_AccelerationX, const real_T
  *rtu_InBus_get_IMU_info_get_AccelerationY, const real_T
  *rtu_InBus_get_IMU_info_get_AccelerationZ, const real_T
  *rtu_InBus_get_IMU_info_get_Latitude, const real_T
  *rtu_InBus_get_IMU_info_get_Longitude, const real_T
  *rtu_InBus_get_IMU_info_get_Altitude, Control_request
  *rty_OutBus_set_lateral_control_info_set_LatCtrlReq, real_T
  *rty_OutBus_set_lateral_control_info_set_SteerAngReq, real_T
  *rty_OutBus_set_lateral_control_info_set_SteerWhlTorqReq, Control_request
  *rty_OutBus_set_longitudinal_control_info_set_LngCtrlReq, real_T
  *rty_OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq, real_T
  *rty_OutBus_set_longitudinal_control_info_set_BrakeReq, Gear_request
  *rty_OutBus_set_longitudinal_control_info_set_GearLvlReq, Validation_status
  *rty_OutBus_set_longitudinal_control_info_set_GearLvlReqVD, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum1, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter1, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum2, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter2, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum3, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter3, Beam_request
  *rty_OutBus_set_ADCU_info_set_BeamReq, Enable_request
  *rty_OutBus_set_ADCU_info_set_BodyCtrlReq, Active_request
  *rty_OutBus_set_ADCU_info_set_HornRingReq, Light_request
  *rty_OutBus_set_ADCU_info_set_TurnLightReq, real_T
  *rty_OutBus_set_SPK_info_set_Stx, real_T
  *rty_OutBus_set_SPK_info_set_FunctionCode, real_T
  *rty_OutBus_set_SPK_info_set_SoundSourceCode, real_T
  *rty_OutBus_set_SPK_info_set_VolumeCode, real_T
  *rty_OutBus_set_SPK_info_set_Parameter, real_T
  *rty_OutBus_set_SPK_info_set_Chk, real_T *rty_OutBus_set_SPK_info_set_Etx,
  uint8_T *rty_OutBus_get_BCS_info_get_ABSActiveSt, real_T
  *rty_OutBus_get_BCS_info_get_VehSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_VehSpdVD, real_T
  *rty_OutBus_get_BCS_info_get_YawRate, real_T
  *rty_OutBus_get_BCS_info_get_ActVehLaltrlAccel, real_T
  *rty_OutBus_get_BCS_info_get_ActVehLongAccel, uint32_T
  *rty_OutBus_get_VCU_info_get_ActVehWheelTorq, uint8_T
  *rty_OutBus_get_VCU_info_get_GearLeverIntv, Drive_status
  *rty_OutBus_get_VCU_info_get_VehDrvMod, Ready_status
  *rty_OutBus_get_VCU_info_get_VehRdySt, uint32_T
  *rty_OutBus_get_VCU_info_get_VehRng, Gear_status
  *rty_OutBus_get_VCU_info_get_CrntGearLvl, uint8_T
  *rty_OutBus_get_VCU_info_get_CrntGearLvlVD, real_T
  *rty_OutBus_get_VCU_info_get_GasPedalActPst, uint8_T
  *rty_OutBus_get_VCU_info_get_AccElecECFail, uint32_T
  *rty_OutBus_get_VCU_info_get_VehWheelTorqMax, uint8_T
  *rty_OutBus_get_VCU_info_get_BrkPedalSt, uint32_T
  *rty_OutBus_get_VCU_info_get_ACCButtInfo, uint32_T
  *rty_OutBus_get_SCU_info_get_LatAutoCheckReport, Control_status
  *rty_OutBus_get_SCU_info_get_LatCtrlMode, uint32_T
  *rty_OutBus_get_SCU_info_get_LatQuitReport, uint32_T
  *rty_OutBus_get_SCU_info_get_LngAutoCheckIReport, Control_status
  *rty_OutBus_get_SCU_info_get_LngCtrlMode, uint32_T
  *rty_OutBus_get_SCU_info_get_LngQuitReport, uint8_T
  *rty_OutBus_get_SCU_info_get_StrngWhlIntv, uint8_T
  *rty_OutBus_get_EPB_info_get_SysSt, uint8_T
  *rty_OutBus_get_SRS_info_get_DriverSeatBeltSt, uint8_T
  *rty_OutBus_get_SRS_info_get_PsngrSeatBeltSt, real_T
  *rty_OutBus_get_EPS_info_get_SteeringAngle, uint32_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleSpd, uint8_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleSpdVD, uint8_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleVD, real_T
  *rty_OutBus_get_EPS_info_get_StrngWhlTorq, Available_status
  *rty_OutBus_get_BCM_info_get_CtrlAvailable, Active_status
  *rty_OutBus_get_BCM_info_get_HazardLampSt, Active_status
  *rty_OutBus_get_BCM_info_get_HighBeamSt, Active_status
  *rty_OutBus_get_BCM_info_get_HornSt, uint8_T
  *rty_OutBus_get_BCM_info_get_KeySt, Active_status
  *rty_OutBus_get_BCM_info_get_LeftTurnLampSt, Active_status
  *rty_OutBus_get_BCM_info_get_LowBeamSt, Active_status
  *rty_OutBus_get_BCM_info_get_RightTurnLampSt, real_T
  *rty_OutBus_get_IMU_info_get_GPSWeek, real_T
  *rty_OutBus_get_IMU_info_get_GPSTime, real_T
  *rty_OutBus_get_IMU_info_get_Heading, real_T
  *rty_OutBus_get_IMU_info_get_Pitch, real_T *rty_OutBus_get_IMU_info_get_Roll,
  IMU_Status *rty_OutBus_get_IMU_info_get_IMUWorkStatus, real_T
  *rty_OutBus_get_IMU_info_get_AngleSpeedX, real_T
  *rty_OutBus_get_IMU_info_get_AngleSpeedY, real_T
  *rty_OutBus_get_IMU_info_get_AngleSpeedZ, real_T
  *rty_OutBus_get_IMU_info_get_AccelerationX, real_T
  *rty_OutBus_get_IMU_info_get_AccelerationY, real_T
  *rty_OutBus_get_IMU_info_get_AccelerationZ, real_T
  *rty_OutBus_get_IMU_info_get_Latitude, real_T
  *rty_OutBus_get_IMU_info_get_Longitude, real_T
  *rty_OutBus_get_IMU_info_get_Altitude, B_AION_auto_mode_request_c_T *localB,
  DW_AION_auto_mode_request_f_T *localDW);

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
