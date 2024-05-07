#include <stdlib.h>
#include "quadratic_loss_unit_tests.h"

/**
 * Main Unit Testing controller function.
 *
 * @param int argc
 *   The number of arguments passed by the user in the command line.
 * @param array argv
 *   Array of char, the arguments names.
 *
 * @return int
 *   The constant that represent the exit status.
 */
int main(int argc, char const *argv[]) {
  if (run_quadratic_loss_unit_tests() == EXIT_FAILURE) {
    // Unit tests failed.
    return EXIT_FAILURE;
  }
  // Unit tests succeeded.
  return EXIT_SUCCESS;
}
