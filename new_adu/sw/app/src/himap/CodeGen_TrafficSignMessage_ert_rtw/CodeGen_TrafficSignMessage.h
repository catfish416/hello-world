/*
 * File: CodeGen_TrafficSignMessage.h
 *
 * Code generated for Simulink model 'CodeGen_TrafficSignMessage'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.6 (R2014a) 27-Dec-2013
 * C/C++ source code generated on : Tue Oct 10 17:00:50 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Generic->Custom
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_CodeGen_TrafficSignMessage_h_
#define RTW_HEADER_CodeGen_TrafficSignMessage_h_
#include <string.h>
#include <stddef.h>
#ifndef CodeGen_TrafficSignMessage_COMMON_INCLUDES_
# define CodeGen_TrafficSignMessage_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CodeGen_TrafficSignMessage_COMMON_INCLUDES_ */

#include "CodeGen_TrafficSignMessage_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T gMaxOffset;                   /* '<Root>/MATLAB Function' */
  real_T gOffsetThresh;                /* '<Root>/MATLAB Function' */
  real_T gPreTrafficSignTimeCnt;       /* '<Root>/MATLAB Function' */
  real_T gPreTrafficSignOffset;        /* '<Root>/MATLAB Function' */
  real_T gTrafficSignCircleCnt;        /* '<Root>/MATLAB Function' */
  real_T gTrafficSignMap[300];         /* '<Root>/MATLAB Function' */
  real_T pValidMessageIndex;           /* '<Root>/MATLAB Function' */
  boolean_T gPreTrafficSignTimeCnt_not_empt;/* '<Root>/MATLAB Function' */
  boolean_T gPreTrafficSignOffset_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gTrafficSignCircleCnt_not_empty;/* '<Root>/MATLAB Function' */
  boolean_T gTrafficSignMap_not_empty; /* '<Root>/MATLAB Function' */
  boolean_T pValidMessageIndex_not_empty;/* '<Root>/MATLAB Function' */
} DW_CodeGen_TrafficSignMessage_T;

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_TrafficSignMe_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_CodeGen_TrafficSignMessage_T CodeGen_TrafficSignMessage_DW;

/*
 * Exported Global Signals
 *
 * Note: Exported global signals are block signals with an exported global
 * storage class designation.  Code generation will declare the memory for
 * these signals and export their symbols.
 *
 */
extern real_T TrafficSignIndex;        /* '<Root>/MATLAB Function' */
extern real_T TrafficSignmap[300];     /* '<Root>/MATLAB Function' */

/* Model entry point functions */
extern void CodeGen_TrafficSignMessage_initialize(void);
extern void CodeGen_TrafficSignMessage_step(void);
extern void CodeGen_TrafficSignMessage_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_TrafficSignM_T *const CodeGen_TrafficSignMessage_M;

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
 * '<Root>' : 'CodeGen_TrafficSignMessage'
 * '<S1>'   : 'CodeGen_TrafficSignMessage/MATLAB Function'
 */
#endif                                 /* RTW_HEADER_CodeGen_TrafficSignMessage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
