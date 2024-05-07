#include <stdio.h>
#include <stdlib.h>
#include "../include/loss.h"
#include "quadratic_loss_unit_tests.h"
#include "unit_test_callbacks.h"

/**
 * Unit testing for the iquadratic_loss(x) function.
 *
 * @param double x1
 *   The first input value.
 * @param double x2
 *   The second input value.
 * @param double expected
 *   The expected output value.
 *
 * @return int
 *   The constant that represent the test exit status.
 */
static int unit_test_iquadratic_loss(double x1, double x2, double expected) {
  return unit_test_callback(x1, x2, expected, "iquadratic_loss", iquadratic_loss);
}

/**
 * Unit testing for the iquadratic_lossf(x) function.
 *
 * @param float x1
 *   The first input value.
 * @param float x2
 *   The second input value.
 * @param float expected
 *   The expected output value.
 *
 * @return int
 *   The constant that represent the test exit status.
 */
static int unit_test_iquadratic_lossf(float x1, float x2, float expected) {
  return unit_test_callbackf(x1, x2, expected, "iquadratic_lossf", iquadratic_lossf);
}

/**
 * Unit testing for the iquadratic_lossl(x) function.
 *
 * @param long double x1
 *   The first input value.
 * @param long double x2
 *   The second input value.
 * @param long double expected
 *   The expected output value.
 *
 * @return int
 *   The constant that represent the test exit status.
 */
static int unit_test_iquadratic_lossl(long double x1, long double x2, long double expected) {
  return unit_test_callbackl(x1, x2, expected, "iquadratic_lossl", iquadratic_lossl);
}

/**
 * Unit testing for the iquadratic_loss_derivative(x) function.
 *
 * @param double x1
 *   The first input value.
 * @param double x2
 *   The second input value.
 * @param double expected
 *   The expected output value.
 *
 * @return int
 *   The constant that represent the test exit status.
 */
static int unit_test_iquadratic_loss_derivative(double x1, double x2, double expected) {
  return unit_test_callback(x1, x2, expected, "iquadratic_loss_derivative", iquadratic_loss_derivative);
}

/**
 * Unit testing for the iquadratic_lossf_derivative(x) function.
 *
 * @param float x1
 *   The first input value.
 * @param float x2
 *   The second input value.
 * @param float expected
 *   The expected output value.
 *
 * @return int
 *   The constant that represent the test exit status.
 */
static int unit_test_iquadratic_lossf_derivative(float x1, float x2, float expected) {
  return unit_test_callbackf(x1, x2, expected, "iquadratic_lossf_derivative", iquadratic_lossf_derivative);
}

/**
 * Unit testing for the iquadratic_lossl_derivative(x) function.
 *
 * @param long double x1
 *   The first input value.
 * @param long double x2
 *   The second input value.
 * @param long double expected
 *   The expected output value.
 *
 * @return int
 *   The constant that represent the test exit status.
 */
static int unit_test_iquadratic_lossl_derivative(long double x1, long double x2, long double expected) {
  return unit_test_callbackl(x1, x2, expected, "iquadratic_lossl_derivative", iquadratic_lossl_derivative);
}

/**
 * {@inheritdoc}
 */
int run_quadratic_loss_unit_tests() {
  printf("Testing the Quadratic Loss functions:\n");
  printf("-------------------------------------\n");
  long double inputs_a[][3] = {
      // Quadratic Loss(3.0, 2.0) approx 0.5.
      {3.0, 2.0, 0.5},
      // Quadratic Loss(3.0, 3.0) approx 0.0.
      {3.0, 3.0, 0.0},
      // Quadratic Loss(1.0, 4.0) approx 4.5.
      {1.0, 4.0, 4.5},
  };
  for (int i = 0; i < 3; i++) {
    if (unit_test_iquadratic_lossl(inputs_a[i][0], inputs_a[i][1], inputs_a[i][2]) == EXIT_FAILURE) {
      return EXIT_FAILURE;
    }
    if (unit_test_iquadratic_lossf((float)inputs_a[i][0], (float)inputs_a[i][1], (float)inputs_a[i][2]) == EXIT_FAILURE) {
      return EXIT_FAILURE;
    }
    if (unit_test_iquadratic_loss((double)inputs_a[i][0], (double)inputs_a[i][1], (double)inputs_a[i][2]) == EXIT_FAILURE) {
      return EXIT_FAILURE;
    }
  }
  printf("-------------------------------------\n");
  double inputs_b[][3] = {
      // Quadratic Loss'(3.0, 2.0) approx -1.0.
      {3.0, 2.0, -1.0},
      // Quadratic Loss'(3.0, 3.0) approx 0.0.
      {3.0, 3.0, 0.0},
      // Quadratic Loss'(1.0, 4.0) approx 3.0.
      {1.0, 4.0, 3.0},
  };
  for (int j = 0; j < 3; j++) {
    if (unit_test_iquadratic_lossl_derivative(inputs_b[j][0], inputs_b[j][1], inputs_b[j][2]) == EXIT_FAILURE) {
      return EXIT_FAILURE;
    }
    if (unit_test_iquadratic_lossf_derivative((float)inputs_b[j][0], (float)inputs_b[j][1], (float)inputs_b[j][2]) == EXIT_FAILURE) {
      return EXIT_FAILURE;
    }
    if (unit_test_iquadratic_loss_derivative((double)inputs_b[j][0], (double)inputs_b[j][1], (double)inputs_b[j][2]) == EXIT_FAILURE) {
      return EXIT_FAILURE;
    }
  }
  // Tests Passed!.
  return EXIT_SUCCESS;
}
