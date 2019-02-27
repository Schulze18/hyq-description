//
// File: inv_dyn_hyq.h
//
// Code generated for Simulink model 'inv_dyn_hyq'.
//
// Model version                  : 1.4
// Simulink Coder version         : 8.14 (R2018a) 06-Feb-2018
// C/C++ source code generated on : Wed Feb 27 10:10:22 2019
//
// Target selection: ert.tlc
// Embedded hardware selection: Intel->x86-64 (Linux 64)
// Code generation objectives:
//    1. RAM efficiency
//    2. Execution efficiency
// Validation result: Not run
//
#ifndef RTW_HEADER_inv_dyn_hyq_h_
#define RTW_HEADER_inv_dyn_hyq_h_
#include "rtwtypes.h"
#include <cmath>
#include <string.h>
#ifndef inv_dyn_hyq_COMMON_INCLUDES_
# define inv_dyn_hyq_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#endif                                 // inv_dyn_hyq_COMMON_INCLUDES_

// Macros for accessing real-time model data structure
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

// Forward declaration for rtModel
typedef struct tag_RTM RT_MODEL;

#ifndef DEFINED_TYPEDEF_FOR_struct_M9hkkMoA4CzhOgRx5wpA7F_
#define DEFINED_TYPEDEF_FOR_struct_M9hkkMoA4CzhOgRx5wpA7F_

typedef struct {
  real_T mass;
  real_T tensor[9];
  real_T com[3];
} struct_M9hkkMoA4CzhOgRx5wpA7F;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_FD9Ut18q6ksOkEeBBX7q5_
#define DEFINED_TYPEDEF_FOR_struct_FD9Ut18q6ksOkEeBBX7q5_

typedef struct {
  real_T mass;
  real_T tensor[9];
  real_T com[3];
  real_T tensor6D[36];
} struct_FD9Ut18q6ksOkEeBBX7q5;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_ncOb8I1GFSpAkXAbSp5q3C_
#define DEFINED_TYPEDEF_FOR_struct_ncOb8I1GFSpAkXAbSp5q3C_

typedef struct {
  struct_M9hkkMoA4CzhOgRx5wpA7F trunk;
  struct_M9hkkMoA4CzhOgRx5wpA7F LF_hipassembly;
  struct_M9hkkMoA4CzhOgRx5wpA7F LF_upperleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F LF_lowerleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F RF_hipassembly;
  struct_M9hkkMoA4CzhOgRx5wpA7F RF_upperleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F RF_lowerleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F LH_hipassembly;
  struct_M9hkkMoA4CzhOgRx5wpA7F LH_upperleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F LH_lowerleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F RH_hipassembly;
  struct_M9hkkMoA4CzhOgRx5wpA7F RH_upperleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F RH_lowerleg;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_trunk;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_LF_hipassembly;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_LF_upperleg;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_LF_lowerleg;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_RF_hipassembly;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_RF_upperleg;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_RF_lowerleg;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_LH_hipassembly;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_LH_upperleg;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_LH_lowerleg;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_RH_hipassembly;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_RH_upperleg;
  struct_FD9Ut18q6ksOkEeBBX7q5 lf_RH_lowerleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_trunk;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_LF_hipassembly;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_LF_upperleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_LF_lowerleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_RF_hipassembly;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_RF_upperleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_RF_lowerleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_LH_hipassembly;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_LH_upperleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_LH_lowerleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_RH_hipassembly;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_RH_upperleg;
  struct_M9hkkMoA4CzhOgRx5wpA7F com_RH_lowerleg;
} struct_ncOb8I1GFSpAkXAbSp5q3C;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_lOM3BWoAblUf2K8nRCwB5F_
#define DEFINED_TYPEDEF_FOR_struct_lOM3BWoAblUf2K8nRCwB5F_

