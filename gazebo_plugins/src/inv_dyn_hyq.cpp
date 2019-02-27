//
// File: inv_dyn_hyq.cpp
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
#include "/home/schulze/hyq_workspace/src/hyq-description/gazebo_plugins/include/inv_dyn_hyq.h"

// Function for MATLAB Function: '<Root>/inv_dyn_hyq'
void inv_dyn_hyqModelClass::updateMotionTransforms(struct_lOM3BWoAblUf2K8nRCwB5F
  *tr, const real_T q[12])
{
  real_T s__q_LF_HAA;
  real_T s__q_RF_HAA;
  real_T s__q_LH_HAA;
  real_T s__q_RH_HAA;
  real_T s__q_LF_HFE;
  real_T s__q_RF_HFE;
  real_T s__q_LH_HFE;
  real_T s__q_RH_HFE;
  real_T s__q_LF_KFE;
  real_T s__q_RF_KFE;
  real_T s__q_LH_KFE;
  real_T s__q_RH_KFE;
  real_T c__q_LF_HAA;
  real_T c__q_RF_HAA;
  real_T c__q_LH_HAA;
  real_T c__q_RH_HAA;
  real_T c__q_LF_HFE;
  real_T c__q_RF_HFE;
  real_T c__q_LH_HFE;
  real_T c__q_RH_HFE;
  real_T c__q_LF_KFE;
  real_T c__q_RF_KFE;
  real_T c__q_LH_KFE;
  real_T c__q_RH_KFE;
  real_T tmp;
  real_T tmp_0;
  real_T tmp_1;
  real_T tmp_2;
  real_T tmp_3;
  real_T tmp_4;
  real_T tmp_5;
  real_T tmp_6;
  real_T tmp_7;
  real_T tmp_8;
  real_T tmp_9;
  real_T tmp_a;
  real_T tmp_b;
  real_T tmp_c;
  real_T tmp_d;
  real_T tmp_e;
  real_T tmp_f;
  real_T tmp_g;
  real_T tmp_h;
  real_T tmp_i;
  real_T tmp_j;
  real_T tmp_k;
  real_T tmp_l;
  real_T tmp_m;
  real_T tmp_n;
  real_T tmp_o;
  real_T tmp_p;
  real_T tmp_q;
  real_T tmp_r;
  real_T tmp_s;
  real_T tmp_t;
  real_T tmp_u;
  real_T tmp_v;
  real_T tmp_w;
  real_T tmp_x;
  real_T tmp_y;
  real_T tmp_z;
  real_T tmp_10;
  real_T tmp_11;
  real_T tmp_12;
  real_T tmp_13;
  real_T tmp_14;
  real_T tmp_15;
  real_T tmp_16;
  real_T tmp_17;
  real_T tmp_18;
  real_T tmp_19;
  real_T tmp_1a;
  real_T tmp_1b;
  real_T tmp_1c;
  real_T tmp_1d;
  real_T tmp_1e;
  real_T tmp_1f;
  real_T tmp_1g;
  real_T tmp_1h;
  real_T tmp_1i;
  real_T tmp_1j;
  real_T tmp_1k;
  real_T tmp_1l;
  real_T tmp_1m;
  real_T tmp_1n;
  real_T tmp_1o;
  real_T tmp_1p;
  real_T tmp_1q;
  real_T tmp_1r;
  real_T tmp_1s;
  real_T tmp_1t;
  real_T tmp_1u;
  real_T tmp_1v;
  real_T tmp_1w;
  real_T tmp_1x;
  real_T tmp_1y;
  real_T tmp_1z;
  real_T tmp_20;
  real_T tmp_21;
  real_T tmp_22;
  real_T tmp_23;
  real_T tmp_24;
  real_T tmp_25;
  real_T tmp_26;
  real_T tmp_27;
  real_T tmp_28;
  real_T tmp_29;
  real_T tmp_2a;
  real_T tmp_2b;
  real_T tmp_2c;
  real_T tmp_2d;
  real_T tmp_2e;
  real_T tmp_2f;
  real_T tmp_2g;
  real_T tmp_2h;
  real_T tmp_2i;
  real_T tmp_2j;
  real_T tmp_2k;
  real_T tmp_2l;
  real_T tmp_2m;
  real_T tmp_2n;
  real_T tmp_2o;
  real_T tmp_2p;
  real_T tmp_2q;
  real_T tmp_2r;
  real_T tmp_2s;
  real_T tmp_2t;
  real_T tmp_2u;
  real_T tmp_2v;
  real_T tmp_2w;
  real_T tmp_2x;
  real_T tmp_2y;
  real_T tmp_2z;
  real_T tmp_30;
  real_T tmp_31;
  real_T tmp_32;
  real_T tmp_33;
  real_T tmp_34;
  real_T tmp_35;
  real_T tmp_36;
  real_T tmp_37;
  real_T tmp_38;
  real_T tmp_39;
  real_T tmp_3a;
  real_T tmp_3b;
  real_T tmp_3c;
  real_T tmp_3d;
  real_T tmp_3e;
  real_T tmp_3f;
  real_T tmp_3g;
  real_T tmp_3h;
  real_T tmp_3i;
  real_T tmp_3j;
  real_T tmp_3k;
  real_T tmp_3l;
  real_T tmp_3m;
  real_T tmp_3n;
  real_T tmp_3o;
  real_T tmp_3p;
  real_T tmp_3q;
  real_T tmp_3r;
  real_T tmp_3s;
  real_T tmp_3t;
  real_T tmp_3u;
  real_T tmp_3v;
  real_T tmp_3w;
  real_T tmp_3x;
  real_T tmp_3y;
  real_T tmp_3z;
  real_T tmp_40;
  real_T tmp_41;
  real_T tmp_42;
  real_T tmp_43;
  real_T tmp_44;
  real_T tmp_45;
  real_T tmp_46;
  real_T tmp_47;
  real_T tmp_48;
  real_T tmp_49;
  real_T tmp_4a;
  real_T tmp_4b;
  real_T tmp_4c;
  real_T tmp_4d;
  real_T tmp_4e;
  real_T tmp_4f;
  real_T tmp_4g;
  real_T tmp_4h;
  real_T tmp_4i;
  s__q_LF_HAA = std::sin(q[0]);
  s__q_RF_HAA = std::sin(q[3]);
  s__q_LH_HAA = std::sin(q[6]);
  s__q_RH_HAA = std::sin(q[9]);
  s__q_LF_HFE = std::sin(q[1]);
  s__q_RF_HFE = std::sin(q[4]);
  s__q_LH_HFE = std::sin(q[7]);
  s__q_RH_HFE = std::sin(q[10]);
  s__q_LF_KFE = std::sin(q[2]);
  s__q_RF_KFE = std::sin(q[5]);
  s__q_LH_KFE = std::sin(q[8]);
  s__q_RH_KFE = std::sin(q[11]);
  c__q_LF_HAA = std::cos(q[0]);
  c__q_RF_HAA = std::cos(q[3]);
  c__q_LH_HAA = std::cos(q[6]);
  c__q_RH_HAA = std::cos(q[9]);
  c__q_LF_HFE = std::cos(q[1]);
  c__q_RF_HFE = std::cos(q[4]);
  c__q_LH_HFE = std::cos(q[7]);
  c__q_RH_HFE = std::cos(q[10]);
  c__q_LF_KFE = std::cos(q[2]);
  c__q_RF_KFE = std::cos(q[5]);
  c__q_LH_KFE = std::cos(q[8]);
  c__q_RH_KFE = std::cos(q[11]);
  tr->fr_trunk_XM_LF_hipassemblyCOM[1] = -s__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[7] = -c__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[2] = -c__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[8] = s__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[3] = -0.207 * c__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[9] = 0.207 * s__q_LF_HAA - 0.04263;
  tr->fr_trunk_XM_LF_hipassemblyCOM[4] = 0.2041 * c__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[10] = -0.2041 * s__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[16] = 0.04263 * c__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[22] = -s__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[28] = -c__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[5] = -0.2041 * s__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[11] = -0.2041 * c__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[17] = 0.207 - 0.04263 * s__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[23] = -c__q_LF_HAA;
  tr->fr_trunk_XM_LF_hipassemblyCOM[29] = s__q_LF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[1] = s__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[7] = c__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[2] = -c__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[8] = s__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[3] = 0.207 * c__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[9] = 0.04263 - 0.207 * s__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[4] = 0.2041 * c__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[10] = -0.2041 * s__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[16] = -0.04263 * c__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[22] = s__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[28] = c__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[5] = 0.2041 * s__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[11] = 0.2041 * c__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[17] = 0.207 - 0.04263 * s__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[23] = -c__q_RF_HAA;
  tr->fr_trunk_XM_RF_hipassemblyCOM[29] = s__q_RF_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[1] = -s__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[7] = -c__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[2] = -c__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[8] = s__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[3] = -0.207 * c__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[9] = 0.207 * s__q_LH_HAA - 0.04263;
  tr->fr_trunk_XM_LH_hipassemblyCOM[4] = -0.2041 * c__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[10] = 0.2041 * s__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[16] = 0.04263 * c__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[22] = -s__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[28] = -c__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[5] = 0.2041 * s__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[11] = 0.2041 * c__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[17] = 0.207 - 0.04263 * s__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[23] = -c__q_LH_HAA;
  tr->fr_trunk_XM_LH_hipassemblyCOM[29] = s__q_LH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[1] = s__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[7] = c__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[2] = -c__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[8] = s__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[3] = 0.207 * c__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[9] = 0.04263 - 0.207 * s__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[4] = -0.2041 * c__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[10] = 0.2041 * s__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[16] = -0.04263 * c__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[22] = s__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[28] = c__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[5] = -0.2041 * s__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[11] = -0.2041 * c__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[17] = 0.207 - 0.04263 * s__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[23] = -c__q_RH_HAA;
  tr->fr_trunk_XM_RH_hipassemblyCOM[29] = s__q_RH_HAA;
  tr->fr_trunk_XM_LF_upperlegCOM[0] = -s__q_LF_HFE;
  tr->fr_trunk_XM_LF_upperlegCOM[6] = -c__q_LF_HFE;
  tmp = -s__q_LF_HAA * c__q_LF_HFE;
  tr->fr_trunk_XM_LF_upperlegCOM[1] = tmp;
  tmp_0 = s__q_LF_HAA * s__q_LF_HFE;
  tr->fr_trunk_XM_LF_upperlegCOM[7] = tmp_0;
  tr->fr_trunk_XM_LF_upperlegCOM[13] = c__q_LF_HAA;
  tmp_2 = -c__q_LF_HAA * c__q_LF_HFE;
  tr->fr_trunk_XM_LF_upperlegCOM[2] = tmp_2;
  tmp_3 = c__q_LF_HAA * s__q_LF_HFE;
  tr->fr_trunk_XM_LF_upperlegCOM[8] = tmp_3;
  tr->fr_trunk_XM_LF_upperlegCOM[14] = -s__q_LF_HAA;
  tmp_2g = -0.207 * c__q_LF_HAA * c__q_LF_HFE;
  tr->fr_trunk_XM_LF_upperlegCOM[3] = tmp_2g;
  tmp_l = 0.207 * c__q_LF_HAA * s__q_LF_HFE;
  tr->fr_trunk_XM_LF_upperlegCOM[9] = tmp_l;
  tr->fr_trunk_XM_LF_upperlegCOM[15] = ((0.02625 * s__q_LF_HFE + 0.1507 *
    c__q_LF_HFE) - 0.207 * s__q_LF_HAA) + 0.08;
  tr->fr_trunk_XM_LF_upperlegCOM[21] = -s__q_LF_HFE;
  tr->fr_trunk_XM_LF_upperlegCOM[27] = -c__q_LF_HFE;
  tmp_r = 0.3735 * c__q_LF_HAA * c__q_LF_HFE;
  tmp_q = 0.08 * c__q_LF_HAA * s__q_LF_HFE + tmp_r;
  tr->fr_trunk_XM_LF_upperlegCOM[4] = tmp_q + 0.02625 * c__q_LF_HAA;
  tmp_2k = 0.08 * c__q_LF_HAA * c__q_LF_HFE;
  tmp_p = -0.3735 * c__q_LF_HAA * s__q_LF_HFE + tmp_2k;
  tr->fr_trunk_XM_LF_upperlegCOM[10] = tmp_p + 0.1507 * c__q_LF_HAA;
  tr->fr_trunk_XM_LF_upperlegCOM[16] = (-0.1507 * s__q_LF_HAA * s__q_LF_HFE +
    0.02625 * s__q_LF_HAA * c__q_LF_HFE) + 0.3735 * s__q_LF_HAA;
  tr->fr_trunk_XM_LF_upperlegCOM[22] = tmp;
  tr->fr_trunk_XM_LF_upperlegCOM[28] = tmp_0;
  tr->fr_trunk_XM_LF_upperlegCOM[34] = c__q_LF_HAA;
  tmp_1 = 0.207 - 0.08 * s__q_LF_HAA;
  tmp_v = 0.3735 * s__q_LF_HAA * c__q_LF_HFE;
  tmp_u = tmp_1 * s__q_LF_HFE - tmp_v;
  tr->fr_trunk_XM_LF_upperlegCOM[5] = tmp_u - 0.02625 * s__q_LF_HAA;
  tmp_t = tmp_1 * c__q_LF_HFE + 0.3735 * s__q_LF_HAA * s__q_LF_HFE;
  tr->fr_trunk_XM_LF_upperlegCOM[11] = tmp_t - 0.1507 * s__q_LF_HAA;
  tr->fr_trunk_XM_LF_upperlegCOM[17] = (-0.1507 * c__q_LF_HAA * s__q_LF_HFE +
    0.02625 * c__q_LF_HAA * c__q_LF_HFE) + 0.3735 * c__q_LF_HAA;
  tr->fr_trunk_XM_LF_upperlegCOM[23] = tmp_2;
  tr->fr_trunk_XM_LF_upperlegCOM[29] = tmp_3;
  tr->fr_trunk_XM_LF_upperlegCOM[35] = -s__q_LF_HAA;
  tr->fr_trunk_XM_RF_upperlegCOM[0] = -s__q_RF_HFE;
  tr->fr_trunk_XM_RF_upperlegCOM[6] = -c__q_RF_HFE;
  tmp_4 = s__q_RF_HAA * c__q_RF_HFE;
  tr->fr_trunk_XM_RF_upperlegCOM[1] = tmp_4;
  tmp_5 = -s__q_RF_HAA * s__q_RF_HFE;
  tr->fr_trunk_XM_RF_upperlegCOM[7] = tmp_5;
  tr->fr_trunk_XM_RF_upperlegCOM[13] = c__q_RF_HAA;
  tmp_7 = -c__q_RF_HAA * c__q_RF_HFE;
  tr->fr_trunk_XM_RF_upperlegCOM[2] = tmp_7;
  tmp_8 = c__q_RF_HAA * s__q_RF_HFE;
  tr->fr_trunk_XM_RF_upperlegCOM[8] = tmp_8;
  tr->fr_trunk_XM_RF_upperlegCOM[14] = s__q_RF_HAA;
  tmp_z = 0.207 * c__q_RF_HAA * c__q_RF_HFE;
  tr->fr_trunk_XM_RF_upperlegCOM[3] = tmp_z;
  tmp_4h = -0.207 * c__q_RF_HAA * s__q_RF_HFE;
  tr->fr_trunk_XM_RF_upperlegCOM[9] = tmp_4h;
  tr->fr_trunk_XM_RF_upperlegCOM[15] = ((0.02625 * s__q_RF_HFE + 0.1507 *
    c__q_RF_HFE) - 0.207 * s__q_RF_HAA) + 0.08;
  tr->fr_trunk_XM_RF_upperlegCOM[21] = -s__q_RF_HFE;
  tr->fr_trunk_XM_RF_upperlegCOM[27] = -c__q_RF_HFE;
  tmp_15 = 0.3735 * c__q_RF_HAA * c__q_RF_HFE;
  tmp_14 = 0.08 * c__q_RF_HAA * s__q_RF_HFE + tmp_15;
  tr->fr_trunk_XM_RF_upperlegCOM[4] = tmp_14 + 0.02625 * c__q_RF_HAA;
  tmp_2y = 0.08 * c__q_RF_HAA * c__q_RF_HFE;
  tmp_13 = -0.3735 * c__q_RF_HAA * s__q_RF_HFE + tmp_2y;
  tr->fr_trunk_XM_RF_upperlegCOM[10] = tmp_13 + 0.1507 * c__q_RF_HAA;
  tr->fr_trunk_XM_RF_upperlegCOM[16] = (0.1507 * s__q_RF_HAA * s__q_RF_HFE -
    0.02625 * s__q_RF_HAA * c__q_RF_HFE) - 0.3735 * s__q_RF_HAA;
  tr->fr_trunk_XM_RF_upperlegCOM[22] = tmp_4;
  tr->fr_trunk_XM_RF_upperlegCOM[28] = tmp_5;
  tr->fr_trunk_XM_RF_upperlegCOM[34] = c__q_RF_HAA;
  tmp_6 = 0.08 * s__q_RF_HAA - 0.207;
  tmp_1a = 0.3735 * s__q_RF_HAA * c__q_RF_HFE;
  tmp_19 = tmp_6 * s__q_RF_HFE + tmp_1a;
  tr->fr_trunk_XM_RF_upperlegCOM[5] = tmp_19 + 0.02625 * s__q_RF_HAA;
  tmp_18 = tmp_6 * c__q_RF_HFE + -0.3735 * s__q_RF_HAA * s__q_RF_HFE;
  tr->fr_trunk_XM_RF_upperlegCOM[11] = tmp_18 + 0.1507 * s__q_RF_HAA;
  tr->fr_trunk_XM_RF_upperlegCOM[17] = (-0.1507 * c__q_RF_HAA * s__q_RF_HFE +
    0.02625 * c__q_RF_HAA * c__q_RF_HFE) + 0.3735 * c__q_RF_HAA;
  tr->fr_trunk_XM_RF_upperlegCOM[23] = tmp_7;
  tr->fr_trunk_XM_RF_upperlegCOM[29] = tmp_8;
  tr->fr_trunk_XM_RF_upperlegCOM[35] = s__q_RF_HAA;
  tr->fr_trunk_XM_LH_upperlegCOM[0] = -s__q_LH_HFE;
  tr->fr_trunk_XM_LH_upperlegCOM[6] = -c__q_LH_HFE;
  tmp_9 = -s__q_LH_HAA * c__q_LH_HFE;
  tr->fr_trunk_XM_LH_upperlegCOM[1] = tmp_9;
  tmp_a = s__q_LH_HAA * s__q_LH_HFE;
  tr->fr_trunk_XM_LH_upperlegCOM[7] = tmp_a;
  tr->fr_trunk_XM_LH_upperlegCOM[13] = c__q_LH_HAA;
  tmp_c = -c__q_LH_HAA * c__q_LH_HFE;
  tr->fr_trunk_XM_LH_upperlegCOM[2] = tmp_c;
  tmp_d = c__q_LH_HAA * s__q_LH_HFE;
  tr->fr_trunk_XM_LH_upperlegCOM[8] = tmp_d;
  tr->fr_trunk_XM_LH_upperlegCOM[14] = -s__q_LH_HAA;
  tmp_3b = -0.207 * c__q_LH_HAA * c__q_LH_HFE;
  tr->fr_trunk_XM_LH_upperlegCOM[3] = tmp_3b;
  tmp_1e = 0.207 * c__q_LH_HAA * s__q_LH_HFE;
  tr->fr_trunk_XM_LH_upperlegCOM[9] = tmp_1e;
  tr->fr_trunk_XM_LH_upperlegCOM[15] = ((-0.02625 * s__q_LH_HFE + 0.1507 *
    c__q_LH_HFE) - 0.207 * s__q_LH_HAA) + 0.08;
  tr->fr_trunk_XM_LH_upperlegCOM[21] = -s__q_LH_HFE;
  tr->fr_trunk_XM_LH_upperlegCOM[27] = -c__q_LH_HFE;
  tmp_1k = 0.3735 * c__q_LH_HAA * c__q_LH_HFE;
  tmp_1l = 0.08 * c__q_LH_HAA * s__q_LH_HFE;
  tmp_1j = tmp_1l - tmp_1k;
  tr->fr_trunk_XM_LH_upperlegCOM[4] = tmp_1j - 0.02625 * c__q_LH_HAA;
  tmp_3f = 0.08 * c__q_LH_HAA * c__q_LH_HFE;
  tmp_1i = 0.3735 * c__q_LH_HAA * s__q_LH_HFE + tmp_3f;
  tr->fr_trunk_XM_LH_upperlegCOM[10] = tmp_1i + 0.1507 * c__q_LH_HAA;
  tr->fr_trunk_XM_LH_upperlegCOM[16] = (-0.1507 * s__q_LH_HAA * s__q_LH_HFE -
    0.02625 * s__q_LH_HAA * c__q_LH_HFE) - 0.3735 * s__q_LH_HAA;
  tr->fr_trunk_XM_LH_upperlegCOM[22] = tmp_9;
  tr->fr_trunk_XM_LH_upperlegCOM[28] = tmp_a;
  tr->fr_trunk_XM_LH_upperlegCOM[34] = c__q_LH_HAA;
  tmp_b = 0.207 - 0.08 * s__q_LH_HAA;
  tmp_1p = 0.3735 * s__q_LH_HAA * c__q_LH_HFE;
  tmp_1o = tmp_b * s__q_LH_HFE + tmp_1p;
  tr->fr_trunk_XM_LH_upperlegCOM[5] = tmp_1o + 0.02625 * s__q_LH_HAA;
  tmp_1n = tmp_b * c__q_LH_HFE + -0.3735 * s__q_LH_HAA * s__q_LH_HFE;
  tr->fr_trunk_XM_LH_upperlegCOM[11] = tmp_1n - 0.1507 * s__q_LH_HAA;
  tr->fr_trunk_XM_LH_upperlegCOM[17] = (-0.1507 * c__q_LH_HAA * s__q_LH_HFE -
    0.02625 * c__q_LH_HAA * c__q_LH_HFE) - 0.3735 * c__q_LH_HAA;
  tr->fr_trunk_XM_LH_upperlegCOM[23] = tmp_c;
  tr->fr_trunk_XM_LH_upperlegCOM[29] = tmp_d;
  tr->fr_trunk_XM_LH_upperlegCOM[35] = -s__q_LH_HAA;
  tr->fr_trunk_XM_RH_upperlegCOM[0] = -s__q_RH_HFE;
  tr->fr_trunk_XM_RH_upperlegCOM[6] = -c__q_RH_HFE;
  tmp_e = s__q_RH_HAA * c__q_RH_HFE;
  tr->fr_trunk_XM_RH_upperlegCOM[1] = tmp_e;
  tmp_f = -s__q_RH_HAA * s__q_RH_HFE;
  tr->fr_trunk_XM_RH_upperlegCOM[7] = tmp_f;
  tr->fr_trunk_XM_RH_upperlegCOM[13] = c__q_RH_HAA;
  tmp_h = -c__q_RH_HAA * c__q_RH_HFE;
  tr->fr_trunk_XM_RH_upperlegCOM[2] = tmp_h;
  tmp_i = c__q_RH_HAA * s__q_RH_HFE;
  tr->fr_trunk_XM_RH_upperlegCOM[8] = tmp_i;
  tr->fr_trunk_XM_RH_upperlegCOM[14] = s__q_RH_HAA;
  tmp_1t = 0.207 * c__q_RH_HAA * c__q_RH_HFE;
  tr->fr_trunk_XM_RH_upperlegCOM[3] = tmp_1t;
  tmp_4i = -0.207 * c__q_RH_HAA * s__q_RH_HFE;
  tr->fr_trunk_XM_RH_upperlegCOM[9] = tmp_4i;
  tr->fr_trunk_XM_RH_upperlegCOM[15] = ((-0.02625 * s__q_RH_HFE + 0.1507 *
    c__q_RH_HFE) - 0.207 * s__q_RH_HAA) + 0.08;
  tr->fr_trunk_XM_RH_upperlegCOM[21] = -s__q_RH_HFE;
  tr->fr_trunk_XM_RH_upperlegCOM[27] = -c__q_RH_HFE;
  tmp_1z = 0.3735 * c__q_RH_HAA * c__q_RH_HFE;
  tmp_20 = 0.08 * c__q_RH_HAA * s__q_RH_HFE;
  tmp_1y = tmp_20 - tmp_1z;
  tr->fr_trunk_XM_RH_upperlegCOM[4] = tmp_1y - 0.02625 * c__q_RH_HAA;
  tmp_3t = 0.08 * c__q_RH_HAA * c__q_RH_HFE;
  tmp_1x = 0.3735 * c__q_RH_HAA * s__q_RH_HFE + tmp_3t;
  tr->fr_trunk_XM_RH_upperlegCOM[10] = tmp_1x + 0.1507 * c__q_RH_HAA;
  tr->fr_trunk_XM_RH_upperlegCOM[16] = (0.1507 * s__q_RH_HAA * s__q_RH_HFE +
    0.02625 * s__q_RH_HAA * c__q_RH_HFE) + 0.3735 * s__q_RH_HAA;
  tr->fr_trunk_XM_RH_upperlegCOM[22] = tmp_e;
  tr->fr_trunk_XM_RH_upperlegCOM[28] = tmp_f;
  tr->fr_trunk_XM_RH_upperlegCOM[34] = c__q_RH_HAA;
  tmp_g = 0.08 * s__q_RH_HAA - 0.207;
  tmp_25 = 0.3735 * s__q_RH_HAA * c__q_RH_HFE;
  tmp_24 = tmp_g * s__q_RH_HFE - tmp_25;
  tr->fr_trunk_XM_RH_upperlegCOM[5] = tmp_24 - 0.02625 * s__q_RH_HAA;
  tmp_23 = tmp_g * c__q_RH_HFE + 0.3735 * s__q_RH_HAA * s__q_RH_HFE;
  tr->fr_trunk_XM_RH_upperlegCOM[11] = tmp_23 + 0.1507 * s__q_RH_HAA;
  tr->fr_trunk_XM_RH_upperlegCOM[17] = (-0.1507 * c__q_RH_HAA * s__q_RH_HFE -
    0.02625 * c__q_RH_HAA * c__q_RH_HFE) - 0.3735 * c__q_RH_HAA;
  tr->fr_trunk_XM_RH_upperlegCOM[23] = tmp_h;
  tr->fr_trunk_XM_RH_upperlegCOM[29] = tmp_i;
  tr->fr_trunk_XM_RH_upperlegCOM[35] = s__q_RH_HAA;
  tmp_29 = s__q_LF_HFE * c__q_LF_KFE;
  tmp_n = -c__q_LF_HFE * s__q_LF_KFE - tmp_29;
  tr->fr_trunk_XM_LF_lowerlegCOM[0] = tmp_n;
  tmp_27 = c__q_LF_HFE * c__q_LF_KFE;
  tmp_28 = s__q_LF_HFE * s__q_LF_KFE;
  tmp_o = tmp_28 - tmp_27;
  tr->fr_trunk_XM_LF_lowerlegCOM[6] = tmp_o;
  tmp_j = s__q_LF_HAA * c__q_LF_HFE;
  tmp_2b = tmp_j * c__q_LF_KFE;
  tmp_2c = tmp_0 * s__q_LF_KFE;
  tmp_s = tmp_2c - tmp_2b;
  tr->fr_trunk_XM_LF_lowerlegCOM[1] = tmp_s;
  tmp_2a = tmp_0 * c__q_LF_KFE;
  tmp_j = tmp_j * s__q_LF_KFE + tmp_2a;
  tr->fr_trunk_XM_LF_lowerlegCOM[7] = tmp_j;
  tr->fr_trunk_XM_LF_lowerlegCOM[13] = c__q_LF_HAA;
  tmp_k = c__q_LF_HAA * c__q_LF_HFE;
  tmp_2e = tmp_k * c__q_LF_KFE;
  tmp_2f = tmp_3 * s__q_LF_KFE;
  tmp_w = tmp_2f - tmp_2e;
  tr->fr_trunk_XM_LF_lowerlegCOM[2] = tmp_w;
  tmp_2d = tmp_3 * c__q_LF_KFE;
  tmp_k = tmp_k * s__q_LF_KFE + tmp_2d;
  tr->fr_trunk_XM_LF_lowerlegCOM[8] = tmp_k;
  tr->fr_trunk_XM_LF_lowerlegCOM[14] = -s__q_LF_HAA;
  tmp_m = 0.207 * c__q_LF_HAA * c__q_LF_HFE;
  tmp_2i = tmp_m * c__q_LF_KFE;
  tmp_2j = tmp_l * s__q_LF_KFE;
  tmp_3x = tmp_2j - tmp_2i;
  tr->fr_trunk_XM_LF_lowerlegCOM[3] = tmp_3x;
  tmp_2h = tmp_l * c__q_LF_KFE;
  tmp_m = tmp_m * s__q_LF_KFE + tmp_2h;
  tr->fr_trunk_XM_LF_lowerlegCOM[9] = tmp_m;
  tr->fr_trunk_XM_LF_lowerlegCOM[15] = (((-0.1254 * s__q_LF_HFE * s__q_LF_KFE +
    0.1254 * c__q_LF_HFE * c__q_LF_KFE) + 0.35 * c__q_LF_HFE) - 0.207 *
    s__q_LF_HAA) + 0.08;
  tr->fr_trunk_XM_LF_lowerlegCOM[21] = tmp_n;
  tr->fr_trunk_XM_LF_lowerlegCOM[27] = tmp_o;
  tmp_p += 0.35 * c__q_LF_HAA;
  tmp_3y = tmp_p * s__q_LF_KFE + tmp_q * c__q_LF_KFE;
  tr->fr_trunk_XM_LF_lowerlegCOM[4] = tmp_3y;
  tmp_r = -0.08 * c__q_LF_HAA * s__q_LF_HFE - tmp_r;
  tmp_40 = tmp_p * c__q_LF_KFE + tmp_r * s__q_LF_KFE;
  tr->fr_trunk_XM_LF_lowerlegCOM[10] = tmp_40 + 0.1254 * c__q_LF_HAA;
  tmp_2l = 0.35 * s__q_LF_HAA * s__q_LF_HFE;
  tr->fr_trunk_XM_LF_lowerlegCOM[16] = ((-0.1254 * s__q_LF_HAA * c__q_LF_HFE *
    s__q_LF_KFE - 0.1254 * s__q_LF_HAA * s__q_LF_HFE * c__q_LF_KFE) - tmp_2l) +
    0.3735 * s__q_LF_HAA;
  tr->fr_trunk_XM_LF_lowerlegCOM[22] = tmp_s;
  tr->fr_trunk_XM_LF_lowerlegCOM[28] = tmp_j;
  tr->fr_trunk_XM_LF_lowerlegCOM[34] = c__q_LF_HAA;
  tmp_t -= 0.35 * s__q_LF_HAA;
  tmp_3z = tmp_t * s__q_LF_KFE + tmp_u * c__q_LF_KFE;
  tr->fr_trunk_XM_LF_lowerlegCOM[5] = tmp_3z;
  tmp_2m = 0.08 * s__q_LF_HAA - 0.207;
  tmp_v += tmp_2m * s__q_LF_HFE;
  tmp_41 = tmp_t * c__q_LF_KFE + tmp_v * s__q_LF_KFE;
  tr->fr_trunk_XM_LF_lowerlegCOM[11] = tmp_41 - 0.1254 * s__q_LF_HAA;
  tmp_2n = 0.35 * c__q_LF_HAA * s__q_LF_HFE;
  tr->fr_trunk_XM_LF_lowerlegCOM[17] = ((-0.1254 * c__q_LF_HAA * c__q_LF_HFE *
    s__q_LF_KFE - 0.1254 * c__q_LF_HAA * s__q_LF_HFE * c__q_LF_KFE) - tmp_2n) +
    0.3735 * c__q_LF_HAA;
  tr->fr_trunk_XM_LF_lowerlegCOM[23] = tmp_w;
  tr->fr_trunk_XM_LF_lowerlegCOM[29] = tmp_k;
  tr->fr_trunk_XM_LF_lowerlegCOM[35] = -s__q_LF_HAA;
  tmp_2q = s__q_RF_HFE * c__q_RF_KFE;
  tmp_11 = -c__q_RF_HFE * s__q_RF_KFE - tmp_2q;
  tr->fr_trunk_XM_RF_lowerlegCOM[0] = tmp_11;
  tmp_2o = c__q_RF_HFE * c__q_RF_KFE;
  tmp_2p = s__q_RF_HFE * s__q_RF_KFE;
  tmp_12 = tmp_2p - tmp_2o;
  tr->fr_trunk_XM_RF_lowerlegCOM[6] = tmp_12;
  tmp_x = s__q_RF_HAA * s__q_RF_HFE;
  tmp_2r = tmp_x * s__q_RF_KFE;
  tmp_2s = tmp_4 * c__q_RF_KFE;
  tmp_16 = tmp_2s - tmp_2r;
  tr->fr_trunk_XM_RF_lowerlegCOM[1] = tmp_16;
  tmp_x *= c__q_RF_KFE;
  tmp_17 = -s__q_RF_HAA * c__q_RF_HFE * s__q_RF_KFE - tmp_x;
  tr->fr_trunk_XM_RF_lowerlegCOM[7] = tmp_17;
  tr->fr_trunk_XM_RF_lowerlegCOM[13] = c__q_RF_HAA;
  tmp_y = c__q_RF_HAA * c__q_RF_HFE;
  tmp_2u = tmp_y * c__q_RF_KFE;
  tmp_2v = tmp_8 * s__q_RF_KFE;
  tmp_1b = tmp_2v - tmp_2u;
  tr->fr_trunk_XM_RF_lowerlegCOM[2] = tmp_1b;
  tmp_2t = tmp_8 * c__q_RF_KFE;
  tmp_y = tmp_y * s__q_RF_KFE + tmp_2t;
  tr->fr_trunk_XM_RF_lowerlegCOM[8] = tmp_y;
  tr->fr_trunk_XM_RF_lowerlegCOM[14] = s__q_RF_HAA;
  tmp_10 = 0.207 * c__q_RF_HAA * s__q_RF_HFE;
  tmp_2w = tmp_10 * s__q_RF_KFE;
  tmp_2x = tmp_z * c__q_RF_KFE;
  tmp_42 = tmp_2x - tmp_2w;
  tr->fr_trunk_XM_RF_lowerlegCOM[3] = tmp_42;
  tmp_10 *= c__q_RF_KFE;
  tmp_45 = -0.207 * c__q_RF_HAA * c__q_RF_HFE * s__q_RF_KFE - tmp_10;
  tr->fr_trunk_XM_RF_lowerlegCOM[9] = tmp_45;
  tr->fr_trunk_XM_RF_lowerlegCOM[15] = (((-0.1254 * s__q_RF_HFE * s__q_RF_KFE +
    0.1254 * c__q_RF_HFE * c__q_RF_KFE) + 0.35 * c__q_RF_HFE) - 0.207 *
    s__q_RF_HAA) + 0.08;
  tr->fr_trunk_XM_RF_lowerlegCOM[21] = tmp_11;
  tr->fr_trunk_XM_RF_lowerlegCOM[27] = tmp_12;
  tmp_13 += 0.35 * c__q_RF_HAA;
  tmp_43 = tmp_13 * s__q_RF_KFE + tmp_14 * c__q_RF_KFE;
  tr->fr_trunk_XM_RF_lowerlegCOM[4] = tmp_43;
  tmp_15 = -0.08 * c__q_RF_HAA * s__q_RF_HFE - tmp_15;
  tmp_46 = tmp_13 * c__q_RF_KFE + tmp_15 * s__q_RF_KFE;
  tr->fr_trunk_XM_RF_lowerlegCOM[10] = tmp_46 + 0.1254 * c__q_RF_HAA;
  tmp_2z = 0.35 * s__q_RF_HAA * s__q_RF_HFE;
  tr->fr_trunk_XM_RF_lowerlegCOM[16] = ((0.1254 * s__q_RF_HAA * c__q_RF_HFE *
    s__q_RF_KFE + 0.1254 * s__q_RF_HAA * s__q_RF_HFE * c__q_RF_KFE) + tmp_2z) -
    0.3735 * s__q_RF_HAA;
  tr->fr_trunk_XM_RF_lowerlegCOM[22] = tmp_16;
  tr->fr_trunk_XM_RF_lowerlegCOM[28] = tmp_17;
  tr->fr_trunk_XM_RF_lowerlegCOM[34] = c__q_RF_HAA;
  tmp_18 += 0.35 * s__q_RF_HAA;
  tmp_44 = tmp_18 * s__q_RF_KFE + tmp_19 * c__q_RF_KFE;
  tr->fr_trunk_XM_RF_lowerlegCOM[5] = tmp_44;
  tmp_30 = 0.207 - 0.08 * s__q_RF_HAA;
  tmp_1a = tmp_30 * s__q_RF_HFE - tmp_1a;
  tmp_47 = tmp_18 * c__q_RF_KFE + tmp_1a * s__q_RF_KFE;
  tr->fr_trunk_XM_RF_lowerlegCOM[11] = tmp_47 + 0.1254 * s__q_RF_HAA;
  tmp_31 = 0.35 * c__q_RF_HAA * s__q_RF_HFE;
  tr->fr_trunk_XM_RF_lowerlegCOM[17] = ((-0.1254 * c__q_RF_HAA * c__q_RF_HFE *
    s__q_RF_KFE - 0.1254 * c__q_RF_HAA * s__q_RF_HFE * c__q_RF_KFE) - tmp_31) +
    0.3735 * c__q_RF_HAA;
  tr->fr_trunk_XM_RF_lowerlegCOM[23] = tmp_1b;
  tr->fr_trunk_XM_RF_lowerlegCOM[29] = tmp_y;
  tr->fr_trunk_XM_RF_lowerlegCOM[35] = s__q_RF_HAA;
  tmp_34 = s__q_LH_HFE * c__q_LH_KFE;
  tmp_1g = -c__q_LH_HFE * s__q_LH_KFE - tmp_34;
  tr->fr_trunk_XM_LH_lowerlegCOM[0] = tmp_1g;
  tmp_32 = c__q_LH_HFE * c__q_LH_KFE;
  tmp_33 = s__q_LH_HFE * s__q_LH_KFE;
  tmp_1h = tmp_33 - tmp_32;
  tr->fr_trunk_XM_LH_lowerlegCOM[6] = tmp_1h;
  tmp_1c = s__q_LH_HAA * c__q_LH_HFE;
  tmp_36 = tmp_1c * c__q_LH_KFE;
  tmp_37 = tmp_a * s__q_LH_KFE;
  tmp_1m = tmp_37 - tmp_36;
  tr->fr_trunk_XM_LH_lowerlegCOM[1] = tmp_1m;
  tmp_35 = tmp_a * c__q_LH_KFE;
  tmp_1c = tmp_1c * s__q_LH_KFE + tmp_35;
  tr->fr_trunk_XM_LH_lowerlegCOM[7] = tmp_1c;
  tr->fr_trunk_XM_LH_lowerlegCOM[13] = c__q_LH_HAA;
  tmp_1d = c__q_LH_HAA * c__q_LH_HFE;
  tmp_39 = tmp_1d * c__q_LH_KFE;
  tmp_3a = tmp_d * s__q_LH_KFE;
  tmp_1q = tmp_3a - tmp_39;
  tr->fr_trunk_XM_LH_lowerlegCOM[2] = tmp_1q;
  tmp_38 = tmp_d * c__q_LH_KFE;
  tmp_1d = tmp_1d * s__q_LH_KFE + tmp_38;
  tr->fr_trunk_XM_LH_lowerlegCOM[8] = tmp_1d;
  tr->fr_trunk_XM_LH_lowerlegCOM[14] = -s__q_LH_HAA;
  tmp_1f = 0.207 * c__q_LH_HAA * c__q_LH_HFE;
  tmp_3d = tmp_1f * c__q_LH_KFE;
  tmp_3e = tmp_1e * s__q_LH_KFE;
  tmp_48 = tmp_3e - tmp_3d;
  tr->fr_trunk_XM_LH_lowerlegCOM[3] = tmp_48;
  tmp_3c = tmp_1e * c__q_LH_KFE;
  tmp_1f = tmp_1f * s__q_LH_KFE + tmp_3c;
  tr->fr_trunk_XM_LH_lowerlegCOM[9] = tmp_1f;
  tr->fr_trunk_XM_LH_lowerlegCOM[15] = (((-0.1254 * s__q_LH_HFE * s__q_LH_KFE +
    0.1254 * c__q_LH_HFE * c__q_LH_KFE) + 0.35 * c__q_LH_HFE) - 0.207 *
    s__q_LH_HAA) + 0.08;
  tr->fr_trunk_XM_LH_lowerlegCOM[21] = tmp_1g;
  tr->fr_trunk_XM_LH_lowerlegCOM[27] = tmp_1h;
  tmp_1i += 0.35 * c__q_LH_HAA;
  tmp_49 = tmp_1i * s__q_LH_KFE + tmp_1j * c__q_LH_KFE;
  tr->fr_trunk_XM_LH_lowerlegCOM[4] = tmp_49;
  tmp_1k -= tmp_1l;
  tmp_1l = tmp_1i * c__q_LH_KFE + tmp_1k * s__q_LH_KFE;
  tr->fr_trunk_XM_LH_lowerlegCOM[10] = tmp_1l + 0.1254 * c__q_LH_HAA;
  tmp_3g = 0.35 * s__q_LH_HAA * s__q_LH_HFE;
  tr->fr_trunk_XM_LH_lowerlegCOM[16] = ((-0.1254 * s__q_LH_HAA * c__q_LH_HFE *
    s__q_LH_KFE - 0.1254 * s__q_LH_HAA * s__q_LH_HFE * c__q_LH_KFE) - tmp_3g) -
    0.3735 * s__q_LH_HAA;
  tr->fr_trunk_XM_LH_lowerlegCOM[22] = tmp_1m;
  tr->fr_trunk_XM_LH_lowerlegCOM[28] = tmp_1c;
  tr->fr_trunk_XM_LH_lowerlegCOM[34] = c__q_LH_HAA;
  tmp_1n -= 0.35 * s__q_LH_HAA;
  tmp_4a = tmp_1n * s__q_LH_KFE + tmp_1o * c__q_LH_KFE;
  tr->fr_trunk_XM_LH_lowerlegCOM[5] = tmp_4a;
  tmp_3h = 0.08 * s__q_LH_HAA - 0.207;
  tmp_1p = tmp_3h * s__q_LH_HFE - tmp_1p;
  tmp_4b = tmp_1n * c__q_LH_KFE + tmp_1p * s__q_LH_KFE;
  tr->fr_trunk_XM_LH_lowerlegCOM[11] = tmp_4b - 0.1254 * s__q_LH_HAA;
  tmp_3i = 0.35 * c__q_LH_HAA * s__q_LH_HFE;
  tr->fr_trunk_XM_LH_lowerlegCOM[17] = ((-0.1254 * c__q_LH_HAA * c__q_LH_HFE *
    s__q_LH_KFE - 0.1254 * c__q_LH_HAA * s__q_LH_HFE * c__q_LH_KFE) - tmp_3i) -
    0.3735 * c__q_LH_HAA;
  tr->fr_trunk_XM_LH_lowerlegCOM[23] = tmp_1q;
  tr->fr_trunk_XM_LH_lowerlegCOM[29] = tmp_1d;
  tr->fr_trunk_XM_LH_lowerlegCOM[35] = -s__q_LH_HAA;
  tmp_3l = s__q_RH_HFE * c__q_RH_KFE;
  tmp_1v = -c__q_RH_HFE * s__q_RH_KFE - tmp_3l;
  tr->fr_trunk_XM_RH_lowerlegCOM[0] = tmp_1v;
  tmp_3j = c__q_RH_HFE * c__q_RH_KFE;
  tmp_3k = s__q_RH_HFE * s__q_RH_KFE;
  tmp_1w = tmp_3k - tmp_3j;
  tr->fr_trunk_XM_RH_lowerlegCOM[6] = tmp_1w;
  tmp_1r = s__q_RH_HAA * s__q_RH_HFE;
  tmp_3m = tmp_1r * s__q_RH_KFE;
  tmp_3n = tmp_e * c__q_RH_KFE;
  tmp_21 = tmp_3n - tmp_3m;
  tr->fr_trunk_XM_RH_lowerlegCOM[1] = tmp_21;
  tmp_1r *= c__q_RH_KFE;
  tmp_22 = -s__q_RH_HAA * c__q_RH_HFE * s__q_RH_KFE - tmp_1r;
  tr->fr_trunk_XM_RH_lowerlegCOM[7] = tmp_22;
  tr->fr_trunk_XM_RH_lowerlegCOM[13] = c__q_RH_HAA;
  tmp_1s = c__q_RH_HAA * c__q_RH_HFE;
  tmp_3p = tmp_1s * c__q_RH_KFE;
  tmp_3q = tmp_i * s__q_RH_KFE;
  tmp_26 = tmp_3q - tmp_3p;
  tr->fr_trunk_XM_RH_lowerlegCOM[2] = tmp_26;
  tmp_3o = tmp_i * c__q_RH_KFE;
  tmp_1s = tmp_1s * s__q_RH_KFE + tmp_3o;
  tr->fr_trunk_XM_RH_lowerlegCOM[8] = tmp_1s;
  tr->fr_trunk_XM_RH_lowerlegCOM[14] = s__q_RH_HAA;
  tmp_1u = 0.207 * c__q_RH_HAA * s__q_RH_HFE;
  tmp_3r = tmp_1u * s__q_RH_KFE;
  tmp_3s = tmp_1t * c__q_RH_KFE;
  tmp_4c = tmp_3s - tmp_3r;
  tr->fr_trunk_XM_RH_lowerlegCOM[3] = tmp_4c;
  tmp_1u *= c__q_RH_KFE;
  tmp_4f = -0.207 * c__q_RH_HAA * c__q_RH_HFE * s__q_RH_KFE - tmp_1u;
  tr->fr_trunk_XM_RH_lowerlegCOM[9] = tmp_4f;
  tr->fr_trunk_XM_RH_lowerlegCOM[15] = (((-0.1254 * s__q_RH_HFE * s__q_RH_KFE +
    0.1254 * c__q_RH_HFE * c__q_RH_KFE) + 0.35 * c__q_RH_HFE) - 0.207 *
    s__q_RH_HAA) + 0.08;
  tr->fr_trunk_XM_RH_lowerlegCOM[21] = tmp_1v;
  tr->fr_trunk_XM_RH_lowerlegCOM[27] = tmp_1w;
  tmp_1x += 0.35 * c__q_RH_HAA;
  tmp_4d = tmp_1x * s__q_RH_KFE + tmp_1y * c__q_RH_KFE;
  tr->fr_trunk_XM_RH_lowerlegCOM[4] = tmp_4d;
  tmp_1z -= tmp_20;
  tmp_20 = tmp_1x * c__q_RH_KFE + tmp_1z * s__q_RH_KFE;
  tr->fr_trunk_XM_RH_lowerlegCOM[10] = tmp_20 + 0.1254 * c__q_RH_HAA;
  tmp_3u = 0.35 * s__q_RH_HAA * s__q_RH_HFE;
  tr->fr_trunk_XM_RH_lowerlegCOM[16] = ((0.1254 * s__q_RH_HAA * c__q_RH_HFE *
    s__q_RH_KFE + 0.1254 * s__q_RH_HAA * s__q_RH_HFE * c__q_RH_KFE) + tmp_3u) +
    0.3735 * s__q_RH_HAA;
  tr->fr_trunk_XM_RH_lowerlegCOM[22] = tmp_21;
  tr->fr_trunk_XM_RH_lowerlegCOM[28] = tmp_22;
  tr->fr_trunk_XM_RH_lowerlegCOM[34] = c__q_RH_HAA;
  tmp_23 += 0.35 * s__q_RH_HAA;
  tmp_4e = tmp_23 * s__q_RH_KFE + tmp_24 * c__q_RH_KFE;
  tr->fr_trunk_XM_RH_lowerlegCOM[5] = tmp_4e;
  tmp_3v = 0.207 - 0.08 * s__q_RH_HAA;
  tmp_25 += tmp_3v * s__q_RH_HFE;
  tmp_4g = tmp_23 * c__q_RH_KFE + tmp_25 * s__q_RH_KFE;
  tr->fr_trunk_XM_RH_lowerlegCOM[11] = tmp_4g + 0.1254 * s__q_RH_HAA;
  tmp_3w = 0.35 * c__q_RH_HAA * s__q_RH_HFE;
  tr->fr_trunk_XM_RH_lowerlegCOM[17] = ((-0.1254 * c__q_RH_HAA * c__q_RH_HFE *
    s__q_RH_KFE - 0.1254 * c__q_RH_HAA * s__q_RH_HFE * c__q_RH_KFE) - tmp_3w) -
    0.3735 * c__q_RH_HAA;
  tr->fr_trunk_XM_RH_lowerlegCOM[23] = tmp_26;
  tr->fr_trunk_XM_RH_lowerlegCOM[29] = tmp_1s;
  tr->fr_trunk_XM_RH_lowerlegCOM[35] = s__q_RH_HAA;
  tmp_27 -= tmp_28;
  tr->fr_trunk_XM_LF_foot[0] = tmp_27;
  tmp_29 += c__q_LF_HFE * s__q_LF_KFE;
  tr->fr_trunk_XM_LF_foot[12] = tmp_29;
  tmp_28 = tmp * s__q_LF_KFE - tmp_2a;
  tr->fr_trunk_XM_LF_foot[1] = tmp_28;
  tr->fr_trunk_XM_LF_foot[7] = c__q_LF_HAA;
  tmp_2b -= tmp_2c;
  tr->fr_trunk_XM_LF_foot[13] = tmp_2b;
  tmp_2c = tmp_2 * s__q_LF_KFE - tmp_2d;
  tr->fr_trunk_XM_LF_foot[2] = tmp_2c;
  tr->fr_trunk_XM_LF_foot[8] = -s__q_LF_HAA;
  tmp_2a = tmp_2e - tmp_2f;
  tr->fr_trunk_XM_LF_foot[14] = tmp_2a;
  tmp_2e = tmp_2g * s__q_LF_KFE - tmp_2h;
  tr->fr_trunk_XM_LF_foot[3] = tmp_2e;
  tmp_2f = (((-0.33 * s__q_LF_HFE * s__q_LF_KFE + 0.33 * c__q_LF_HFE *
              c__q_LF_KFE) + 0.35 * c__q_LF_HFE) - 0.207 * s__q_LF_HAA) + 0.08;
  tr->fr_trunk_XM_LF_foot[9] = tmp_2f;
  tmp_2d = tmp_2i - tmp_2j;
  tr->fr_trunk_XM_LF_foot[15] = tmp_2d;
  tr->fr_trunk_XM_LF_foot[21] = tmp_27;
  tr->fr_trunk_XM_LF_foot[33] = tmp_29;
  tmp_2k = (0.3735 * c__q_LF_HAA * s__q_LF_HFE - tmp_2k) - 0.35 * c__q_LF_HAA;
  tmp_2i = (tmp_2k * c__q_LF_KFE + tmp_q * s__q_LF_KFE) - 0.33 * c__q_LF_HAA;
  tr->fr_trunk_XM_LF_foot[4] = tmp_2i;
  tmp_2j = ((-0.33 * s__q_LF_HAA * c__q_LF_HFE * s__q_LF_KFE - 0.33 *
             s__q_LF_HAA * s__q_LF_HFE * c__q_LF_KFE) - tmp_2l) + 0.3735 *
    s__q_LF_HAA;
  tr->fr_trunk_XM_LF_foot[10] = tmp_2j;
  tmp_r = tmp_2k * s__q_LF_KFE + tmp_r * c__q_LF_KFE;
  tr->fr_trunk_XM_LF_foot[16] = tmp_r;
  tr->fr_trunk_XM_LF_foot[22] = tmp_28;
  tr->fr_trunk_XM_LF_foot[28] = c__q_LF_HAA;
  tr->fr_trunk_XM_LF_foot[34] = tmp_2b;
  tmp_2k = (tmp_2m * c__q_LF_HFE + -0.3735 * s__q_LF_HAA * s__q_LF_HFE) + 0.35 *
    s__q_LF_HAA;
  tmp_2h = (tmp_2k * c__q_LF_KFE + tmp_u * s__q_LF_KFE) + 0.33 * s__q_LF_HAA;
  tr->fr_trunk_XM_LF_foot[5] = tmp_2h;
  tmp_2m = ((-0.33 * c__q_LF_HAA * c__q_LF_HFE * s__q_LF_KFE - 0.33 *
             c__q_LF_HAA * s__q_LF_HFE * c__q_LF_KFE) - tmp_2n) + 0.3735 *
    c__q_LF_HAA;
  tr->fr_trunk_XM_LF_foot[11] = tmp_2m;
  tmp_2k = tmp_2k * s__q_LF_KFE + tmp_v * c__q_LF_KFE;
  tr->fr_trunk_XM_LF_foot[17] = tmp_2k;
  tr->fr_trunk_XM_LF_foot[23] = tmp_2c;
  tr->fr_trunk_XM_LF_foot[29] = -s__q_LF_HAA;
  tr->fr_trunk_XM_LF_foot[35] = tmp_2a;
  tmp_v = tmp_2o - tmp_2p;
  tr->fr_trunk_XM_RF_foot[0] = tmp_v;
  tmp_2q += c__q_RF_HFE * s__q_RF_KFE;
  tr->fr_trunk_XM_RF_foot[12] = tmp_2q;
  tmp_2o = tmp_4 * s__q_RF_KFE + tmp_x;
  tr->fr_trunk_XM_RF_foot[1] = tmp_2o;
  tr->fr_trunk_XM_RF_foot[7] = c__q_RF_HAA;
  tmp_2p = tmp_2r - tmp_2s;
  tr->fr_trunk_XM_RF_foot[13] = tmp_2p;
  tmp_x = tmp_7 * s__q_RF_KFE - tmp_2t;
  tr->fr_trunk_XM_RF_foot[2] = tmp_x;
  tr->fr_trunk_XM_RF_foot[8] = s__q_RF_HAA;
  tmp_2r = tmp_2u - tmp_2v;
  tr->fr_trunk_XM_RF_foot[14] = tmp_2r;
  tmp_2s = tmp_z * s__q_RF_KFE + tmp_10;
  tr->fr_trunk_XM_RF_foot[3] = tmp_2s;
  tmp_2u = (((-0.33 * s__q_RF_HFE * s__q_RF_KFE + 0.33 * c__q_RF_HFE *
              c__q_RF_KFE) + 0.35 * c__q_RF_HFE) - 0.207 * s__q_RF_HAA) + 0.08;
  tr->fr_trunk_XM_RF_foot[9] = tmp_2u;
  tmp_2v = tmp_2w - tmp_2x;
  tr->fr_trunk_XM_RF_foot[15] = tmp_2v;
  tr->fr_trunk_XM_RF_foot[21] = tmp_v;
  tr->fr_trunk_XM_RF_foot[33] = tmp_2q;
  tmp_2y = (0.3735 * c__q_RF_HAA * s__q_RF_HFE - tmp_2y) - 0.35 * c__q_RF_HAA;
  tmp_2t = (tmp_2y * c__q_RF_KFE + tmp_14 * s__q_RF_KFE) - 0.33 * c__q_RF_HAA;
  tr->fr_trunk_XM_RF_foot[4] = tmp_2t;
  tmp_10 = ((0.33 * s__q_RF_HAA * c__q_RF_HFE * s__q_RF_KFE + 0.33 * s__q_RF_HAA
             * s__q_RF_HFE * c__q_RF_KFE) + tmp_2z) - 0.3735 * s__q_RF_HAA;
  tr->fr_trunk_XM_RF_foot[10] = tmp_10;
  tmp_15 = tmp_2y * s__q_RF_KFE + tmp_15 * c__q_RF_KFE;
  tr->fr_trunk_XM_RF_foot[16] = tmp_15;
  tr->fr_trunk_XM_RF_foot[22] = tmp_2o;
  tr->fr_trunk_XM_RF_foot[28] = c__q_RF_HAA;
  tr->fr_trunk_XM_RF_foot[34] = tmp_2p;
  tmp_2y = (tmp_30 * c__q_RF_HFE + 0.3735 * s__q_RF_HAA * s__q_RF_HFE) - 0.35 *
    s__q_RF_HAA;
  tmp_2w = (tmp_2y * c__q_RF_KFE + tmp_19 * s__q_RF_KFE) - 0.33 * s__q_RF_HAA;
  tr->fr_trunk_XM_RF_foot[5] = tmp_2w;
  tmp_2x = ((-0.33 * c__q_RF_HAA * c__q_RF_HFE * s__q_RF_KFE - 0.33 *
             c__q_RF_HAA * s__q_RF_HFE * c__q_RF_KFE) - tmp_31) + 0.3735 *
    c__q_RF_HAA;
  tr->fr_trunk_XM_RF_foot[11] = tmp_2x;
  tmp_2y = tmp_2y * s__q_RF_KFE + tmp_1a * c__q_RF_KFE;
  tr->fr_trunk_XM_RF_foot[17] = tmp_2y;
  tr->fr_trunk_XM_RF_foot[23] = tmp_x;
  tr->fr_trunk_XM_RF_foot[29] = s__q_RF_HAA;
  tr->fr_trunk_XM_RF_foot[35] = tmp_2r;
  tmp_1a = tmp_32 - tmp_33;
  tr->fr_trunk_XM_LH_foot[0] = tmp_1a;
  tmp_30 = c__q_LH_HFE * s__q_LH_KFE + tmp_34;
  tr->fr_trunk_XM_LH_foot[12] = tmp_30;
  tmp_34 = tmp_9 * s__q_LH_KFE - tmp_35;
  tr->fr_trunk_XM_LH_foot[1] = tmp_34;
  tr->fr_trunk_XM_LH_foot[7] = c__q_LH_HAA;
  tmp_32 = tmp_36 - tmp_37;
  tr->fr_trunk_XM_LH_foot[13] = tmp_32;
  tmp_33 = tmp_c * s__q_LH_KFE - tmp_38;
  tr->fr_trunk_XM_LH_foot[2] = tmp_33;
  tr->fr_trunk_XM_LH_foot[8] = -s__q_LH_HAA;
  tmp_36 = tmp_39 - tmp_3a;
  tr->fr_trunk_XM_LH_foot[14] = tmp_36;
  tmp_37 = tmp_3b * s__q_LH_KFE - tmp_3c;
  tr->fr_trunk_XM_LH_foot[3] = tmp_37;
  tmp_35 = (((-0.33 * s__q_LH_HFE * s__q_LH_KFE + 0.33 * c__q_LH_HFE *
              c__q_LH_KFE) + 0.35 * c__q_LH_HFE) - 0.207 * s__q_LH_HAA) + 0.08;
  tr->fr_trunk_XM_LH_foot[9] = tmp_35;
  tmp_39 = tmp_3d - tmp_3e;
  tr->fr_trunk_XM_LH_foot[15] = tmp_39;
  tr->fr_trunk_XM_LH_foot[21] = tmp_1a;
  tr->fr_trunk_XM_LH_foot[33] = tmp_30;
  tmp_3f = (-0.3735 * c__q_LH_HAA * s__q_LH_HFE - tmp_3f) - 0.35 * c__q_LH_HAA;
  tmp_3a = (tmp_3f * c__q_LH_KFE + tmp_1j * s__q_LH_KFE) - 0.33 * c__q_LH_HAA;
  tr->fr_trunk_XM_LH_foot[4] = tmp_3a;
  tmp_38 = ((-0.33 * s__q_LH_HAA * c__q_LH_HFE * s__q_LH_KFE - 0.33 *
             s__q_LH_HAA * s__q_LH_HFE * c__q_LH_KFE) - tmp_3g) - 0.3735 *
    s__q_LH_HAA;
  tr->fr_trunk_XM_LH_foot[10] = tmp_38;
  tmp_1k = tmp_3f * s__q_LH_KFE + tmp_1k * c__q_LH_KFE;
  tr->fr_trunk_XM_LH_foot[16] = tmp_1k;
  tr->fr_trunk_XM_LH_foot[22] = tmp_34;
  tr->fr_trunk_XM_LH_foot[28] = c__q_LH_HAA;
  tr->fr_trunk_XM_LH_foot[34] = tmp_32;
  tmp_3f = (tmp_3h * c__q_LH_HFE + 0.3735 * s__q_LH_HAA * s__q_LH_HFE) + 0.35 *
    s__q_LH_HAA;
  tmp_3d = (tmp_3f * c__q_LH_KFE + tmp_1o * s__q_LH_KFE) + 0.33 * s__q_LH_HAA;
  tr->fr_trunk_XM_LH_foot[5] = tmp_3d;
  tmp_3e = ((-0.33 * c__q_LH_HAA * c__q_LH_HFE * s__q_LH_KFE - 0.33 *
             c__q_LH_HAA * s__q_LH_HFE * c__q_LH_KFE) - tmp_3i) - 0.3735 *
    c__q_LH_HAA;
  tr->fr_trunk_XM_LH_foot[11] = tmp_3e;
  tmp_3f = tmp_3f * s__q_LH_KFE + tmp_1p * c__q_LH_KFE;
  tr->fr_trunk_XM_LH_foot[17] = tmp_3f;
  tr->fr_trunk_XM_LH_foot[23] = tmp_33;
  tr->fr_trunk_XM_LH_foot[29] = -s__q_LH_HAA;
  tr->fr_trunk_XM_LH_foot[35] = tmp_36;
  tmp_1p = tmp_3j - tmp_3k;
  tr->fr_trunk_XM_RH_foot[0] = tmp_1p;
  tmp_3c = c__q_RH_HFE * s__q_RH_KFE + tmp_3l;
  tr->fr_trunk_XM_RH_foot[12] = tmp_3c;
  tmp_3g = tmp_e * s__q_RH_KFE + tmp_1r;
  tr->fr_trunk_XM_RH_foot[1] = tmp_3g;
  tr->fr_trunk_XM_RH_foot[7] = c__q_RH_HAA;
  tmp_3h = tmp_3m - tmp_3n;
  tr->fr_trunk_XM_RH_foot[13] = tmp_3h;
  tmp_3i = tmp_h * s__q_RH_KFE - tmp_3o;
  tr->fr_trunk_XM_RH_foot[2] = tmp_3i;
  tr->fr_trunk_XM_RH_foot[8] = s__q_RH_HAA;
  tmp_3l = tmp_3p - tmp_3q;
  tr->fr_trunk_XM_RH_foot[14] = tmp_3l;
  tmp_3j = tmp_1t * s__q_RH_KFE + tmp_1u;
  tr->fr_trunk_XM_RH_foot[3] = tmp_3j;
  tmp_3k = (((-0.33 * s__q_RH_HFE * s__q_RH_KFE + 0.33 * c__q_RH_HFE *
              c__q_RH_KFE) + 0.35 * c__q_RH_HFE) - 0.207 * s__q_RH_HAA) + 0.08;
  tr->fr_trunk_XM_RH_foot[9] = tmp_3k;
  tmp_1r = tmp_3r - tmp_3s;
  tr->fr_trunk_XM_RH_foot[15] = tmp_1r;
  tr->fr_trunk_XM_RH_foot[21] = tmp_1p;
  tr->fr_trunk_XM_RH_foot[33] = tmp_3c;
  tmp_3t = (-0.3735 * c__q_RH_HAA * s__q_RH_HFE - tmp_3t) - 0.35 * c__q_RH_HAA;
  tmp_3m = (tmp_3t * c__q_RH_KFE + tmp_1y * s__q_RH_KFE) - 0.33 * c__q_RH_HAA;
  tr->fr_trunk_XM_RH_foot[4] = tmp_3m;
  tmp_3n = ((0.33 * s__q_RH_HAA * c__q_RH_HFE * s__q_RH_KFE + 0.33 * s__q_RH_HAA
             * s__q_RH_HFE * c__q_RH_KFE) + tmp_3u) + 0.3735 * s__q_RH_HAA;
  tr->fr_trunk_XM_RH_foot[10] = tmp_3n;
  tmp_1z = tmp_3t * s__q_RH_KFE + tmp_1z * c__q_RH_KFE;
  tr->fr_trunk_XM_RH_foot[16] = tmp_1z;
  tr->fr_trunk_XM_RH_foot[22] = tmp_3g;
  tr->fr_trunk_XM_RH_foot[28] = c__q_RH_HAA;
  tr->fr_trunk_XM_RH_foot[34] = tmp_3h;
  tmp_3t = (tmp_3v * c__q_RH_HFE + -0.3735 * s__q_RH_HAA * s__q_RH_HFE) - 0.35 *
    s__q_RH_HAA;
  tmp_3p = (tmp_3t * c__q_RH_KFE + tmp_24 * s__q_RH_KFE) - 0.33 * s__q_RH_HAA;
  tr->fr_trunk_XM_RH_foot[5] = tmp_3p;
  tmp_3q = ((-0.33 * c__q_RH_HAA * c__q_RH_HFE * s__q_RH_KFE - 0.33 *
             c__q_RH_HAA * s__q_RH_HFE * c__q_RH_KFE) - tmp_3w) - 0.3735 *
    c__q_RH_HAA;
  tr->fr_trunk_XM_RH_foot[11] = tmp_3q;
  tmp_3t = tmp_3t * s__q_RH_KFE + tmp_25 * c__q_RH_KFE;
  tr->fr_trunk_XM_RH_foot[17] = tmp_3t;
  tr->fr_trunk_XM_RH_foot[23] = tmp_3i;
  tr->fr_trunk_XM_RH_foot[29] = s__q_RH_HAA;
  tr->fr_trunk_XM_RH_foot[35] = tmp_3l;
  tr->fr_LF_lowerleg_XM_fr_trunk[0] = tmp_n;
  tr->fr_LF_lowerleg_XM_fr_trunk[6] = tmp_s;
  tr->fr_LF_lowerleg_XM_fr_trunk[12] = tmp_w;
  tr->fr_LF_lowerleg_XM_fr_trunk[1] = tmp_o;
  tr->fr_LF_lowerleg_XM_fr_trunk[7] = tmp_j;
  tr->fr_LF_lowerleg_XM_fr_trunk[13] = tmp_k;
  tr->fr_LF_lowerleg_XM_fr_trunk[8] = c__q_LF_HAA;
  tr->fr_LF_lowerleg_XM_fr_trunk[14] = -s__q_LF_HAA;
  tr->fr_LF_lowerleg_XM_fr_trunk[3] = tmp_3x;
  tr->fr_LF_lowerleg_XM_fr_trunk[9] = tmp_3y;
  tr->fr_LF_lowerleg_XM_fr_trunk[15] = tmp_3z;
  tr->fr_LF_lowerleg_XM_fr_trunk[21] = tmp_n;
  tr->fr_LF_lowerleg_XM_fr_trunk[27] = tmp_s;
  tr->fr_LF_lowerleg_XM_fr_trunk[33] = tmp_w;
  tr->fr_LF_lowerleg_XM_fr_trunk[4] = tmp_m;
  tr->fr_LF_lowerleg_XM_fr_trunk[10] = tmp_40;
  tr->fr_LF_lowerleg_XM_fr_trunk[16] = tmp_41;
  tr->fr_LF_lowerleg_XM_fr_trunk[22] = tmp_o;
  tr->fr_LF_lowerleg_XM_fr_trunk[28] = tmp_j;
  tr->fr_LF_lowerleg_XM_fr_trunk[34] = tmp_k;
  tmp_25 = (0.35 * c__q_LF_HFE - 0.207 * s__q_LF_HAA) + 0.08;
  tr->fr_LF_lowerleg_XM_fr_trunk[5] = tmp_25;
  tmp_n = 0.3735 * s__q_LF_HAA - tmp_2l;
  tr->fr_LF_lowerleg_XM_fr_trunk[11] = tmp_n;
  tmp_o = 0.3735 * c__q_LF_HAA - tmp_2n;
  tr->fr_LF_lowerleg_XM_fr_trunk[17] = tmp_o;
  tr->fr_LF_lowerleg_XM_fr_trunk[29] = c__q_LF_HAA;
  tr->fr_LF_lowerleg_XM_fr_trunk[35] = -s__q_LF_HAA;
  tr->fr_RF_lowerleg_XM_fr_trunk[0] = tmp_11;
  tr->fr_RF_lowerleg_XM_fr_trunk[6] = tmp_16;
  tr->fr_RF_lowerleg_XM_fr_trunk[12] = tmp_1b;
  tr->fr_RF_lowerleg_XM_fr_trunk[1] = tmp_12;
  tr->fr_RF_lowerleg_XM_fr_trunk[7] = tmp_17;
  tr->fr_RF_lowerleg_XM_fr_trunk[13] = tmp_y;
  tr->fr_RF_lowerleg_XM_fr_trunk[8] = c__q_RF_HAA;
  tr->fr_RF_lowerleg_XM_fr_trunk[14] = s__q_RF_HAA;
  tr->fr_RF_lowerleg_XM_fr_trunk[3] = tmp_42;
  tr->fr_RF_lowerleg_XM_fr_trunk[9] = tmp_43;
  tr->fr_RF_lowerleg_XM_fr_trunk[15] = tmp_44;
  tr->fr_RF_lowerleg_XM_fr_trunk[21] = tmp_11;
  tr->fr_RF_lowerleg_XM_fr_trunk[27] = tmp_16;
  tr->fr_RF_lowerleg_XM_fr_trunk[33] = tmp_1b;
  tr->fr_RF_lowerleg_XM_fr_trunk[4] = tmp_45;
  tr->fr_RF_lowerleg_XM_fr_trunk[10] = tmp_46;
  tr->fr_RF_lowerleg_XM_fr_trunk[16] = tmp_47;
  tr->fr_RF_lowerleg_XM_fr_trunk[22] = tmp_12;
  tr->fr_RF_lowerleg_XM_fr_trunk[28] = tmp_17;
  tr->fr_RF_lowerleg_XM_fr_trunk[34] = tmp_y;
  tmp_j = (0.35 * c__q_RF_HFE - 0.207 * s__q_RF_HAA) + 0.08;
  tr->fr_RF_lowerleg_XM_fr_trunk[5] = tmp_j;
  tmp_s = tmp_2z - 0.3735 * s__q_RF_HAA;
  tr->fr_RF_lowerleg_XM_fr_trunk[11] = tmp_s;
  tmp_k = 0.3735 * c__q_RF_HAA - tmp_31;
  tr->fr_RF_lowerleg_XM_fr_trunk[17] = tmp_k;
  tr->fr_RF_lowerleg_XM_fr_trunk[29] = c__q_RF_HAA;
  tr->fr_RF_lowerleg_XM_fr_trunk[35] = s__q_RF_HAA;
  tr->fr_LH_lowerleg_XM_fr_trunk[0] = tmp_1g;
  tr->fr_LH_lowerleg_XM_fr_trunk[6] = tmp_1m;
  tr->fr_LH_lowerleg_XM_fr_trunk[12] = tmp_1q;
  tr->fr_LH_lowerleg_XM_fr_trunk[1] = tmp_1h;
  tr->fr_LH_lowerleg_XM_fr_trunk[7] = tmp_1c;
  tr->fr_LH_lowerleg_XM_fr_trunk[13] = tmp_1d;
  tr->fr_LH_lowerleg_XM_fr_trunk[8] = c__q_LH_HAA;
  tr->fr_LH_lowerleg_XM_fr_trunk[14] = -s__q_LH_HAA;
  tr->fr_LH_lowerleg_XM_fr_trunk[3] = tmp_48;
  tr->fr_LH_lowerleg_XM_fr_trunk[9] = tmp_49;
  tr->fr_LH_lowerleg_XM_fr_trunk[15] = tmp_4a;
  tr->fr_LH_lowerleg_XM_fr_trunk[21] = tmp_1g;
  tr->fr_LH_lowerleg_XM_fr_trunk[27] = tmp_1m;
  tr->fr_LH_lowerleg_XM_fr_trunk[33] = tmp_1q;
  tr->fr_LH_lowerleg_XM_fr_trunk[4] = tmp_1f;
  tr->fr_LH_lowerleg_XM_fr_trunk[10] = tmp_1l;
  tr->fr_LH_lowerleg_XM_fr_trunk[16] = tmp_4b;
  tr->fr_LH_lowerleg_XM_fr_trunk[22] = tmp_1h;
  tr->fr_LH_lowerleg_XM_fr_trunk[28] = tmp_1c;
  tr->fr_LH_lowerleg_XM_fr_trunk[34] = tmp_1d;
  tmp_1l = (0.35 * c__q_LH_HFE - 0.207 * s__q_LH_HAA) + 0.08;
  tr->fr_LH_lowerleg_XM_fr_trunk[5] = tmp_1l;
  tmp_w = -0.35 * s__q_LH_HAA * s__q_LH_HFE - 0.3735 * s__q_LH_HAA;
  tr->fr_LH_lowerleg_XM_fr_trunk[11] = tmp_w;
  tmp_m = -0.35 * c__q_LH_HAA * s__q_LH_HFE - 0.3735 * c__q_LH_HAA;
  tr->fr_LH_lowerleg_XM_fr_trunk[17] = tmp_m;
  tr->fr_LH_lowerleg_XM_fr_trunk[29] = c__q_LH_HAA;
  tr->fr_LH_lowerleg_XM_fr_trunk[35] = -s__q_LH_HAA;
  tr->fr_RH_lowerleg_XM_fr_trunk[0] = tmp_1v;
  tr->fr_RH_lowerleg_XM_fr_trunk[6] = tmp_21;
  tr->fr_RH_lowerleg_XM_fr_trunk[12] = tmp_26;
  tr->fr_RH_lowerleg_XM_fr_trunk[1] = tmp_1w;
  tr->fr_RH_lowerleg_XM_fr_trunk[7] = tmp_22;
  tr->fr_RH_lowerleg_XM_fr_trunk[13] = tmp_1s;
  tr->fr_RH_lowerleg_XM_fr_trunk[8] = c__q_RH_HAA;
  tr->fr_RH_lowerleg_XM_fr_trunk[14] = s__q_RH_HAA;
  tr->fr_RH_lowerleg_XM_fr_trunk[3] = tmp_4c;
  tr->fr_RH_lowerleg_XM_fr_trunk[9] = tmp_4d;
  tr->fr_RH_lowerleg_XM_fr_trunk[15] = tmp_4e;
  tr->fr_RH_lowerleg_XM_fr_trunk[21] = tmp_1v;
  tr->fr_RH_lowerleg_XM_fr_trunk[27] = tmp_21;
  tr->fr_RH_lowerleg_XM_fr_trunk[33] = tmp_26;
  tr->fr_RH_lowerleg_XM_fr_trunk[4] = tmp_4f;
  tr->fr_RH_lowerleg_XM_fr_trunk[10] = tmp_20;
  tr->fr_RH_lowerleg_XM_fr_trunk[16] = tmp_4g;
  tr->fr_RH_lowerleg_XM_fr_trunk[22] = tmp_1w;
  tr->fr_RH_lowerleg_XM_fr_trunk[28] = tmp_22;
  tr->fr_RH_lowerleg_XM_fr_trunk[34] = tmp_1s;
  tmp_20 = (0.35 * c__q_RH_HFE - 0.207 * s__q_RH_HAA) + 0.08;
  tr->fr_RH_lowerleg_XM_fr_trunk[5] = tmp_20;
  tmp_3x = tmp_3u + 0.3735 * s__q_RH_HAA;
  tr->fr_RH_lowerleg_XM_fr_trunk[11] = tmp_3x;
  tmp_3y = -0.35 * c__q_RH_HAA * s__q_RH_HFE - 0.3735 * c__q_RH_HAA;
  tr->fr_RH_lowerleg_XM_fr_trunk[17] = tmp_3y;
  tr->fr_RH_lowerleg_XM_fr_trunk[29] = c__q_RH_HAA;
  tr->fr_RH_lowerleg_XM_fr_trunk[35] = s__q_RH_HAA;
  tr->LF_foot_XM_fr_trunk[0] = tmp_27;
  tr->LF_foot_XM_fr_trunk[6] = tmp_28;
  tr->LF_foot_XM_fr_trunk[12] = tmp_2c;
  tr->LF_foot_XM_fr_trunk[7] = c__q_LF_HAA;
  tr->LF_foot_XM_fr_trunk[13] = -s__q_LF_HAA;
  tr->LF_foot_XM_fr_trunk[2] = tmp_29;
  tr->LF_foot_XM_fr_trunk[8] = tmp_2b;
  tr->LF_foot_XM_fr_trunk[14] = tmp_2a;
  tr->LF_foot_XM_fr_trunk[3] = tmp_2e;
  tr->LF_foot_XM_fr_trunk[9] = tmp_2i;
  tr->LF_foot_XM_fr_trunk[15] = tmp_2h;
  tr->LF_foot_XM_fr_trunk[21] = tmp_27;
  tr->LF_foot_XM_fr_trunk[27] = tmp_28;
  tr->LF_foot_XM_fr_trunk[33] = tmp_2c;
  tr->LF_foot_XM_fr_trunk[4] = tmp_2f;
  tr->LF_foot_XM_fr_trunk[10] = tmp_2j;
  tr->LF_foot_XM_fr_trunk[16] = tmp_2m;
  tr->LF_foot_XM_fr_trunk[28] = c__q_LF_HAA;
  tr->LF_foot_XM_fr_trunk[34] = -s__q_LF_HAA;
  tr->LF_foot_XM_fr_trunk[5] = tmp_2d;
  tr->LF_foot_XM_fr_trunk[11] = tmp_r;
  tr->LF_foot_XM_fr_trunk[17] = tmp_2k;
  tr->LF_foot_XM_fr_trunk[23] = tmp_29;
  tr->LF_foot_XM_fr_trunk[29] = tmp_2b;
  tr->LF_foot_XM_fr_trunk[35] = tmp_2a;
  tr->RF_foot_XM_fr_trunk[0] = tmp_v;
  tr->RF_foot_XM_fr_trunk[6] = tmp_2o;
  tr->RF_foot_XM_fr_trunk[12] = tmp_x;
  tr->RF_foot_XM_fr_trunk[7] = c__q_RF_HAA;
  tr->RF_foot_XM_fr_trunk[13] = s__q_RF_HAA;
  tr->RF_foot_XM_fr_trunk[2] = tmp_2q;
  tr->RF_foot_XM_fr_trunk[8] = tmp_2p;
  tr->RF_foot_XM_fr_trunk[14] = tmp_2r;
  tr->RF_foot_XM_fr_trunk[3] = tmp_2s;
  tr->RF_foot_XM_fr_trunk[9] = tmp_2t;
  tr->RF_foot_XM_fr_trunk[15] = tmp_2w;
  tr->RF_foot_XM_fr_trunk[21] = tmp_v;
  tr->RF_foot_XM_fr_trunk[27] = tmp_2o;
  tr->RF_foot_XM_fr_trunk[33] = tmp_x;
  tr->RF_foot_XM_fr_trunk[4] = tmp_2u;
  tr->RF_foot_XM_fr_trunk[10] = tmp_10;
  tr->RF_foot_XM_fr_trunk[16] = tmp_2x;
  tr->RF_foot_XM_fr_trunk[28] = c__q_RF_HAA;
  tr->RF_foot_XM_fr_trunk[34] = s__q_RF_HAA;
  tr->RF_foot_XM_fr_trunk[5] = tmp_2v;
  tr->RF_foot_XM_fr_trunk[11] = tmp_15;
  tr->RF_foot_XM_fr_trunk[17] = tmp_2y;
  tr->RF_foot_XM_fr_trunk[23] = tmp_2q;
  tr->RF_foot_XM_fr_trunk[29] = tmp_2p;
  tr->RF_foot_XM_fr_trunk[35] = tmp_2r;
  tr->LH_foot_XM_fr_trunk[0] = tmp_1a;
  tr->LH_foot_XM_fr_trunk[6] = tmp_34;
  tr->LH_foot_XM_fr_trunk[12] = tmp_33;
  tr->LH_foot_XM_fr_trunk[7] = c__q_LH_HAA;
  tr->LH_foot_XM_fr_trunk[13] = -s__q_LH_HAA;
  tr->LH_foot_XM_fr_trunk[2] = tmp_30;
  tr->LH_foot_XM_fr_trunk[8] = tmp_32;
  tr->LH_foot_XM_fr_trunk[14] = tmp_36;
  tr->LH_foot_XM_fr_trunk[3] = tmp_37;
  tr->LH_foot_XM_fr_trunk[9] = tmp_3a;
  tr->LH_foot_XM_fr_trunk[15] = tmp_3d;
  tr->LH_foot_XM_fr_trunk[21] = tmp_1a;
  tr->LH_foot_XM_fr_trunk[27] = tmp_34;
  tr->LH_foot_XM_fr_trunk[33] = tmp_33;
  tr->LH_foot_XM_fr_trunk[4] = tmp_35;
  tr->LH_foot_XM_fr_trunk[10] = tmp_38;
  tr->LH_foot_XM_fr_trunk[16] = tmp_3e;
  tr->LH_foot_XM_fr_trunk[28] = c__q_LH_HAA;
  tr->LH_foot_XM_fr_trunk[34] = -s__q_LH_HAA;
  tr->LH_foot_XM_fr_trunk[5] = tmp_39;
  tr->LH_foot_XM_fr_trunk[11] = tmp_1k;
  tr->LH_foot_XM_fr_trunk[17] = tmp_3f;
  tr->LH_foot_XM_fr_trunk[23] = tmp_30;
  tr->LH_foot_XM_fr_trunk[29] = tmp_32;
  tr->LH_foot_XM_fr_trunk[35] = tmp_36;
  tr->RH_foot_XM_fr_trunk[0] = tmp_1p;
  tr->RH_foot_XM_fr_trunk[6] = tmp_3g;
  tr->RH_foot_XM_fr_trunk[12] = tmp_3i;
  tr->RH_foot_XM_fr_trunk[7] = c__q_RH_HAA;
  tr->RH_foot_XM_fr_trunk[13] = s__q_RH_HAA;
  tr->RH_foot_XM_fr_trunk[2] = tmp_3c;
  tr->RH_foot_XM_fr_trunk[8] = tmp_3h;
  tr->RH_foot_XM_fr_trunk[14] = tmp_3l;
  tr->RH_foot_XM_fr_trunk[3] = tmp_3j;
  tr->RH_foot_XM_fr_trunk[9] = tmp_3m;
  tr->RH_foot_XM_fr_trunk[15] = tmp_3p;
  tr->RH_foot_XM_fr_trunk[21] = tmp_1p;
  tr->RH_foot_XM_fr_trunk[27] = tmp_3g;
  tr->RH_foot_XM_fr_trunk[33] = tmp_3i;
  tr->RH_foot_XM_fr_trunk[4] = tmp_3k;
  tr->RH_foot_XM_fr_trunk[10] = tmp_3n;
  tr->RH_foot_XM_fr_trunk[16] = tmp_3q;
  tr->RH_foot_XM_fr_trunk[28] = c__q_RH_HAA;
  tr->RH_foot_XM_fr_trunk[34] = s__q_RH_HAA;
  tr->RH_foot_XM_fr_trunk[5] = tmp_1r;
  tr->RH_foot_XM_fr_trunk[11] = tmp_1z;
  tr->RH_foot_XM_fr_trunk[17] = tmp_3t;
  tr->RH_foot_XM_fr_trunk[23] = tmp_3c;
  tr->RH_foot_XM_fr_trunk[29] = tmp_3h;
  tr->RH_foot_XM_fr_trunk[35] = tmp_3l;
  tr->fr_trunk_XM_fr_LF_HFE[1] = -s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[13] = c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[2] = -c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[14] = -s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[3] = -0.207 * c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[15] = 0.08 - 0.207 * s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[4] = 0.3735 * c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[10] = 0.08 * c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[16] = 0.3735 * s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[22] = -s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[34] = c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[5] = -0.3735 * s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[11] = tmp_1;
  tr->fr_trunk_XM_fr_LF_HFE[17] = 0.3735 * c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[23] = -c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_HFE[35] = -s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_KFE[0] = -s__q_LF_HFE;
  tr->fr_trunk_XM_fr_LF_KFE[6] = -c__q_LF_HFE;
  tr->fr_trunk_XM_fr_LF_KFE[1] = tmp;
  tr->fr_trunk_XM_fr_LF_KFE[7] = tmp_0;
  tr->fr_trunk_XM_fr_LF_KFE[13] = c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_KFE[2] = tmp_2;
  tr->fr_trunk_XM_fr_LF_KFE[8] = tmp_3;
  tr->fr_trunk_XM_fr_LF_KFE[14] = -s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_KFE[3] = tmp_2g;
  tr->fr_trunk_XM_fr_LF_KFE[9] = tmp_l;
  tr->fr_trunk_XM_fr_LF_KFE[15] = tmp_25;
  tr->fr_trunk_XM_fr_LF_KFE[21] = -s__q_LF_HFE;
  tr->fr_trunk_XM_fr_LF_KFE[27] = -c__q_LF_HFE;
  tr->fr_trunk_XM_fr_LF_KFE[4] = tmp_q;
  tr->fr_trunk_XM_fr_LF_KFE[10] = tmp_p;
  tr->fr_trunk_XM_fr_LF_KFE[16] = tmp_n;
  tr->fr_trunk_XM_fr_LF_KFE[22] = tmp;
  tr->fr_trunk_XM_fr_LF_KFE[28] = tmp_0;
  tr->fr_trunk_XM_fr_LF_KFE[34] = c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_KFE[5] = tmp_u;
  tr->fr_trunk_XM_fr_LF_KFE[11] = tmp_t;
  tr->fr_trunk_XM_fr_LF_KFE[17] = tmp_o;
  tr->fr_trunk_XM_fr_LF_KFE[23] = tmp_2;
  tr->fr_trunk_XM_fr_LF_KFE[29] = tmp_3;
  tr->fr_trunk_XM_fr_LF_KFE[35] = -s__q_LF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[1] = s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[13] = c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[2] = -c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[14] = s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[3] = 0.207 * c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[15] = 0.08 - 0.207 * s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[4] = 0.3735 * c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[10] = 0.08 * c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[16] = -0.3735 * s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[22] = s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[34] = c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[5] = 0.3735 * s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[11] = tmp_6;
  tr->fr_trunk_XM_fr_RF_HFE[17] = 0.3735 * c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[23] = -c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_HFE[35] = s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_KFE[0] = -s__q_RF_HFE;
  tr->fr_trunk_XM_fr_RF_KFE[6] = -c__q_RF_HFE;
  tr->fr_trunk_XM_fr_RF_KFE[1] = tmp_4;
  tr->fr_trunk_XM_fr_RF_KFE[7] = tmp_5;
  tr->fr_trunk_XM_fr_RF_KFE[13] = c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_KFE[2] = tmp_7;
  tr->fr_trunk_XM_fr_RF_KFE[8] = tmp_8;
  tr->fr_trunk_XM_fr_RF_KFE[14] = s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_KFE[3] = tmp_z;
  tr->fr_trunk_XM_fr_RF_KFE[9] = tmp_4h;
  tr->fr_trunk_XM_fr_RF_KFE[15] = tmp_j;
  tr->fr_trunk_XM_fr_RF_KFE[21] = -s__q_RF_HFE;
  tr->fr_trunk_XM_fr_RF_KFE[27] = -c__q_RF_HFE;
  tr->fr_trunk_XM_fr_RF_KFE[4] = tmp_14;
  tr->fr_trunk_XM_fr_RF_KFE[10] = tmp_13;
  tr->fr_trunk_XM_fr_RF_KFE[16] = tmp_s;
  tr->fr_trunk_XM_fr_RF_KFE[22] = tmp_4;
  tr->fr_trunk_XM_fr_RF_KFE[28] = tmp_5;
  tr->fr_trunk_XM_fr_RF_KFE[34] = c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_KFE[5] = tmp_19;
  tr->fr_trunk_XM_fr_RF_KFE[11] = tmp_18;
  tr->fr_trunk_XM_fr_RF_KFE[17] = tmp_k;
  tr->fr_trunk_XM_fr_RF_KFE[23] = tmp_7;
  tr->fr_trunk_XM_fr_RF_KFE[29] = tmp_8;
  tr->fr_trunk_XM_fr_RF_KFE[35] = s__q_RF_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[1] = -s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[13] = c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[2] = -c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[14] = -s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[3] = -0.207 * c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[15] = 0.08 - 0.207 * s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[4] = -0.3735 * c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[10] = 0.08 * c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[16] = -0.3735 * s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[22] = -s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[34] = c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[5] = 0.3735 * s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[11] = tmp_b;
  tr->fr_trunk_XM_fr_LH_HFE[17] = -0.3735 * c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[23] = -c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_HFE[35] = -s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_KFE[0] = -s__q_LH_HFE;
  tr->fr_trunk_XM_fr_LH_KFE[6] = -c__q_LH_HFE;
  tr->fr_trunk_XM_fr_LH_KFE[1] = tmp_9;
  tr->fr_trunk_XM_fr_LH_KFE[7] = tmp_a;
  tr->fr_trunk_XM_fr_LH_KFE[13] = c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_KFE[2] = tmp_c;
  tr->fr_trunk_XM_fr_LH_KFE[8] = tmp_d;
  tr->fr_trunk_XM_fr_LH_KFE[14] = -s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_KFE[3] = tmp_3b;
  tr->fr_trunk_XM_fr_LH_KFE[9] = tmp_1e;
  tr->fr_trunk_XM_fr_LH_KFE[15] = tmp_1l;
  tr->fr_trunk_XM_fr_LH_KFE[21] = -s__q_LH_HFE;
  tr->fr_trunk_XM_fr_LH_KFE[27] = -c__q_LH_HFE;
  tr->fr_trunk_XM_fr_LH_KFE[4] = tmp_1j;
  tr->fr_trunk_XM_fr_LH_KFE[10] = tmp_1i;
  tr->fr_trunk_XM_fr_LH_KFE[16] = tmp_w;
  tr->fr_trunk_XM_fr_LH_KFE[22] = tmp_9;
  tr->fr_trunk_XM_fr_LH_KFE[28] = tmp_a;
  tr->fr_trunk_XM_fr_LH_KFE[34] = c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_KFE[5] = tmp_1o;
  tr->fr_trunk_XM_fr_LH_KFE[11] = tmp_1n;
  tr->fr_trunk_XM_fr_LH_KFE[17] = tmp_m;
  tr->fr_trunk_XM_fr_LH_KFE[23] = tmp_c;
  tr->fr_trunk_XM_fr_LH_KFE[29] = tmp_d;
  tr->fr_trunk_XM_fr_LH_KFE[35] = -s__q_LH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[1] = s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[13] = c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[2] = -c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[14] = s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[3] = 0.207 * c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[15] = 0.08 - 0.207 * s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[4] = -0.3735 * c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[10] = 0.08 * c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[16] = 0.3735 * s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[22] = s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[34] = c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[5] = -0.3735 * s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[11] = tmp_g;
  tr->fr_trunk_XM_fr_RH_HFE[17] = -0.3735 * c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[23] = -c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_HFE[35] = s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_KFE[0] = -s__q_RH_HFE;
  tr->fr_trunk_XM_fr_RH_KFE[6] = -c__q_RH_HFE;
  tr->fr_trunk_XM_fr_RH_KFE[1] = tmp_e;
  tr->fr_trunk_XM_fr_RH_KFE[7] = tmp_f;
  tr->fr_trunk_XM_fr_RH_KFE[13] = c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_KFE[2] = tmp_h;
  tr->fr_trunk_XM_fr_RH_KFE[8] = tmp_i;
  tr->fr_trunk_XM_fr_RH_KFE[14] = s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_KFE[3] = tmp_1t;
  tr->fr_trunk_XM_fr_RH_KFE[9] = tmp_4i;
  tr->fr_trunk_XM_fr_RH_KFE[15] = tmp_20;
  tr->fr_trunk_XM_fr_RH_KFE[21] = -s__q_RH_HFE;
  tr->fr_trunk_XM_fr_RH_KFE[27] = -c__q_RH_HFE;
  tr->fr_trunk_XM_fr_RH_KFE[4] = tmp_1y;
  tr->fr_trunk_XM_fr_RH_KFE[10] = tmp_1x;
  tr->fr_trunk_XM_fr_RH_KFE[16] = tmp_3x;
  tr->fr_trunk_XM_fr_RH_KFE[22] = tmp_e;
  tr->fr_trunk_XM_fr_RH_KFE[28] = tmp_f;
  tr->fr_trunk_XM_fr_RH_KFE[34] = c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_KFE[5] = tmp_24;
  tr->fr_trunk_XM_fr_RH_KFE[11] = tmp_23;
  tr->fr_trunk_XM_fr_RH_KFE[17] = tmp_3y;
  tr->fr_trunk_XM_fr_RH_KFE[23] = tmp_h;
  tr->fr_trunk_XM_fr_RH_KFE[29] = tmp_i;
  tr->fr_trunk_XM_fr_RH_KFE[35] = s__q_RH_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[6] = -s__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[12] = -c__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[7] = -c__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[13] = s__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[3] = -0.207 * c__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[9] = 0.3735 * c__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[15] = -0.3735 * s__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[27] = -s__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[33] = -c__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[4] = 0.207 * s__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[10] = -0.3735 * s__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[16] = -0.3735 * c__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[28] = -c__q_LF_HAA;
  tr->fr_LF_hipassembly_XM_fr_trunk[34] = s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[1] = -s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[7] = -c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[2] = -c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[8] = s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[3] = -0.207 * c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[9] = 0.207 * s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[4] = 0.3735 * c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[10] = -0.3735 * s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[22] = -s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[28] = -c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[5] = -0.3735 * s__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[11] = -0.3735 * c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[23] = -c__q_LF_HAA;
  tr->fr_trunk_XM_fr_LF_hipassembly[29] = s__q_LF_HAA;
  tr->fr_LF_upperleg_XM_fr_LF_hipassembly[0] = c__q_LF_HFE;
  tr->fr_LF_upperleg_XM_fr_LF_hipassembly[12] = s__q_LF_HFE;
  tr->fr_LF_upperleg_XM_fr_LF_hipassembly[1] = -s__q_LF_HFE;
  tr->fr_LF_upperleg_XM_fr_LF_hipassembly[13] = c__q_LF_HFE;
  tr->fr_LF_upperleg_XM_fr_LF_hipassembly[9] = -0.08 * s__q_LF_HFE;
  tr->fr_LF_upperleg_XM_fr_LF_hipassembly[21] = c__q_LF_HFE;
  tr->fr_LF_upperleg_XM_fr_LF_hipassembly[33] = s__q_LF_HFE;
  tr->fr_LF_upperleg_XM_fr_LF_hipassembly[10] = -0.08 * c__q_LF_HFE;
  tr->fr_LF_upperleg_XM_fr_LF_hipassembly[22] = -s__q_LF_HFE;
  tr->fr_LF_upperleg_XM_fr_LF_hipassembly[34] = c__q_LF_HFE;
  tr->fr_LF_hipassembly_XM_fr_LF_upperleg[0] = c__q_LF_HFE;
  tr->fr_LF_hipassembly_XM_fr_LF_upperleg[6] = -s__q_LF_HFE;
  tr->fr_LF_hipassembly_XM_fr_LF_upperleg[2] = s__q_LF_HFE;
  tr->fr_LF_hipassembly_XM_fr_LF_upperleg[8] = c__q_LF_HFE;
  tr->fr_LF_hipassembly_XM_fr_LF_upperleg[21] = c__q_LF_HFE;
  tr->fr_LF_hipassembly_XM_fr_LF_upperleg[27] = -s__q_LF_HFE;
  tr->fr_LF_hipassembly_XM_fr_LF_upperleg[4] = -0.08 * s__q_LF_HFE;
  tr->fr_LF_hipassembly_XM_fr_LF_upperleg[10] = -0.08 * c__q_LF_HFE;
  tr->fr_LF_hipassembly_XM_fr_LF_upperleg[23] = s__q_LF_HFE;
  tr->fr_LF_hipassembly_XM_fr_LF_upperleg[29] = c__q_LF_HFE;
  tr->fr_LF_lowerleg_XM_fr_LF_upperleg[0] = c__q_LF_KFE;
  tr->fr_LF_lowerleg_XM_fr_LF_upperleg[6] = s__q_LF_KFE;
  tr->fr_LF_lowerleg_XM_fr_LF_upperleg[1] = -s__q_LF_KFE;
  tr->fr_LF_lowerleg_XM_fr_LF_upperleg[7] = c__q_LF_KFE;
  tr->fr_LF_lowerleg_XM_fr_LF_upperleg[15] = 0.35 * s__q_LF_KFE;
  tr->fr_LF_lowerleg_XM_fr_LF_upperleg[21] = c__q_LF_KFE;
  tr->fr_LF_lowerleg_XM_fr_LF_upperleg[27] = s__q_LF_KFE;
  tr->fr_LF_lowerleg_XM_fr_LF_upperleg[16] = 0.35 * c__q_LF_KFE;
  tr->fr_LF_lowerleg_XM_fr_LF_upperleg[22] = -s__q_LF_KFE;
  tr->fr_LF_lowerleg_XM_fr_LF_upperleg[28] = c__q_LF_KFE;
  tr->fr_LF_upperleg_XM_fr_LF_lowerleg[0] = c__q_LF_KFE;
  tr->fr_LF_upperleg_XM_fr_LF_lowerleg[6] = -s__q_LF_KFE;
  tr->fr_LF_upperleg_XM_fr_LF_lowerleg[1] = s__q_LF_KFE;
  tr->fr_LF_upperleg_XM_fr_LF_lowerleg[7] = c__q_LF_KFE;
  tr->fr_LF_upperleg_XM_fr_LF_lowerleg[21] = c__q_LF_KFE;
  tr->fr_LF_upperleg_XM_fr_LF_lowerleg[27] = -s__q_LF_KFE;
  tr->fr_LF_upperleg_XM_fr_LF_lowerleg[22] = s__q_LF_KFE;
  tr->fr_LF_upperleg_XM_fr_LF_lowerleg[28] = c__q_LF_KFE;
  tr->fr_LF_upperleg_XM_fr_LF_lowerleg[5] = 0.35 * s__q_LF_KFE;
  tr->fr_LF_upperleg_XM_fr_LF_lowerleg[11] = 0.35 * c__q_LF_KFE;
  tr->fr_RF_hipassembly_XM_fr_trunk[6] = s__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[12] = -c__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[7] = c__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[13] = s__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[3] = 0.207 * c__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[9] = 0.3735 * c__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[15] = 0.3735 * s__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[27] = s__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[33] = -c__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[4] = -0.207 * s__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[10] = -0.3735 * s__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[16] = 0.3735 * c__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[28] = c__q_RF_HAA;
  tr->fr_RF_hipassembly_XM_fr_trunk[34] = s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[1] = s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[7] = c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[2] = -c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[8] = s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[3] = 0.207 * c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[9] = -0.207 * s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[4] = 0.3735 * c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[10] = -0.3735 * s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[22] = s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[28] = c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[5] = 0.3735 * s__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[11] = 0.3735 * c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[23] = -c__q_RF_HAA;
  tr->fr_trunk_XM_fr_RF_hipassembly[29] = s__q_RF_HAA;
  tr->fr_RF_upperleg_XM_fr_RF_hipassembly[0] = c__q_RF_HFE;
  tr->fr_RF_upperleg_XM_fr_RF_hipassembly[12] = -s__q_RF_HFE;
  tr->fr_RF_upperleg_XM_fr_RF_hipassembly[1] = -s__q_RF_HFE;
  tr->fr_RF_upperleg_XM_fr_RF_hipassembly[13] = -c__q_RF_HFE;
  tr->fr_RF_upperleg_XM_fr_RF_hipassembly[9] = 0.08 * s__q_RF_HFE;
  tr->fr_RF_upperleg_XM_fr_RF_hipassembly[21] = c__q_RF_HFE;
  tr->fr_RF_upperleg_XM_fr_RF_hipassembly[33] = -s__q_RF_HFE;
  tr->fr_RF_upperleg_XM_fr_RF_hipassembly[10] = 0.08 * c__q_RF_HFE;
  tr->fr_RF_upperleg_XM_fr_RF_hipassembly[22] = -s__q_RF_HFE;
  tr->fr_RF_upperleg_XM_fr_RF_hipassembly[34] = -c__q_RF_HFE;
  tr->fr_RF_hipassembly_XM_fr_RF_upperleg[0] = c__q_RF_HFE;
  tr->fr_RF_hipassembly_XM_fr_RF_upperleg[6] = -s__q_RF_HFE;
  tr->fr_RF_hipassembly_XM_fr_RF_upperleg[2] = -s__q_RF_HFE;
  tr->fr_RF_hipassembly_XM_fr_RF_upperleg[8] = -c__q_RF_HFE;
  tr->fr_RF_hipassembly_XM_fr_RF_upperleg[21] = c__q_RF_HFE;
  tr->fr_RF_hipassembly_XM_fr_RF_upperleg[27] = -s__q_RF_HFE;
  tr->fr_RF_hipassembly_XM_fr_RF_upperleg[4] = 0.08 * s__q_RF_HFE;
  tr->fr_RF_hipassembly_XM_fr_RF_upperleg[10] = 0.08 * c__q_RF_HFE;
  tr->fr_RF_hipassembly_XM_fr_RF_upperleg[23] = -s__q_RF_HFE;
  tr->fr_RF_hipassembly_XM_fr_RF_upperleg[29] = -c__q_RF_HFE;
  tr->fr_RF_lowerleg_XM_fr_RF_upperleg[0] = c__q_RF_KFE;
  tr->fr_RF_lowerleg_XM_fr_RF_upperleg[6] = s__q_RF_KFE;
  tr->fr_RF_lowerleg_XM_fr_RF_upperleg[1] = -s__q_RF_KFE;
  tr->fr_RF_lowerleg_XM_fr_RF_upperleg[7] = c__q_RF_KFE;
  tr->fr_RF_lowerleg_XM_fr_RF_upperleg[15] = 0.35 * s__q_RF_KFE;
  tr->fr_RF_lowerleg_XM_fr_RF_upperleg[21] = c__q_RF_KFE;
  tr->fr_RF_lowerleg_XM_fr_RF_upperleg[27] = s__q_RF_KFE;
  tr->fr_RF_lowerleg_XM_fr_RF_upperleg[16] = 0.35 * c__q_RF_KFE;
  tr->fr_RF_lowerleg_XM_fr_RF_upperleg[22] = -s__q_RF_KFE;
  tr->fr_RF_lowerleg_XM_fr_RF_upperleg[28] = c__q_RF_KFE;
  tr->fr_RF_upperleg_XM_fr_RF_lowerleg[0] = c__q_RF_KFE;
  tr->fr_RF_upperleg_XM_fr_RF_lowerleg[6] = -s__q_RF_KFE;
  tr->fr_RF_upperleg_XM_fr_RF_lowerleg[1] = s__q_RF_KFE;
  tr->fr_RF_upperleg_XM_fr_RF_lowerleg[7] = c__q_RF_KFE;
  tr->fr_RF_upperleg_XM_fr_RF_lowerleg[21] = c__q_RF_KFE;
  tr->fr_RF_upperleg_XM_fr_RF_lowerleg[27] = -s__q_RF_KFE;
  tr->fr_RF_upperleg_XM_fr_RF_lowerleg[22] = s__q_RF_KFE;
  tr->fr_RF_upperleg_XM_fr_RF_lowerleg[28] = c__q_RF_KFE;
  tr->fr_RF_upperleg_XM_fr_RF_lowerleg[5] = 0.35 * s__q_RF_KFE;
  tr->fr_RF_upperleg_XM_fr_RF_lowerleg[11] = 0.35 * c__q_RF_KFE;
  tr->fr_LH_hipassembly_XM_fr_trunk[6] = -s__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[12] = -c__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[7] = -c__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[13] = s__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[3] = -0.207 * c__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[9] = -0.3735 * c__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[15] = 0.3735 * s__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[27] = -s__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[33] = -c__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[4] = 0.207 * s__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[10] = 0.3735 * s__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[16] = 0.3735 * c__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[28] = -c__q_LH_HAA;
  tr->fr_LH_hipassembly_XM_fr_trunk[34] = s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[1] = -s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[7] = -c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[2] = -c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[8] = s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[3] = -0.207 * c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[9] = 0.207 * s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[4] = -0.3735 * c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[10] = 0.3735 * s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[22] = -s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[28] = -c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[5] = 0.3735 * s__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[11] = 0.3735 * c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[23] = -c__q_LH_HAA;
  tr->fr_trunk_XM_fr_LH_hipassembly[29] = s__q_LH_HAA;
  tr->fr_LH_upperleg_XM_fr_LH_hipassembly[0] = c__q_LH_HFE;
  tr->fr_LH_upperleg_XM_fr_LH_hipassembly[12] = s__q_LH_HFE;
  tr->fr_LH_upperleg_XM_fr_LH_hipassembly[1] = -s__q_LH_HFE;
  tr->fr_LH_upperleg_XM_fr_LH_hipassembly[13] = c__q_LH_HFE;
  tr->fr_LH_upperleg_XM_fr_LH_hipassembly[9] = -0.08 * s__q_LH_HFE;
  tr->fr_LH_upperleg_XM_fr_LH_hipassembly[21] = c__q_LH_HFE;
  tr->fr_LH_upperleg_XM_fr_LH_hipassembly[33] = s__q_LH_HFE;
  tr->fr_LH_upperleg_XM_fr_LH_hipassembly[10] = -0.08 * c__q_LH_HFE;
  tr->fr_LH_upperleg_XM_fr_LH_hipassembly[22] = -s__q_LH_HFE;
  tr->fr_LH_upperleg_XM_fr_LH_hipassembly[34] = c__q_LH_HFE;
  tr->fr_LH_hipassembly_XM_fr_LH_upperleg[0] = c__q_LH_HFE;
  tr->fr_LH_hipassembly_XM_fr_LH_upperleg[6] = -s__q_LH_HFE;
  tr->fr_LH_hipassembly_XM_fr_LH_upperleg[2] = s__q_LH_HFE;
  tr->fr_LH_hipassembly_XM_fr_LH_upperleg[8] = c__q_LH_HFE;
  tr->fr_LH_hipassembly_XM_fr_LH_upperleg[21] = c__q_LH_HFE;
  tr->fr_LH_hipassembly_XM_fr_LH_upperleg[27] = -s__q_LH_HFE;
  tr->fr_LH_hipassembly_XM_fr_LH_upperleg[4] = -0.08 * s__q_LH_HFE;
  tr->fr_LH_hipassembly_XM_fr_LH_upperleg[10] = -0.08 * c__q_LH_HFE;
  tr->fr_LH_hipassembly_XM_fr_LH_upperleg[23] = s__q_LH_HFE;
  tr->fr_LH_hipassembly_XM_fr_LH_upperleg[29] = c__q_LH_HFE;
  tr->fr_LH_lowerleg_XM_fr_LH_upperleg[0] = c__q_LH_KFE;
  tr->fr_LH_lowerleg_XM_fr_LH_upperleg[6] = s__q_LH_KFE;
  tr->fr_LH_lowerleg_XM_fr_LH_upperleg[1] = -s__q_LH_KFE;
  tr->fr_LH_lowerleg_XM_fr_LH_upperleg[7] = c__q_LH_KFE;
  tr->fr_LH_lowerleg_XM_fr_LH_upperleg[15] = 0.35 * s__q_LH_KFE;
  tr->fr_LH_lowerleg_XM_fr_LH_upperleg[21] = c__q_LH_KFE;
  tr->fr_LH_lowerleg_XM_fr_LH_upperleg[27] = s__q_LH_KFE;
  tr->fr_LH_lowerleg_XM_fr_LH_upperleg[16] = 0.35 * c__q_LH_KFE;
  tr->fr_LH_lowerleg_XM_fr_LH_upperleg[22] = -s__q_LH_KFE;
  tr->fr_LH_lowerleg_XM_fr_LH_upperleg[28] = c__q_LH_KFE;
  tr->fr_LH_upperleg_XM_fr_LH_lowerleg[0] = c__q_LH_KFE;
  tr->fr_LH_upperleg_XM_fr_LH_lowerleg[6] = -s__q_LH_KFE;
  tr->fr_LH_upperleg_XM_fr_LH_lowerleg[1] = s__q_LH_KFE;
  tr->fr_LH_upperleg_XM_fr_LH_lowerleg[7] = c__q_LH_KFE;
  tr->fr_LH_upperleg_XM_fr_LH_lowerleg[21] = c__q_LH_KFE;
  tr->fr_LH_upperleg_XM_fr_LH_lowerleg[27] = -s__q_LH_KFE;
  tr->fr_LH_upperleg_XM_fr_LH_lowerleg[22] = s__q_LH_KFE;
  tr->fr_LH_upperleg_XM_fr_LH_lowerleg[28] = c__q_LH_KFE;
  tr->fr_LH_upperleg_XM_fr_LH_lowerleg[5] = 0.35 * s__q_LH_KFE;
  tr->fr_LH_upperleg_XM_fr_LH_lowerleg[11] = 0.35 * c__q_LH_KFE;
  tr->fr_RH_hipassembly_XM_fr_trunk[6] = s__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[12] = -c__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[7] = c__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[13] = s__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[3] = 0.207 * c__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[9] = -0.3735 * c__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[15] = -0.3735 * s__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[27] = s__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[33] = -c__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[4] = -0.207 * s__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[10] = 0.3735 * s__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[16] = -0.3735 * c__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[28] = c__q_RH_HAA;
  tr->fr_RH_hipassembly_XM_fr_trunk[34] = s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[1] = s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[7] = c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[2] = -c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[8] = s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[3] = 0.207 * c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[9] = -0.207 * s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[4] = -0.3735 * c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[10] = 0.3735 * s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[22] = s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[28] = c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[5] = -0.3735 * s__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[11] = -0.3735 * c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[23] = -c__q_RH_HAA;
  tr->fr_trunk_XM_fr_RH_hipassembly[29] = s__q_RH_HAA;
  tr->fr_RH_upperleg_XM_fr_RH_hipassembly[0] = c__q_RH_HFE;
  tr->fr_RH_upperleg_XM_fr_RH_hipassembly[12] = -s__q_RH_HFE;
  tr->fr_RH_upperleg_XM_fr_RH_hipassembly[1] = -s__q_RH_HFE;
  tr->fr_RH_upperleg_XM_fr_RH_hipassembly[13] = -c__q_RH_HFE;
  tr->fr_RH_upperleg_XM_fr_RH_hipassembly[9] = 0.08 * s__q_RH_HFE;
  tr->fr_RH_upperleg_XM_fr_RH_hipassembly[21] = c__q_RH_HFE;
  tr->fr_RH_upperleg_XM_fr_RH_hipassembly[33] = -s__q_RH_HFE;
  tr->fr_RH_upperleg_XM_fr_RH_hipassembly[10] = 0.08 * c__q_RH_HFE;
  tr->fr_RH_upperleg_XM_fr_RH_hipassembly[22] = -s__q_RH_HFE;
  tr->fr_RH_upperleg_XM_fr_RH_hipassembly[34] = -c__q_RH_HFE;
  tr->fr_RH_hipassembly_XM_fr_RH_upperleg[0] = c__q_RH_HFE;
  tr->fr_RH_hipassembly_XM_fr_RH_upperleg[6] = -s__q_RH_HFE;
  tr->fr_RH_hipassembly_XM_fr_RH_upperleg[2] = -s__q_RH_HFE;
  tr->fr_RH_hipassembly_XM_fr_RH_upperleg[8] = -c__q_RH_HFE;
  tr->fr_RH_hipassembly_XM_fr_RH_upperleg[21] = c__q_RH_HFE;
  tr->fr_RH_hipassembly_XM_fr_RH_upperleg[27] = -s__q_RH_HFE;
  tr->fr_RH_hipassembly_XM_fr_RH_upperleg[4] = 0.08 * s__q_RH_HFE;
  tr->fr_RH_hipassembly_XM_fr_RH_upperleg[10] = 0.08 * c__q_RH_HFE;
  tr->fr_RH_hipassembly_XM_fr_RH_upperleg[23] = -s__q_RH_HFE;
  tr->fr_RH_hipassembly_XM_fr_RH_upperleg[29] = -c__q_RH_HFE;
  tr->fr_RH_lowerleg_XM_fr_RH_upperleg[0] = c__q_RH_KFE;
  tr->fr_RH_lowerleg_XM_fr_RH_upperleg[6] = s__q_RH_KFE;
  tr->fr_RH_lowerleg_XM_fr_RH_upperleg[1] = -s__q_RH_KFE;
  tr->fr_RH_lowerleg_XM_fr_RH_upperleg[7] = c__q_RH_KFE;
  tr->fr_RH_lowerleg_XM_fr_RH_upperleg[15] = 0.35 * s__q_RH_KFE;
  tr->fr_RH_lowerleg_XM_fr_RH_upperleg[21] = c__q_RH_KFE;
  tr->fr_RH_lowerleg_XM_fr_RH_upperleg[27] = s__q_RH_KFE;
  tr->fr_RH_lowerleg_XM_fr_RH_upperleg[16] = 0.35 * c__q_RH_KFE;
  tr->fr_RH_lowerleg_XM_fr_RH_upperleg[22] = -s__q_RH_KFE;
  tr->fr_RH_lowerleg_XM_fr_RH_upperleg[28] = c__q_RH_KFE;
  tr->fr_RH_upperleg_XM_fr_RH_lowerleg[0] = c__q_RH_KFE;
  tr->fr_RH_upperleg_XM_fr_RH_lowerleg[6] = -s__q_RH_KFE;
  tr->fr_RH_upperleg_XM_fr_RH_lowerleg[1] = s__q_RH_KFE;
  tr->fr_RH_upperleg_XM_fr_RH_lowerleg[7] = c__q_RH_KFE;
  tr->fr_RH_upperleg_XM_fr_RH_lowerleg[21] = c__q_RH_KFE;
  tr->fr_RH_upperleg_XM_fr_RH_lowerleg[27] = -s__q_RH_KFE;
  tr->fr_RH_upperleg_XM_fr_RH_lowerleg[22] = s__q_RH_KFE;
  tr->fr_RH_upperleg_XM_fr_RH_lowerleg[28] = c__q_RH_KFE;
  tr->fr_RH_upperleg_XM_fr_RH_lowerleg[5] = 0.35 * s__q_RH_KFE;
  tr->fr_RH_upperleg_XM_fr_RH_lowerleg[11] = 0.35 * c__q_RH_KFE;
}

