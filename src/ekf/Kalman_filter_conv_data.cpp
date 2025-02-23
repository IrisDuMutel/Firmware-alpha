//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// File: Kalman_filter_conv_data.cpp
//
// Code generated for Simulink model 'Kalman_filter_conv'.
//
// Model version                  : 1.11
// Simulink Coder version         : 9.1 (R2019a) 23-Nov-2018
// C/C++ source code generated on : Thu Mar 25 17:05:55 2021
//
// Target selection: ert.tlc
// Embedded hardware selection: ARM Compatible->ARM Cortex
// Code generation objectives: Unspecified
// Validation result: Not run
//
#include "Kalman_filter_conv.h"
#include "Kalman_filter_conv_private.h"

// Block parameters (default storage)
P_Kalman_filter_conv_T Kalman_filter_conv_P = {
  // Expression: 1e-8
  //  Referenced by: '<Root>/cov_X_rs'

  1.0E-8,

  // Expression: 1e-8
  //  Referenced by: '<Root>/Cov_Y_rs'

  1.0E-8,

  // Expression: 1
  //  Referenced by: '<Root>/cov_Vx_rs'

  1.0,

  // Expression: 1
  //  Referenced by: '<Root>/cov_Vy_rs'

  1.0,

  // Expression: 1e-4
  //  Referenced by: '<Root>/cov_psi_rs'

  0.0001,

  // Expression: 1e-12
  //  Referenced by: '<Root>/cov_Vx_enc'

  1.0E-12,

  // Expression: 1e-12
  //  Referenced by: '<Root>/cov_psi_enc'

  1.0E-12,

  // Expression: 1e-6
  //  Referenced by: '<Root>/cov_psi_mag'

  1.0E-6,

  // Expression: 1e-12
  //  Referenced by: '<Root>/cov_X'

  1.0E-12,

  // Expression: 1e-12
  //  Referenced by: '<Root>/cov_Y'

  1.0E-12,

  // Expression: 1e-4
  //  Referenced by: '<Root>/cov_Vx'

  0.0001,

  // Expression: 1e-2
  //  Referenced by: '<Root>/cov_Vy'

  0.01,

  // Expression: 1e-2
  //  Referenced by: '<Root>/cov_psi'

  0.01,

  // Expression: 0
  //  Referenced by: '<Root>/Unit Delay2'

  0.0,

  // Expression: 2*pi*1920*2/360/1920/0.2
  //  Referenced by: '<Root>/Gain3'

  0.17453292519943295,

  // Expression: 0
  //  Referenced by: '<Root>/Unit Delay3'

  0.0,

  // Expression: 2*pi*2/360/0.2
  //  Referenced by: '<Root>/Gain4'

  0.17453292519943295,

  // Expression: [0 0 0 0 0]
  //  Referenced by: '<S1>/Unit Delay'

  { 0.0, 0.0, 0.0, 0.0, 0.0 },

  // Computed Parameter: DiscreteTimeIntegrator_gainval
  //  Referenced by: '<Root>/Discrete-Time Integrator'

  0.2,

  // Expression: 0
  //  Referenced by: '<Root>/Discrete-Time Integrator'

  0.0
};

//
// File trailer for generated code.
//
// [EOF]
//