typedef struct {
  real_T fr_LF_lowerleg_XM_LF_foot[36];
  real_T fr_RF_lowerleg_XM_RF_foot[36];
  real_T fr_LH_lowerleg_XM_LH_foot[36];
  real_T fr_RH_lowerleg_XM_RH_foot[36];
  real_T fr_trunk_XM_LF_hipassemblyCOM[36];
  real_T fr_trunk_XM_RF_hipassemblyCOM[36];
  real_T fr_trunk_XM_LH_hipassemblyCOM[36];
  real_T fr_trunk_XM_RH_hipassemblyCOM[36];
  real_T fr_trunk_XM_LF_upperlegCOM[36];
  real_T fr_trunk_XM_RF_upperlegCOM[36];
  real_T fr_trunk_XM_LH_upperlegCOM[36];
  real_T fr_trunk_XM_RH_upperlegCOM[36];
  real_T fr_trunk_XM_LF_lowerlegCOM[36];
  real_T fr_trunk_XM_RF_lowerlegCOM[36];
  real_T fr_trunk_XM_LH_lowerlegCOM[36];
  real_T fr_trunk_XM_RH_lowerlegCOM[36];
  real_T LF_foot_XM_fr_LF_lowerleg[36];
  real_T RF_foot_XM_fr_RF_lowerleg[36];
  real_T LH_foot_XM_fr_LH_lowerleg[36];
  real_T RH_foot_XM_fr_RH_lowerleg[36];
  real_T fr_trunk_XM_LF_foot[36];
  real_T fr_trunk_XM_RF_foot[36];
  real_T fr_trunk_XM_LH_foot[36];
  real_T fr_trunk_XM_RH_foot[36];
  real_T fr_LF_lowerleg_XM_fr_trunk[36];
  real_T fr_RF_lowerleg_XM_fr_trunk[36];
  real_T fr_LH_lowerleg_XM_fr_trunk[36];
  real_T fr_RH_lowerleg_XM_fr_trunk[36];
  real_T LF_foot_XM_fr_trunk[36];
  real_T RF_foot_XM_fr_trunk[36];
  real_T LH_foot_XM_fr_trunk[36];
  real_T RH_foot_XM_fr_trunk[36];
  real_T fr_trunk_XM_fr_LF_HAA[36];
  real_T fr_trunk_XM_fr_LF_HFE[36];
  real_T fr_trunk_XM_fr_LF_KFE[36];
  real_T fr_trunk_XM_fr_RF_HAA[36];
  real_T fr_trunk_XM_fr_RF_HFE[36];
  real_T fr_trunk_XM_fr_RF_KFE[36];
  real_T fr_trunk_XM_fr_LH_HAA[36];
  real_T fr_trunk_XM_fr_LH_HFE[36];
  real_T fr_trunk_XM_fr_LH_KFE[36];
  real_T fr_trunk_XM_fr_RH_HAA[36];
  real_T fr_trunk_XM_fr_RH_HFE[36];
  real_T fr_trunk_XM_fr_RH_KFE[36];
  real_T fr_LF_hipassembly_XM_fr_trunk[36];
  real_T fr_trunk_XM_fr_LF_hipassembly[36];
  real_T fr_LF_upperleg_XM_fr_LF_hipassembly[36];
  real_T fr_LF_hipassembly_XM_fr_LF_upperleg[36];
  real_T fr_LF_lowerleg_XM_fr_LF_upperleg[36];
  real_T fr_LF_upperleg_XM_fr_LF_lowerleg[36];
  real_T fr_RF_hipassembly_XM_fr_trunk[36];
  real_T fr_trunk_XM_fr_RF_hipassembly[36];
  real_T fr_RF_upperleg_XM_fr_RF_hipassembly[36];
  real_T fr_RF_hipassembly_XM_fr_RF_upperleg[36];
  real_T fr_RF_lowerleg_XM_fr_RF_upperleg[36];
  real_T fr_RF_upperleg_XM_fr_RF_lowerleg[36];
  real_T fr_LH_hipassembly_XM_fr_trunk[36];
  real_T fr_trunk_XM_fr_LH_hipassembly[36];
  real_T fr_LH_upperleg_XM_fr_LH_hipassembly[36];
  real_T fr_LH_hipassembly_XM_fr_LH_upperleg[36];
  real_T fr_LH_lowerleg_XM_fr_LH_upperleg[36];
  real_T fr_LH_upperleg_XM_fr_LH_lowerleg[36];
  real_T fr_RH_hipassembly_XM_fr_trunk[36];
  real_T fr_trunk_XM_fr_RH_hipassembly[36];
  real_T fr_RH_upperleg_XM_fr_RH_hipassembly[36];
  real_T fr_RH_hipassembly_XM_fr_RH_upperleg[36];
  real_T fr_RH_lowerleg_XM_fr_RH_upperleg[36];
  real_T fr_RH_upperleg_XM_fr_RH_lowerleg[36];
} struct_lOM3BWoAblUf2K8nRCwB5F;

#endif

// Custom Type definition for MATLAB Function: '<Root>/inv_dyn_hyq'
#ifndef struct_tag_srEIOET7RNkIl0Bikh9jqzB
#define struct_tag_srEIOET7RNkIl0Bikh9jqzB

struct tag_srEIOET7RNkIl0Bikh9jqzB
{
  real_T LF_hipassembly_Ic[36];
  real_T LF_upperleg_Ic[36];
  real_T LF_lowerleg_Ic[36];
  real_T RF_hipassembly_Ic[36];
  real_T RF_upperleg_Ic[36];
  real_T RF_lowerleg_Ic[36];
  real_T LH_hipassembly_Ic[36];
  real_T LH_upperleg_Ic[36];
  real_T LH_lowerleg_Ic[36];
  real_T RH_hipassembly_Ic[36];
  real_T RH_upperleg_Ic[36];
  real_T RH_lowerleg_Ic[36];
  real_T trunk_Ic[36];
};