// Function for MATLAB Function: '<Root>/inv_dyn_hyq'
void inv_dyn_hyqModelClass::compositeInertia(const struct_ncOb8I1GFSpAkXAbSp5q3C
  *b_ip, const real_T xf_fr_LF_hipassembly_XM_fr_trun[36], const real_T
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
  xf_fr_RH_lowerleg_XM_fr_RH_uppe[36], srEIOET7RNkIl0Bikh9jqzB *ci)
{
  real_T xf_fr_RH_lowerleg_XM_fr_RH_up_0[36];
  int32_T i;
  int32_T i_0;
  int32_T i_1;
  real_T tmp;
  real_T xf_fr_LH_lowerleg_XM_fr_LH_up_0[36];
  int32_T i_2;
  int32_T xf_fr_RH_lowerleg_XM_fr_RH_up_1;
  memcpy(&ci->LF_lowerleg_Ic[0], &b_ip->lf_LF_lowerleg.tensor6D[0], 36U * sizeof
         (real_T));
  memcpy(&ci->RF_lowerleg_Ic[0], &b_ip->lf_RF_lowerleg.tensor6D[0], 36U * sizeof
         (real_T));
  memcpy(&ci->LH_lowerleg_Ic[0], &b_ip->lf_LH_lowerleg.tensor6D[0], 36U * sizeof
         (real_T));
  memcpy(&ci->RH_lowerleg_Ic[0], &b_ip->lf_RH_lowerleg.tensor6D[0], 36U * sizeof
         (real_T));
  for (i = 0; i < 6; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] =
          xf_fr_RH_lowerleg_XM_fr_RH_uppe[6 * i + i_1] *
          b_ip->lf_RH_lowerleg.tensor6D[6 * i_0 + i_1] +
          xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_0 + i];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_1 + i] *
          xf_fr_RH_lowerleg_XM_fr_RH_uppe[6 * i_0 + i_1];
      }

      ci->RH_upperleg_Ic[i + 6 * i_0] = b_ip->lf_RH_upperleg.tensor6D[6 * i_0 +
        i] + tmp;
    }
  }

  for (i = 0; i < 6; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] =
          xf_fr_RH_upperleg_XM_fr_RH_hipa[6 * i + i_1] * ci->RH_upperleg_Ic[6 *
          i_0 + i_1] + xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_0 + i];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_1 + i] *
          xf_fr_RH_upperleg_XM_fr_RH_hipa[6 * i_0 + i_1];
      }

      ci->RH_hipassembly_Ic[i + 6 * i_0] = b_ip->lf_RH_hipassembly.tensor6D[6 *
        i_0 + i] + tmp;
    }
  }

  for (i = 0; i < 6; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] =
          xf_fr_RH_hipassembly_XM_fr_trun[6 * i + i_1] * ci->RH_hipassembly_Ic[6
          * i_0 + i_1] + xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_0 + i];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_1 + i] *
          xf_fr_RH_hipassembly_XM_fr_trun[6 * i_0 + i_1];
      }

      i_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = 6 * i_0 + i;
      ci->trunk_Ic[i_1] = b_ip->
        lf_trunk.tensor6D[xf_fr_RH_lowerleg_XM_fr_RH_up_1] + tmp;
      xf_fr_LH_lowerleg_XM_fr_LH_up_0[i_1] = 0.0;
      for (i_2 = 0; i_2 < 6; i_2++) {
        xf_fr_LH_lowerleg_XM_fr_LH_up_0[i_1] = xf_fr_LH_lowerleg_XM_fr_LH_uppe[6
          * i + i_2] * b_ip->lf_LH_lowerleg.tensor6D[6 * i_0 + i_2] +
          xf_fr_LH_lowerleg_XM_fr_LH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_LH_lowerleg_XM_fr_LH_up_0[6 * i_1 + i] *
          xf_fr_LH_lowerleg_XM_fr_LH_uppe[6 * i_0 + i_1];
      }

      ci->LH_upperleg_Ic[i + 6 * i_0] = b_ip->lf_LH_upperleg.tensor6D[6 * i_0 +
        i] + tmp;
    }
  }

  for (i = 0; i < 6; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] =
          xf_fr_LH_upperleg_XM_fr_LH_hipa[6 * i + i_1] * ci->LH_upperleg_Ic[6 *
          i_0 + i_1] + xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_0 + i];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_1 + i] *
          xf_fr_LH_upperleg_XM_fr_LH_hipa[6 * i_0 + i_1];
      }

      ci->LH_hipassembly_Ic[i + 6 * i_0] = b_ip->lf_LH_hipassembly.tensor6D[6 *
        i_0 + i] + tmp;
    }
  }

  for (i = 0; i < 6; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] =
          xf_fr_LH_hipassembly_XM_fr_trun[6 * i + i_1] * ci->LH_hipassembly_Ic[6
          * i_0 + i_1] + xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_0 + i];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_1 + i] *
          xf_fr_LH_hipassembly_XM_fr_trun[6 * i_0 + i_1];
      }

      i_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = 6 * i_0 + i;
      ci->trunk_Ic[i_1] = ci->trunk_Ic[xf_fr_RH_lowerleg_XM_fr_RH_up_1] + tmp;
      xf_fr_LH_lowerleg_XM_fr_LH_up_0[i_1] = 0.0;
      for (i_2 = 0; i_2 < 6; i_2++) {
        xf_fr_LH_lowerleg_XM_fr_LH_up_0[i_1] = xf_fr_RF_lowerleg_XM_fr_RF_uppe[6
          * i + i_2] * b_ip->lf_RF_lowerleg.tensor6D[6 * i_0 + i_2] +
          xf_fr_LH_lowerleg_XM_fr_LH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_LH_lowerleg_XM_fr_LH_up_0[6 * i_1 + i] *
          xf_fr_RF_lowerleg_XM_fr_RF_uppe[6 * i_0 + i_1];
      }

      ci->RF_upperleg_Ic[i + 6 * i_0] = b_ip->lf_RF_upperleg.tensor6D[6 * i_0 +
        i] + tmp;
    }
  }

  for (i = 0; i < 6; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] =
          xf_fr_RF_upperleg_XM_fr_RF_hipa[6 * i + i_1] * ci->RF_upperleg_Ic[6 *
          i_0 + i_1] + xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_0 + i];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_1 + i] *
          xf_fr_RF_upperleg_XM_fr_RF_hipa[6 * i_0 + i_1];
      }

      ci->RF_hipassembly_Ic[i + 6 * i_0] = b_ip->lf_RF_hipassembly.tensor6D[6 *
        i_0 + i] + tmp;
    }
  }

  for (i = 0; i < 6; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] =
          xf_fr_RF_hipassembly_XM_fr_trun[6 * i + i_1] * ci->RF_hipassembly_Ic[6
          * i_0 + i_1] + xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_0 + i];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_1 + i] *
          xf_fr_RF_hipassembly_XM_fr_trun[6 * i_0 + i_1];
      }

      i_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = 6 * i_0 + i;
      ci->trunk_Ic[i_1] = ci->trunk_Ic[xf_fr_RH_lowerleg_XM_fr_RH_up_1] + tmp;
      xf_fr_LH_lowerleg_XM_fr_LH_up_0[i_1] = 0.0;
      for (i_2 = 0; i_2 < 6; i_2++) {
        xf_fr_LH_lowerleg_XM_fr_LH_up_0[i_1] = xf_fr_LF_lowerleg_XM_fr_LF_uppe[6
          * i + i_2] * b_ip->lf_LF_lowerleg.tensor6D[6 * i_0 + i_2] +
          xf_fr_LH_lowerleg_XM_fr_LH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_LH_lowerleg_XM_fr_LH_up_0[6 * i_1 + i] *
          xf_fr_LF_lowerleg_XM_fr_LF_uppe[6 * i_0 + i_1];
      }

      ci->LF_upperleg_Ic[i + 6 * i_0] = b_ip->lf_LF_upperleg.tensor6D[6 * i_0 +
        i] + tmp;
    }
  }

  for (i = 0; i < 6; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] =
          xf_fr_LF_upperleg_XM_fr_LF_hipa[6 * i + i_1] * ci->LF_upperleg_Ic[6 *
          i_0 + i_1] + xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_0 + i];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_1 + i] *
          xf_fr_LF_upperleg_XM_fr_LF_hipa[6 * i_0 + i_1];
      }

      ci->LF_hipassembly_Ic[i + 6 * i_0] = b_ip->lf_LF_hipassembly.tensor6D[6 *
        i_0 + i] + tmp;
    }
  }

  for (i = 0; i < 6; i++) {
    for (i_0 = 0; i_0 < 6; i_0++) {
      xf_fr_RH_lowerleg_XM_fr_RH_up_1 = i + 6 * i_0;
      xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        xf_fr_RH_lowerleg_XM_fr_RH_up_0[xf_fr_RH_lowerleg_XM_fr_RH_up_1] =
          xf_fr_LF_hipassembly_XM_fr_trun[6 * i + i_1] * ci->LF_hipassembly_Ic[6
          * i_0 + i_1] + xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_0 + i];
      }
    }

    for (i_0 = 0; i_0 < 6; i_0++) {
      tmp = 0.0;
      for (i_1 = 0; i_1 < 6; i_1++) {
        tmp += xf_fr_RH_lowerleg_XM_fr_RH_up_0[6 * i_1 + i] *
          xf_fr_LF_hipassembly_XM_fr_trun[6 * i_0 + i_1];
      }

      ci->trunk_Ic[i + 6 * i_0] += tmp;
    }
  }
}

