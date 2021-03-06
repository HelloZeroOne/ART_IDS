/*
 * AION_IDS_SPEEDGOAT_private.h
 *
 * Code generation for model "AION_IDS_SPEEDGOAT".
 *
 * Model version              : 4.330
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Tue Jun 21 16:06:30 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AION_IDS_SPEEDGOAT_private_h_
#define RTW_HEADER_AION_IDS_SPEEDGOAT_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Private macros used by the generated code to access rtModel */
#ifndef rtmSetTFinal
#define rtmSetTFinal(rtm, val)         ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

extern CAN_DATATYPE CAN_DATATYPE_GROUND;
extern void* slrtRegisterSignalToLoggingService(uintptr_t sigAddr);
extern "C" {
  const char *fifowrite(int32_T *fifo, void *iPtr, void **oPtrs,
                        int *settings);
}
  extern "C" void sg_IO61X_read_s(SimStruct *rts);

extern "C" void sg_IO612_setup_s(SimStruct *rts);
extern "C" void sg_IO61X_write_s(SimStruct *rts);
extern "C" void slserialread(SimStruct *rts);
extern "C" void slserialwrite(SimStruct *rts);
extern "C" void slserialsetupbase(SimStruct *rts);
extern "C" void slfiforeadhdr(SimStruct *rts);

#endif                            /* RTW_HEADER_AION_IDS_SPEEDGOAT_private_h_ */