#endif                                 //struct_tag_srEIOET7RNkIl0Bikh9jqzB

#ifndef typedef_srEIOET7RNkIl0Bikh9jqzB
#define typedef_srEIOET7RNkIl0Bikh9jqzB

typedef struct tag_srEIOET7RNkIl0Bikh9jqzB srEIOET7RNkIl0Bikh9jqzB;

#endif                                 //typedef_srEIOET7RNkIl0Bikh9jqzB

// Block signals and states (default storage) for system '<Root>'
typedef struct {
  struct_lOM3BWoAblUf2K8nRCwB5F b_xm;
} DW;

// Constant parameters (default storage)
typedef struct {
  // Expression: xm
  //  Referenced by: '<Root>/inv_dyn_hyq'

  struct_lOM3BWoAblUf2K8nRCwB5F inv_dyn_hyq_xm;

  // Expression: ip
  //  Referenced by: '<Root>/inv_dyn_hyq'

  struct_ncOb8I1GFSpAkXAbSp5q3C inv_dyn_hyq_ip;
} ConstP;

// External inputs (root inport signals with default storage)
typedef struct {
  real_T q[12];                        // '<Root>/q'
  real_T qd[12];                       // '<Root>/qd'
  real_T qdd[12];                      // '<Root>/qdd'
  real_T trunk_v[6];                   // '<Root>/trunk_v'
} ExtU;

// External outputs (root outports fed by signals with default storage)
typedef struct {
  real_T tau[12];                      // '<Root>/tau'
  real_T trunk_a[6];                   // '<Root>/trunk_a'
} ExtY;

// Real-time Model Data Structure
struct tag_RTM {
  const char_T * volatile errorStatus;
};

// Constant parameters (default storage)
extern const ConstP rtConstP;

// Class declaration for model inv_dyn_hyq
class inv_dyn_hyqModelClass {
  // public data and function members
 public:
  // External inputs
  ExtU rtU;

  // External outputs
  ExtY rtY;

  // model initialize function
  void initialize();

  // model step function
  void step();

  // Constructor
  inv_dyn_hyqModelClass();

  // Destructor
  ~inv_dyn_hyqModelClass();

  // Real-Time Model get method
  RT_MODEL * getRTM();

  // private data and function members
 private:
  // Block signals and states
  DW rtDW;

  // Real-Time Model
  RT_MODEL rtM;

  // private member function(s) for subsystem '<Root>'
  void updateMotionTransforms(struct_lOM3BWoAblUf2K8nRCwB5F *tr, const real_T q
    [12]);
  void compositeInertia(const struct_ncOb8I1GFSpAkXAbSp5q3C *b_ip, const real_T
                        xf_fr_LF_hipassembly_XM_fr_trun[36], const real_T
                        xf_fr_LF_upperleg_XM_fr_LF_hipa[36], const real_T
                        xf_fr_LF_lowerleg_XM_fr_LF_uppe[36], const real_T
                        xf_fr_RF_hipassembly_XM_fr_trun[36], const real_T
                        xf_fr_RF_upperleg_XM_fr_RF_hipa[36], const real_T
                        xf_fr_RF_lowerleg_XM_fr_RF_uppe[36], const real_T
                        xf_fr_LH_hipassembly_XM_fr_trun[36], const real_T
                        xf_fr_LH_upperleg_XM_fr_LH_hipa[36], const real_T
                        xf_fr_LH_lowerleg_XM_fr_LH_uppe[36], const real_T
                        xf_fr_RH_hipassembly_XM_fr_trun[36], const real_T
                        xf_fr_RH_upperleg_XM_fr_RH_hipa[36], const real_T
                        xf_fr_RH_lowerleg_XM_fr_RH_uppe[36],
                        srEIOET7RNkIl0Bikh9jqzB *ci);
  void invNxN(const real_T x[36], real_T y[36]);
  void inv(const real_T x[36], real_T y[36]);
};

//-
//  The generated code includes comments that allow you to trace directly
//  back to the appropriate location in the model.  The basic format
//  is <system>/block_name, where system is the system number (uniquely
//  assigned by Simulink) and block_name is the name of the block.
//
//  Note that this particular code originates from a subsystem build,
//  and has its own system numbers different from the parent model.
//  Refer to the system hierarchy for this subsystem below, and use the
//  MATLAB hilite_system command to trace the generated code back
//  to the parent model.  For example,
//
//  hilite_system('inv_dyn/inv_dyn_hyq')    - opens subsystem inv_dyn/inv_dyn_hyq
//  hilite_system('inv_dyn/inv_dyn_hyq/Kp') - opens and selects block Kp
//
//  Here is the system hierarchy for this model
//
//  '<Root>' : 'inv_dyn'
//  '<S1>'   : 'inv_dyn/inv_dyn_hyq'

#endif                                 // RTW_HEADER_inv_dyn_hyq_h_

//
// File trailer for generated code.
//
// [EOF]
//