// Function for MATLAB Function: '<Root>/inv_dyn_hyq'
void inv_dyn_hyqModelClass::invNxN(const real_T x[36], real_T y[36])
{
  int8_T p[6];
  real_T A[36];
  int8_T ipiv[6];
  int32_T b_j;
  int32_T ix;
  real_T smax;
  real_T s;
  int32_T b_k;
  int32_T iy;
  int32_T c_ix;
  int32_T d;
  int32_T ijA;
  int32_T pipk;
  for (b_k = 0; b_k < 36; b_k++) {
    y[b_k] = 0.0;
    A[b_k] = x[b_k];
  }

  for (b_k = 0; b_k < 6; b_k++) {
    ipiv[b_k] = (int8_T)(1 + b_k);
  }

  for (b_j = 0; b_j < 5; b_j++) {
    pipk = b_j * 7;
    iy = 0;
    ix = pipk;
    smax = std::abs(A[pipk]);
    for (b_k = 2; b_k <= 6 - b_j; b_k++) {
      ix++;
      s = std::abs(A[ix]);
      if (s > smax) {
        iy = b_k - 1;
        smax = s;
      }
    }

    if (A[pipk + iy] != 0.0) {
      if (iy != 0) {
        iy += b_j;
        ipiv[b_j] = (int8_T)(iy + 1);
        ix = b_j;
        for (b_k = 0; b_k < 6; b_k++) {
          smax = A[ix];
          A[ix] = A[iy];
          A[iy] = smax;
          ix += 6;
          iy += 6;
        }
      }

      iy = (pipk - b_j) + 6;
      for (ix = pipk + 1; ix < iy; ix++) {
        A[ix] /= A[pipk];
      }
    }

    iy = pipk;
    ix = pipk + 6;
    for (b_k = 1; b_k <= 5 - b_j; b_k++) {
      smax = A[ix];
      if (A[ix] != 0.0) {
        c_ix = pipk + 1;
        d = (iy - b_j) + 12;
        for (ijA = 7 + iy; ijA < d; ijA++) {
          A[ijA] += A[c_ix] * -smax;
          c_ix++;
        }
      }

      ix += 6;
      iy += 6;
    }
  }

  for (b_k = 0; b_k < 6; b_k++) {
    p[b_k] = (int8_T)(1 + b_k);
  }

  for (b_j = 0; b_j < 5; b_j++) {
    if (ipiv[b_j] > 1 + b_j) {
      b_k = ipiv[b_j] - 1;
      pipk = p[b_k];
      p[b_k] = p[b_j];
      p[b_j] = (int8_T)pipk;
    }
  }

  for (b_j = 0; b_j < 6; b_j++) {
    b_k = p[b_j] - 1;
    y[b_j + 6 * b_k] = 1.0;
    for (iy = b_j; iy + 1 < 7; iy++) {
      if (y[6 * b_k + iy] != 0.0) {
        for (ix = iy + 1; ix + 1 < 7; ix++) {
          y[ix + 6 * b_k] -= y[6 * b_k + iy] * A[6 * iy + ix];
        }
      }
    }
  }

  for (b_j = 0; b_j < 6; b_j++) {
    pipk = 6 * b_j;
    for (iy = 5; iy >= 0; iy--) {
      ix = 6 * iy;
      b_k = iy + pipk;
      if (y[b_k] != 0.0) {
        y[b_k] = y[iy + pipk] / A[iy + ix];
        for (b_k = 0; b_k < iy; b_k++) {
          c_ix = b_k + pipk;
          y[c_ix] -= y[iy + pipk] * A[b_k + ix];
        }
      }
    }
  }
}

// Function for MATLAB Function: '<Root>/inv_dyn_hyq'
void inv_dyn_hyqModelClass::inv(const real_T x[36], real_T y[36])
{
  invNxN(x, y);
}

// Model step function
void inv_dyn_hyqModelClass::step()
{
  real_T LF_hipassembly_v[6];
  real_T LF_hipassembly_a[6];
  real_T vcross[36];
  real_T LF_upperleg_v[6];
  real_T LF_upperleg_a[6];
  real_T LF_lowerleg_v[6];
  real_T LF_lowerleg_a[6];
  real_T LF_lowerleg_f[6];
  real_T RF_hipassembly_v[6];
  real_T RF_hipassembly_a[6];
  real_T RF_upperleg_v[6];
  real_T RF_upperleg_a[6];
  real_T RF_lowerleg_f[6];
  real_T LH_hipassembly_v[6];
  real_T LH_hipassembly_a[6];
  real_T LH_upperleg_v[6];
  real_T LH_upperleg_a[6];
  real_T LH_upperleg_f[6];
  real_T LH_lowerleg_f[6];
  real_T RH_hipassembly_v[6];
  real_T RH_hipassembly_a[6];
  real_T RH_hipassembly_f[6];
  real_T RH_upperleg_v[6];
  real_T RH_upperleg_a[6];
  real_T RH_lowerleg_f[6];
  real_T y[36];
  real_T b_y[36];
  real_T c_y[36];
  real_T d_y[36];
  real_T e_y[36];
  real_T f_y[36];
  real_T g_y[36];
  real_T h_y[36];
  srEIOET7RNkIl0Bikh9jqzB expl_temp;
  int32_T i;
  real_T vcross_0[36];
  int32_T i_0;
  real_T tmp;
  real_T vcross_1[36];
  real_T tmp_0[6];
  real_T tmp_1[6];
  real_T h_y_0[6];
  int32_T i_1;
  int32_T y_tmp;

  // MATLAB Function: '<Root>/inv_dyn_hyq' incorporates:
  //   Inport: '<Root>/q'
  //   Inport: '<Root>/qd'
  //   Inport: '<Root>/qdd'
  //   Inport: '<Root>/trunk_v'
  //   Outport: '<Root>/tau'

  rtDW.b_xm = rtConstP.inv_dyn_hyq_xm;
  updateMotionTransforms(&rtDW.b_xm, rtU.q);
  for (i = 0; i < 6; i++) {
    LF_hipassembly_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      LF_hipassembly_v[i] += rtDW.b_xm.fr_LF_hipassembly_XM_fr_trunk[6 * i_1 + i]
        * rtU.trunk_v[i_1];
    }
  }

  LF_hipassembly_v[2] += rtU.qd[0];
  vcross[0] = 0.0;
  vcross[6] = -LF_hipassembly_v[2];
  vcross[12] = LF_hipassembly_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = LF_hipassembly_v[2];
  vcross[7] = 0.0;
  vcross[13] = -LF_hipassembly_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -LF_hipassembly_v[1];
  vcross[8] = LF_hipassembly_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -LF_hipassembly_v[5];
  vcross[15] = LF_hipassembly_v[4];
  vcross[21] = 0.0;
  vcross[27] = -LF_hipassembly_v[2];
  vcross[33] = LF_hipassembly_v[1];
  vcross[4] = LF_hipassembly_v[5];
  vcross[10] = 0.0;
  vcross[16] = -LF_hipassembly_v[3];
  vcross[22] = LF_hipassembly_v[2];
  vcross[28] = 0.0;
  vcross[34] = -LF_hipassembly_v[0];
  vcross[5] = -LF_hipassembly_v[4];
  vcross[11] = LF_hipassembly_v[3];
  vcross[17] = 0.0;
  vcross[23] = -LF_hipassembly_v[1];
  vcross[29] = LF_hipassembly_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    LF_hipassembly_a[i] = vcross[12 + i] * rtU.qd[0];
  }

  LF_hipassembly_a[2] += rtU.qdd[0];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  for (i = 0; i < 6; i++) {
    LF_upperleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      y[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        y[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_LF_hipassembly.tensor6D[6 * i_1 + i_0] + y
          [6 * i_1 + i];
      }

      LF_upperleg_v[i] += rtDW.b_xm.fr_LF_upperleg_XM_fr_LF_hipassembly[6 * i_1
        + i] * LF_hipassembly_v[i_1];
    }
  }

  LF_upperleg_v[2] += rtU.qd[1];
  vcross[0] = 0.0;
  vcross[6] = -LF_upperleg_v[2];
  vcross[12] = LF_upperleg_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = LF_upperleg_v[2];
  vcross[7] = 0.0;
  vcross[13] = -LF_upperleg_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -LF_upperleg_v[1];
  vcross[8] = LF_upperleg_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -LF_upperleg_v[5];
  vcross[15] = LF_upperleg_v[4];
  vcross[21] = 0.0;
  vcross[27] = -LF_upperleg_v[2];
  vcross[33] = LF_upperleg_v[1];
  vcross[4] = LF_upperleg_v[5];
  vcross[10] = 0.0;
  vcross[16] = -LF_upperleg_v[3];
  vcross[22] = LF_upperleg_v[2];
  vcross[28] = 0.0;
  vcross[34] = -LF_upperleg_v[0];
  vcross[5] = -LF_upperleg_v[4];
  vcross[11] = LF_upperleg_v[3];
  vcross[17] = 0.0;
  vcross[23] = -LF_upperleg_v[1];
  vcross[29] = LF_upperleg_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_LF_upperleg_XM_fr_LF_hipassembly[6 * i_1 + i] *
        LF_hipassembly_a[i_1];
    }

    LF_upperleg_a[i] = vcross[12 + i] * rtU.qd[1] + tmp;
  }

  LF_upperleg_a[2] += rtU.qdd[1];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  for (i = 0; i < 6; i++) {
    LF_lowerleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      b_y[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        b_y[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_LF_upperleg.tensor6D[6 * i_1 + i_0] + b_y[6
          * i_1 + i];
      }

      LF_lowerleg_v[i] += rtDW.b_xm.fr_LF_lowerleg_XM_fr_LF_upperleg[6 * i_1 + i]
        * LF_upperleg_v[i_1];
    }
  }

  vcross[0] = 0.0;
  vcross[6] = -LF_lowerleg_v[2];
  vcross[12] = LF_lowerleg_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = LF_lowerleg_v[2];
  vcross[7] = 0.0;
  vcross[13] = -LF_lowerleg_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -LF_lowerleg_v[1];
  vcross[8] = LF_lowerleg_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -LF_lowerleg_v[5];
  vcross[15] = LF_lowerleg_v[4];
  vcross[21] = 0.0;
  vcross[27] = -LF_lowerleg_v[2];
  vcross[33] = LF_lowerleg_v[1];
  vcross[4] = LF_lowerleg_v[5];
  vcross[10] = 0.0;
  vcross[16] = -LF_lowerleg_v[3];
  vcross[22] = LF_lowerleg_v[2];
  vcross[28] = 0.0;
  vcross[34] = -LF_lowerleg_v[0];
  vcross[5] = -LF_lowerleg_v[4];
  vcross[11] = LF_lowerleg_v[3];
  vcross[17] = 0.0;
  vcross[23] = -LF_lowerleg_v[1];
  vcross[29] = LF_lowerleg_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_LF_lowerleg_XM_fr_LF_upperleg[6 * i_1 + i] *
        LF_upperleg_a[i_1];
    }

    LF_lowerleg_a[i] = vcross[12 + i] * rtU.qd[2] + tmp;
  }

  LF_lowerleg_a[2] += rtU.qdd[2];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  for (i = 0; i < 6; i++) {
    tmp_0[i] = 0.0;
    RH_hipassembly_f[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      vcross_1[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        vcross_1[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_LF_lowerleg.tensor6D[6 * i_1 + i_0] +
          vcross_1[6 * i_1 + i];
      }

      tmp_0[i] += rtConstP.inv_dyn_hyq_ip.lf_LF_lowerleg.tensor6D[6 * i_1 + i] *
        LF_lowerleg_a[i_1];
      RH_hipassembly_f[i] += vcross_1[6 * i_1 + i] * LF_lowerleg_v[i_1];
    }

    LF_lowerleg_f[i] = tmp_0[i] + RH_hipassembly_f[i];
    RF_hipassembly_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      RF_hipassembly_v[i] += rtDW.b_xm.fr_RF_hipassembly_XM_fr_trunk[6 * i_1 + i]
        * rtU.trunk_v[i_1];
    }
  }

  RF_hipassembly_v[2] += rtU.qd[3];
  vcross[0] = 0.0;
  vcross[6] = -RF_hipassembly_v[2];
  vcross[12] = RF_hipassembly_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = RF_hipassembly_v[2];
  vcross[7] = 0.0;
  vcross[13] = -RF_hipassembly_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -RF_hipassembly_v[1];
  vcross[8] = RF_hipassembly_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -RF_hipassembly_v[5];
  vcross[15] = RF_hipassembly_v[4];
  vcross[21] = 0.0;
  vcross[27] = -RF_hipassembly_v[2];
  vcross[33] = RF_hipassembly_v[1];
  vcross[4] = RF_hipassembly_v[5];
  vcross[10] = 0.0;
  vcross[16] = -RF_hipassembly_v[3];
  vcross[22] = RF_hipassembly_v[2];
  vcross[28] = 0.0;
  vcross[34] = -RF_hipassembly_v[0];
  vcross[5] = -RF_hipassembly_v[4];
  vcross[11] = RF_hipassembly_v[3];
  vcross[17] = 0.0;
  vcross[23] = -RF_hipassembly_v[1];
  vcross[29] = RF_hipassembly_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    RF_hipassembly_a[i] = vcross[12 + i] * rtU.qd[3];
  }

  RF_hipassembly_a[2] += rtU.qdd[3];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  for (i = 0; i < 6; i++) {
    RF_upperleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      c_y[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        c_y[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_RF_hipassembly.tensor6D[6 * i_1 + i_0] +
          c_y[6 * i_1 + i];
      }

      RF_upperleg_v[i] += rtDW.b_xm.fr_RF_upperleg_XM_fr_RF_hipassembly[6 * i_1
        + i] * RF_hipassembly_v[i_1];
    }
  }

  RF_upperleg_v[2] += rtU.qd[4];
  vcross[0] = 0.0;
  vcross[6] = -RF_upperleg_v[2];
  vcross[12] = RF_upperleg_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = RF_upperleg_v[2];
  vcross[7] = 0.0;
  vcross[13] = -RF_upperleg_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -RF_upperleg_v[1];
  vcross[8] = RF_upperleg_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -RF_upperleg_v[5];
  vcross[15] = RF_upperleg_v[4];
  vcross[21] = 0.0;
  vcross[27] = -RF_upperleg_v[2];
  vcross[33] = RF_upperleg_v[1];
  vcross[4] = RF_upperleg_v[5];
  vcross[10] = 0.0;
  vcross[16] = -RF_upperleg_v[3];
  vcross[22] = RF_upperleg_v[2];
  vcross[28] = 0.0;
  vcross[34] = -RF_upperleg_v[0];
  vcross[5] = -RF_upperleg_v[4];
  vcross[11] = RF_upperleg_v[3];
  vcross[17] = 0.0;
  vcross[23] = -RF_upperleg_v[1];
  vcross[29] = RF_upperleg_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_RF_upperleg_XM_fr_RF_hipassembly[6 * i_1 + i] *
        RF_hipassembly_a[i_1];
    }

    RF_upperleg_a[i] = vcross[12 + i] * rtU.qd[4] + tmp;
  }

  RF_upperleg_a[2] += rtU.qdd[4];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  for (i = 0; i < 6; i++) {
    LF_lowerleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      d_y[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        d_y[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_RF_upperleg.tensor6D[6 * i_1 + i_0] + d_y[6
          * i_1 + i];
      }

      LF_lowerleg_v[i] += rtDW.b_xm.fr_RF_lowerleg_XM_fr_RF_upperleg[6 * i_1 + i]
        * RF_upperleg_v[i_1];
    }
  }

  LF_lowerleg_v[2] += rtU.qd[5];
  vcross[0] = 0.0;
  vcross[6] = -LF_lowerleg_v[2];
  vcross[12] = LF_lowerleg_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = LF_lowerleg_v[2];
  vcross[7] = 0.0;
  vcross[13] = -LF_lowerleg_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -LF_lowerleg_v[1];
  vcross[8] = LF_lowerleg_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -LF_lowerleg_v[5];
  vcross[15] = LF_lowerleg_v[4];
  vcross[21] = 0.0;
  vcross[27] = -LF_lowerleg_v[2];
  vcross[33] = LF_lowerleg_v[1];
  vcross[4] = LF_lowerleg_v[5];
  vcross[10] = 0.0;
  vcross[16] = -LF_lowerleg_v[3];
  vcross[22] = LF_lowerleg_v[2];
  vcross[28] = 0.0;
  vcross[34] = -LF_lowerleg_v[0];
  vcross[5] = -LF_lowerleg_v[4];
  vcross[11] = LF_lowerleg_v[3];
  vcross[17] = 0.0;
  vcross[23] = -LF_lowerleg_v[1];
  vcross[29] = LF_lowerleg_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_RF_lowerleg_XM_fr_RF_upperleg[6 * i_1 + i] *
        RF_upperleg_a[i_1];
    }

    LF_lowerleg_a[i] = vcross[12 + i] * rtU.qd[5] + tmp;
  }

  LF_lowerleg_a[2] += rtU.qdd[5];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  for (i = 0; i < 6; i++) {
    tmp_0[i] = 0.0;
    RH_hipassembly_f[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      vcross_1[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        vcross_1[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_RF_lowerleg.tensor6D[6 * i_1 + i_0] +
          vcross_1[6 * i_1 + i];
      }

      tmp_0[i] += rtConstP.inv_dyn_hyq_ip.lf_RF_lowerleg.tensor6D[6 * i_1 + i] *
        LF_lowerleg_a[i_1];
      RH_hipassembly_f[i] += vcross_1[6 * i_1 + i] * LF_lowerleg_v[i_1];
    }

    RF_lowerleg_f[i] = tmp_0[i] + RH_hipassembly_f[i];
    LH_hipassembly_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      LH_hipassembly_v[i] += rtDW.b_xm.fr_LH_hipassembly_XM_fr_trunk[6 * i_1 + i]
        * rtU.trunk_v[i_1];
    }
  }

  LH_hipassembly_v[2] += rtU.qd[6];
  vcross[0] = 0.0;
  vcross[6] = -LH_hipassembly_v[2];
  vcross[12] = LH_hipassembly_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = LH_hipassembly_v[2];
  vcross[7] = 0.0;
  vcross[13] = -LH_hipassembly_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -LH_hipassembly_v[1];
  vcross[8] = LH_hipassembly_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -LH_hipassembly_v[5];
  vcross[15] = LH_hipassembly_v[4];
  vcross[21] = 0.0;
  vcross[27] = -LH_hipassembly_v[2];
  vcross[33] = LH_hipassembly_v[1];
  vcross[4] = LH_hipassembly_v[5];
  vcross[10] = 0.0;
  vcross[16] = -LH_hipassembly_v[3];
  vcross[22] = LH_hipassembly_v[2];
  vcross[28] = 0.0;
  vcross[34] = -LH_hipassembly_v[0];
  vcross[5] = -LH_hipassembly_v[4];
  vcross[11] = LH_hipassembly_v[3];
  vcross[17] = 0.0;
  vcross[23] = -LH_hipassembly_v[1];
  vcross[29] = LH_hipassembly_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    LH_hipassembly_a[i] = vcross[12 + i] * rtU.qd[6];
  }

  LH_hipassembly_a[2] += rtU.qdd[6];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  for (i = 0; i < 6; i++) {
    LH_upperleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      e_y[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        e_y[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_LH_hipassembly.tensor6D[6 * i_1 + i_0] +
          e_y[6 * i_1 + i];
      }

      LH_upperleg_v[i] += rtDW.b_xm.fr_LH_upperleg_XM_fr_LH_hipassembly[6 * i_1
        + i] * LH_hipassembly_v[i_1];
    }
  }

  LH_upperleg_v[2] += rtU.qd[7];
  vcross[0] = 0.0;
  vcross[6] = -LH_upperleg_v[2];
  vcross[12] = LH_upperleg_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = LH_upperleg_v[2];
  vcross[7] = 0.0;
  vcross[13] = -LH_upperleg_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -LH_upperleg_v[1];
  vcross[8] = LH_upperleg_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -LH_upperleg_v[5];
  vcross[15] = LH_upperleg_v[4];
  vcross[21] = 0.0;
  vcross[27] = -LH_upperleg_v[2];
  vcross[33] = LH_upperleg_v[1];
  vcross[4] = LH_upperleg_v[5];
  vcross[10] = 0.0;
  vcross[16] = -LH_upperleg_v[3];
  vcross[22] = LH_upperleg_v[2];
  vcross[28] = 0.0;
  vcross[34] = -LH_upperleg_v[0];
  vcross[5] = -LH_upperleg_v[4];
  vcross[11] = LH_upperleg_v[3];
  vcross[17] = 0.0;
  vcross[23] = -LH_upperleg_v[1];
  vcross[29] = LH_upperleg_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_LH_upperleg_XM_fr_LH_hipassembly[6 * i_1 + i] *
        LH_hipassembly_a[i_1];
    }

    LH_upperleg_a[i] = vcross[12 + i] * rtU.qd[7] + tmp;
  }

  LH_upperleg_a[2] += rtU.qdd[7];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  for (i = 0; i < 6; i++) {
    LF_lowerleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      f_y[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        f_y[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_LH_upperleg.tensor6D[6 * i_1 + i_0] + f_y[6
          * i_1 + i];
      }

      LF_lowerleg_v[i] += rtDW.b_xm.fr_LH_lowerleg_XM_fr_LH_upperleg[6 * i_1 + i]
        * LH_upperleg_v[i_1];
    }
  }

  LF_lowerleg_v[2] += rtU.qd[8];
  vcross[0] = 0.0;
  vcross[6] = -LF_lowerleg_v[2];
  vcross[12] = LF_lowerleg_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = LF_lowerleg_v[2];
  vcross[7] = 0.0;
  vcross[13] = -LF_lowerleg_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -LF_lowerleg_v[1];
  vcross[8] = LF_lowerleg_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -LF_lowerleg_v[5];
  vcross[15] = LF_lowerleg_v[4];
  vcross[21] = 0.0;
  vcross[27] = -LF_lowerleg_v[2];
  vcross[33] = LF_lowerleg_v[1];
  vcross[4] = LF_lowerleg_v[5];
  vcross[10] = 0.0;
  vcross[16] = -LF_lowerleg_v[3];
  vcross[22] = LF_lowerleg_v[2];
  vcross[28] = 0.0;
  vcross[34] = -LF_lowerleg_v[0];
  vcross[5] = -LF_lowerleg_v[4];
  vcross[11] = LF_lowerleg_v[3];
  vcross[17] = 0.0;
  vcross[23] = -LF_lowerleg_v[1];
  vcross[29] = LF_lowerleg_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_LH_lowerleg_XM_fr_LH_upperleg[6 * i_1 + i] *
        LH_upperleg_a[i_1];
    }

    LF_lowerleg_a[i] = vcross[12 + i] * rtU.qd[8] + tmp;
  }

  LF_lowerleg_a[2] += rtU.qdd[8];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  for (i = 0; i < 6; i++) {
    tmp_0[i] = 0.0;
    RH_hipassembly_f[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      vcross_1[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        vcross_1[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_LH_lowerleg.tensor6D[6 * i_1 + i_0] +
          vcross_1[6 * i_1 + i];
      }

      tmp_0[i] += rtConstP.inv_dyn_hyq_ip.lf_LH_lowerleg.tensor6D[6 * i_1 + i] *
        LF_lowerleg_a[i_1];
      RH_hipassembly_f[i] += vcross_1[6 * i_1 + i] * LF_lowerleg_v[i_1];
    }

    LH_lowerleg_f[i] = tmp_0[i] + RH_hipassembly_f[i];
    RH_hipassembly_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      RH_hipassembly_v[i] += rtDW.b_xm.fr_RH_hipassembly_XM_fr_trunk[6 * i_1 + i]
        * rtU.trunk_v[i_1];
    }
  }

  RH_hipassembly_v[2] += rtU.qd[9];
  vcross[0] = 0.0;
  vcross[6] = -RH_hipassembly_v[2];
  vcross[12] = RH_hipassembly_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = RH_hipassembly_v[2];
  vcross[7] = 0.0;
  vcross[13] = -RH_hipassembly_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -RH_hipassembly_v[1];
  vcross[8] = RH_hipassembly_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -RH_hipassembly_v[5];
  vcross[15] = RH_hipassembly_v[4];
  vcross[21] = 0.0;
  vcross[27] = -RH_hipassembly_v[2];
  vcross[33] = RH_hipassembly_v[1];
  vcross[4] = RH_hipassembly_v[5];
  vcross[10] = 0.0;
  vcross[16] = -RH_hipassembly_v[3];
  vcross[22] = RH_hipassembly_v[2];
  vcross[28] = 0.0;
  vcross[34] = -RH_hipassembly_v[0];
  vcross[5] = -RH_hipassembly_v[4];
  vcross[11] = RH_hipassembly_v[3];
  vcross[17] = 0.0;
  vcross[23] = -RH_hipassembly_v[1];
  vcross[29] = RH_hipassembly_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    RH_hipassembly_a[i] = vcross[12 + i] * rtU.qd[9];
  }

  RH_hipassembly_a[2] += rtU.qdd[9];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  for (i = 0; i < 6; i++) {
    RH_upperleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      g_y[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        g_y[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_RH_hipassembly.tensor6D[6 * i_1 + i_0] +
          g_y[6 * i_1 + i];
      }

      RH_upperleg_v[i] += rtDW.b_xm.fr_RH_upperleg_XM_fr_RH_hipassembly[6 * i_1
        + i] * RH_hipassembly_v[i_1];
    }
  }

  RH_upperleg_v[2] += rtU.qd[10];
  vcross[0] = 0.0;
  vcross[6] = -RH_upperleg_v[2];
  vcross[12] = RH_upperleg_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = RH_upperleg_v[2];
  vcross[7] = 0.0;
  vcross[13] = -RH_upperleg_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -RH_upperleg_v[1];
  vcross[8] = RH_upperleg_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -RH_upperleg_v[5];
  vcross[15] = RH_upperleg_v[4];
  vcross[21] = 0.0;
  vcross[27] = -RH_upperleg_v[2];
  vcross[33] = RH_upperleg_v[1];
  vcross[4] = RH_upperleg_v[5];
  vcross[10] = 0.0;
  vcross[16] = -RH_upperleg_v[3];
  vcross[22] = RH_upperleg_v[2];
  vcross[28] = 0.0;
  vcross[34] = -RH_upperleg_v[0];
  vcross[5] = -RH_upperleg_v[4];
  vcross[11] = RH_upperleg_v[3];
  vcross[17] = 0.0;
  vcross[23] = -RH_upperleg_v[1];
  vcross[29] = RH_upperleg_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_RH_upperleg_XM_fr_RH_hipassembly[6 * i_1 + i] *
        RH_hipassembly_a[i_1];
    }

    RH_upperleg_a[i] = vcross[12 + i] * rtU.qd[10] + tmp;
  }

  RH_upperleg_a[2] += rtU.qdd[10];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  for (i = 0; i < 6; i++) {
    LF_lowerleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      h_y[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        h_y[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_RH_upperleg.tensor6D[6 * i_1 + i_0] + h_y[6
          * i_1 + i];
      }

      LF_lowerleg_v[i] += rtDW.b_xm.fr_RH_lowerleg_XM_fr_RH_upperleg[6 * i_1 + i]
        * RH_upperleg_v[i_1];
    }
  }

  LF_lowerleg_v[2] += rtU.qd[11];
  vcross[0] = 0.0;
  vcross[6] = -LF_lowerleg_v[2];
  vcross[12] = LF_lowerleg_v[1];
  vcross[18] = 0.0;
  vcross[24] = 0.0;
  vcross[30] = 0.0;
  vcross[1] = LF_lowerleg_v[2];
  vcross[7] = 0.0;
  vcross[13] = -LF_lowerleg_v[0];
  vcross[19] = 0.0;
  vcross[25] = 0.0;
  vcross[31] = 0.0;
  vcross[2] = -LF_lowerleg_v[1];
  vcross[8] = LF_lowerleg_v[0];
  vcross[14] = 0.0;
  vcross[20] = 0.0;
  vcross[26] = 0.0;
  vcross[32] = 0.0;
  vcross[3] = 0.0;
  vcross[9] = -LF_lowerleg_v[5];
  vcross[15] = LF_lowerleg_v[4];
  vcross[21] = 0.0;
  vcross[27] = -LF_lowerleg_v[2];
  vcross[33] = LF_lowerleg_v[1];
  vcross[4] = LF_lowerleg_v[5];
  vcross[10] = 0.0;
  vcross[16] = -LF_lowerleg_v[3];
  vcross[22] = LF_lowerleg_v[2];
  vcross[28] = 0.0;
  vcross[34] = -LF_lowerleg_v[0];
  vcross[5] = -LF_lowerleg_v[4];
  vcross[11] = LF_lowerleg_v[3];
  vcross[17] = 0.0;
  vcross[23] = -LF_lowerleg_v[1];
  vcross[29] = LF_lowerleg_v[0];
  vcross[35] = 0.0;
  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_RH_lowerleg_XM_fr_RH_upperleg[6 * i_1 + i] *
        RH_upperleg_a[i_1];
    }

    LF_lowerleg_a[i] = vcross[12 + i] * rtU.qd[11] + tmp;
  }

  LF_lowerleg_a[2] += rtU.qdd[11];
  for (i = 0; i < 6; i++) {
    for (i_1 = 0; i_1 < 6; i_1++) {
      vcross_0[i_1 + 6 * i] = -vcross[6 * i_1 + i];
    }
  }

  compositeInertia(&rtConstP.inv_dyn_hyq_ip,
                   rtDW.b_xm.fr_LF_hipassembly_XM_fr_trunk,
                   rtDW.b_xm.fr_LF_upperleg_XM_fr_LF_hipassembly,
                   rtDW.b_xm.fr_LF_lowerleg_XM_fr_LF_upperleg,
                   rtDW.b_xm.fr_RF_hipassembly_XM_fr_trunk,
                   rtDW.b_xm.fr_RF_upperleg_XM_fr_RF_hipassembly,
                   rtDW.b_xm.fr_RF_lowerleg_XM_fr_RF_upperleg,
                   rtDW.b_xm.fr_LH_hipassembly_XM_fr_trunk,
                   rtDW.b_xm.fr_LH_upperleg_XM_fr_LH_hipassembly,
                   rtDW.b_xm.fr_LH_lowerleg_XM_fr_LH_upperleg,
                   rtDW.b_xm.fr_RH_hipassembly_XM_fr_trunk,
                   rtDW.b_xm.fr_RH_upperleg_XM_fr_RH_hipassembly,
                   rtDW.b_xm.fr_RH_lowerleg_XM_fr_RH_upperleg, &expl_temp);
  for (i = 0; i < 6; i++) {
    tmp_0[i] = 0.0;
    RH_hipassembly_f[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      y_tmp = i + 6 * i_1;
      vcross[y_tmp] = 0.0;
      for (i_0 = 0; i_0 < 6; i_0++) {
        vcross[y_tmp] = vcross_0[6 * i_0 + i] *
          rtConstP.inv_dyn_hyq_ip.lf_RH_lowerleg.tensor6D[6 * i_1 + i_0] +
          vcross[6 * i_1 + i];
      }

      tmp_0[i] += rtConstP.inv_dyn_hyq_ip.lf_RH_lowerleg.tensor6D[6 * i_1 + i] *
        LF_lowerleg_a[i_1];
      RH_hipassembly_f[i] += vcross[6 * i_1 + i] * LF_lowerleg_v[i_1];
    }

    RH_lowerleg_f[i] = tmp_0[i] + RH_hipassembly_f[i];
    tmp_1[i] = 0.0;
    h_y_0[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      i_0 = 6 * i_1 + i;
      tmp_1[i] += rtConstP.inv_dyn_hyq_ip.lf_RH_upperleg.tensor6D[i_0] *
        RH_upperleg_a[i_1];
      h_y_0[i] += h_y[i_0] * RH_upperleg_v[i_1];
    }
  }

  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_RH_lowerleg_XM_fr_RH_upperleg[6 * i + i_1] *
        RH_lowerleg_f[i_1];
    }

    LF_lowerleg_v[i] = (tmp_1[i] + h_y_0[i]) + tmp;
    tmp_0[i] = 0.0;
    RH_upperleg_a[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      i_0 = 6 * i_1 + i;
      tmp_0[i] += rtConstP.inv_dyn_hyq_ip.lf_RH_hipassembly.tensor6D[i_0] *
        RH_hipassembly_a[i_1];
      RH_upperleg_a[i] += g_y[i_0] * RH_hipassembly_v[i_1];
    }
  }

  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_RH_upperleg_XM_fr_RH_hipassembly[6 * i + i_1] *
        LF_lowerleg_v[i_1];
    }

    RH_hipassembly_f[i] = (tmp_0[i] + RH_upperleg_a[i]) + tmp;
    tmp_1[i] = 0.0;
    RH_hipassembly_a[i] = 0.0;
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_LH_lowerleg_XM_fr_LH_upperleg[6 * i + i_1] *
        LH_lowerleg_f[i_1];
      i_0 = 6 * i_1 + i;
      tmp_1[i] += rtConstP.inv_dyn_hyq_ip.lf_LH_upperleg.tensor6D[i_0] *
        LH_upperleg_a[i_1];
      RH_hipassembly_a[i] += f_y[i_0] * LH_upperleg_v[i_1];
    }

    LH_upperleg_f[i] = (tmp_1[i] + RH_hipassembly_a[i]) + tmp;
    h_y_0[i] = 0.0;
    RH_hipassembly_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      i_0 = 6 * i_1 + i;
      h_y_0[i] += rtConstP.inv_dyn_hyq_ip.lf_LH_hipassembly.tensor6D[i_0] *
        LH_hipassembly_a[i_1];
      RH_hipassembly_v[i] += e_y[i_0] * LH_hipassembly_v[i_1];
    }
  }

  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_LH_upperleg_XM_fr_LH_hipassembly[6 * i + i_1] *
        LH_upperleg_f[i_1];
    }

    RH_hipassembly_a[i] = (h_y_0[i] + RH_hipassembly_v[i]) + tmp;
    tmp_0[i] = 0.0;
    RH_upperleg_v[i] = 0.0;
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_RF_lowerleg_XM_fr_RF_upperleg[6 * i + i_1] *
        RF_lowerleg_f[i_1];
      i_0 = 6 * i_1 + i;
      tmp_0[i] += rtConstP.inv_dyn_hyq_ip.lf_RF_upperleg.tensor6D[i_0] *
        RF_upperleg_a[i_1];
      RH_upperleg_v[i] += d_y[i_0] * RF_upperleg_v[i_1];
    }

    RH_upperleg_a[i] = (tmp_0[i] + RH_upperleg_v[i]) + tmp;
    tmp_1[i] = 0.0;
    LF_lowerleg_a[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      i_0 = 6 * i_1 + i;
      tmp_1[i] += rtConstP.inv_dyn_hyq_ip.lf_RF_hipassembly.tensor6D[i_0] *
        RF_hipassembly_a[i_1];
      LF_lowerleg_a[i] += c_y[i_0] * RF_hipassembly_v[i_1];
    }
  }

  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_RF_upperleg_XM_fr_RF_hipassembly[6 * i + i_1] *
        RH_upperleg_a[i_1];
    }

    RH_hipassembly_v[i] = (tmp_1[i] + LF_lowerleg_a[i]) + tmp;
    tmp_0[i] = 0.0;
    RF_upperleg_v[i] = 0.0;
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_LF_lowerleg_XM_fr_LF_upperleg[6 * i + i_1] *
        LF_lowerleg_f[i_1];
      i_0 = 6 * i_1 + i;
      tmp_0[i] += rtConstP.inv_dyn_hyq_ip.lf_LF_upperleg.tensor6D[i_0] *
        LF_upperleg_a[i_1];
      RF_upperleg_v[i] += b_y[i_0] * LF_upperleg_v[i_1];
    }

    RH_upperleg_v[i] = (tmp_0[i] + RF_upperleg_v[i]) + tmp;
    h_y_0[i] = 0.0;
    RF_hipassembly_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      i_0 = 6 * i_1 + i;
      h_y_0[i] += rtConstP.inv_dyn_hyq_ip.lf_LF_hipassembly.tensor6D[i_0] *
        LF_hipassembly_a[i_1];
      RF_hipassembly_v[i] += y[i_0] * LF_hipassembly_v[i_1];
    }
  }

  inv(expl_temp.trunk_Ic, vcross);
  vcross_0[0] = -0.0;
  vcross_0[1] = -(-rtU.trunk_v[2]);
  vcross_0[2] = -rtU.trunk_v[1];
  vcross_0[3] = -0.0;
  vcross_0[4] = -0.0;
  vcross_0[5] = -0.0;
  vcross_0[6] = -rtU.trunk_v[2];
  vcross_0[7] = -0.0;
  vcross_0[8] = -(-rtU.trunk_v[0]);
  vcross_0[9] = -0.0;
  vcross_0[10] = -0.0;
  vcross_0[11] = -0.0;
  vcross_0[12] = -(-rtU.trunk_v[1]);
  vcross_0[13] = -rtU.trunk_v[0];
  vcross_0[14] = -0.0;
  vcross_0[15] = -0.0;
  vcross_0[16] = -0.0;
  vcross_0[17] = -0.0;
  vcross_0[18] = -0.0;
  vcross_0[19] = -(-rtU.trunk_v[5]);
  vcross_0[20] = -rtU.trunk_v[4];
  vcross_0[21] = -0.0;
  vcross_0[22] = -(-rtU.trunk_v[2]);
  vcross_0[23] = -rtU.trunk_v[1];
  vcross_0[24] = -rtU.trunk_v[5];
  vcross_0[25] = -0.0;
  vcross_0[26] = -(-rtU.trunk_v[3]);
  vcross_0[27] = -rtU.trunk_v[2];
  vcross_0[28] = -0.0;
  vcross_0[29] = -(-rtU.trunk_v[0]);
  vcross_0[30] = -(-rtU.trunk_v[4]);
  vcross_0[31] = -rtU.trunk_v[3];
  vcross_0[32] = -0.0;
  vcross_0[33] = -(-rtU.trunk_v[1]);
  vcross_0[34] = -rtU.trunk_v[0];
  vcross_0[35] = -0.0;
  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_LF_upperleg_XM_fr_LF_hipassembly[6 * i + i_1] *
        RH_upperleg_v[i_1];
      i_0 = i + 6 * i_1;
      y[i_0] = 0.0;
      for (y_tmp = 0; y_tmp < 6; y_tmp++) {
        y[i_0] = vcross_0[6 * y_tmp + i] *
          rtConstP.inv_dyn_hyq_ip.lf_trunk.tensor6D[6 * i_1 + y_tmp] + y[6 * i_1
          + i];
      }
    }

    LF_lowerleg_a[i] = (h_y_0[i] + RF_hipassembly_v[i]) + tmp;
    tmp_0[i] = 0.0;
    LF_upperleg_v[i] = 0.0;
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      i_0 = 6 * i + i_1;
      tmp += rtDW.b_xm.fr_LH_hipassembly_XM_fr_trunk[i_0] * RH_hipassembly_a[i_1];
      tmp_0[i] += y[6 * i_1 + i] * rtU.trunk_v[i_1];
      LF_upperleg_v[i] += rtDW.b_xm.fr_RH_hipassembly_XM_fr_trunk[i_0] *
        RH_hipassembly_f[i_1];
    }

    tmp_1[i] = (tmp_0[i] + LF_upperleg_v[i]) + tmp;
    RF_upperleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      i_0 = 6 * i + i_1;
      b_y[i_1 + 6 * i] = -vcross[i_0];
      RF_upperleg_v[i] += rtDW.b_xm.fr_RF_hipassembly_XM_fr_trunk[i_0] *
        RH_hipassembly_v[i_1];
    }
  }

  for (i = 0; i < 6; i++) {
    tmp = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      tmp += rtDW.b_xm.fr_LF_hipassembly_XM_fr_trunk[6 * i + i_1] *
        LF_lowerleg_a[i_1];
    }

    tmp_0[i] = (tmp_1[i] + RF_upperleg_v[i]) + tmp;
  }

  for (i = 0; i < 6; i++) {
    LF_hipassembly_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      LF_hipassembly_v[i] += b_y[6 * i_1 + i] * tmp_0[i_1];
    }
  }

  tmp = 0.0;
  for (i = 0; i < 6; i++) {
    LF_hipassembly_a[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      LF_hipassembly_a[i] += rtDW.b_xm.fr_LF_hipassembly_XM_fr_trunk[6 * i_1 + i]
        * LF_hipassembly_v[i_1];
    }

    tmp += expl_temp.LF_hipassembly_Ic[6 * i + 2] * LF_hipassembly_a[i];
  }

  rtY.tau[0] = tmp + LF_lowerleg_a[2];
  tmp = 0.0;
  for (i = 0; i < 6; i++) {
    LF_upperleg_a[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      LF_upperleg_a[i] += rtDW.b_xm.fr_LF_upperleg_XM_fr_LF_hipassembly[6 * i_1
        + i] * LF_hipassembly_a[i_1];
    }

    tmp += expl_temp.LF_upperleg_Ic[6 * i + 2] * LF_upperleg_a[i];
  }

  rtY.tau[1] = tmp + RH_upperleg_v[2];
  tmp = 0.0;
  for (i = 0; i < 6; i++) {
    LF_upperleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      LF_upperleg_v[i] += rtDW.b_xm.fr_LF_lowerleg_XM_fr_LF_upperleg[6 * i_1 + i]
        * LF_upperleg_a[i_1];
    }

    tmp += expl_temp.LF_lowerleg_Ic[6 * i + 2] * LF_upperleg_v[i];
    RF_hipassembly_a[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      RF_hipassembly_a[i] += rtDW.b_xm.fr_RF_hipassembly_XM_fr_trunk[6 * i_1 + i]
        * LF_hipassembly_v[i_1];
    }
  }

  rtY.tau[2] = tmp + LF_lowerleg_f[2];
  tmp = 0.0;
  for (i = 0; i < 6; i++) {
    tmp += expl_temp.RF_hipassembly_Ic[6 * i + 2] * RF_hipassembly_a[i];
    RF_upperleg_a[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      RF_upperleg_a[i] += rtDW.b_xm.fr_RF_upperleg_XM_fr_RF_hipassembly[6 * i_1
        + i] * RF_hipassembly_a[i_1];
    }
  }

  rtY.tau[3] = tmp + RH_hipassembly_v[2];
  tmp = 0.0;
  for (i = 0; i < 6; i++) {
    tmp += expl_temp.RF_upperleg_Ic[6 * i + 2] * RF_upperleg_a[i];
  }

  rtY.tau[4] = tmp + RH_upperleg_a[2];
  tmp = 0.0;
  for (i = 0; i < 6; i++) {
    LF_upperleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      LF_upperleg_v[i] += rtDW.b_xm.fr_RF_lowerleg_XM_fr_RF_upperleg[6 * i_1 + i]
        * RF_upperleg_a[i_1];
    }

    tmp += expl_temp.RF_lowerleg_Ic[6 * i + 2] * LF_upperleg_v[i];
    LH_hipassembly_a[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      LH_hipassembly_a[i] += rtDW.b_xm.fr_LH_hipassembly_XM_fr_trunk[6 * i_1 + i]
        * LF_hipassembly_v[i_1];
    }
  }

  rtY.tau[5] = tmp + RF_lowerleg_f[2];
  tmp = 0.0;
  for (i = 0; i < 6; i++) {
    tmp += expl_temp.LH_hipassembly_Ic[6 * i + 2] * LH_hipassembly_a[i];
    LH_upperleg_a[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      LH_upperleg_a[i] += rtDW.b_xm.fr_LH_upperleg_XM_fr_LH_hipassembly[6 * i_1
        + i] * LH_hipassembly_a[i_1];
    }
  }

  rtY.tau[6] = tmp + RH_hipassembly_a[2];
  tmp = 0.0;
  for (i = 0; i < 6; i++) {
    tmp += expl_temp.LH_upperleg_Ic[6 * i + 2] * LH_upperleg_a[i];
  }

  rtY.tau[7] = tmp + LH_upperleg_f[2];
  tmp = 0.0;
  for (i = 0; i < 6; i++) {
    LF_upperleg_v[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      LF_upperleg_v[i] += rtDW.b_xm.fr_LH_lowerleg_XM_fr_LH_upperleg[6 * i_1 + i]
        * LH_upperleg_a[i_1];
    }

    tmp += expl_temp.LH_lowerleg_Ic[6 * i + 2] * LF_upperleg_v[i];
    RH_hipassembly_a[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      RH_hipassembly_a[i] += rtDW.b_xm.fr_RH_hipassembly_XM_fr_trunk[6 * i_1 + i]
        * LF_hipassembly_v[i_1];
    }
  }

  rtY.tau[8] = tmp + LH_lowerleg_f[2];
  tmp = 0.0;
  for (i = 0; i < 6; i++) {
    tmp += expl_temp.RH_hipassembly_Ic[6 * i + 2] * RH_hipassembly_a[i];
    RH_upperleg_a[i] = 0.0;
    for (i_1 = 0; i_1 < 6; i_1++) {
      RH_upperleg_a[i] += rtDW.b_xm.fr_RH_upperleg_XM_fr_RH_hipassembly[6 * i_1
        + i] * RH_hipassembly_a[i_1];
    }
  }

  rtY.tau[9] = tmp + RH_hipassembly_f[2];
  tmp = 0.0;
  for (i = 0; i < 6; i++) {
    tmp += expl_temp.RH_upperleg_Ic[6 * i + 2] * RH_upperleg_a[i];
  }

  rtY.tau[10] = tmp + LF_lowerleg_v[2];
  tmp = 0.0;
  for (i_1 = 0; i_1 < 6; i_1++) {
    LF_upperleg_v[i_1] = 0.0;
    for (i = 0; i < 6; i++) {
      LF_upperleg_v[i_1] += rtDW.b_xm.fr_RH_lowerleg_XM_fr_RH_upperleg[6 * i +
        i_1] * RH_upperleg_a[i];
    }

    tmp += expl_temp.RH_lowerleg_Ic[6 * i_1 + 2] * LF_upperleg_v[i_1];

    // Outport: '<Root>/trunk_a'
    rtY.trunk_a[i_1] = LF_hipassembly_v[i_1] + 9.81;
  }

  rtY.tau[11] = tmp + RH_lowerleg_f[2];

  // End of MATLAB Function: '<Root>/inv_dyn_hyq'
}

// Model initialize function
void inv_dyn_hyqModelClass::initialize()
{
  // (no initialization code required)
}

// Constructor
inv_dyn_hyqModelClass::inv_dyn_hyqModelClass()
{
}

// Destructor
inv_dyn_hyqModelClass::~inv_dyn_hyqModelClass()
{
  // Currently there is no destructor body generated.
}

// Real-Time Model get method
RT_MODEL * inv_dyn_hyqModelClass::getRTM()
{
  return (&rtM);
}

//
// File trailer for generated code.
//
// [EOF]
//
