#ifndef QUADRATIC_LOSS_H
#define QUADRATIC_LOSS_H

/**
 * Mean Square Error / Quadratic Loss Function.
 *
 * The quadratic loss function, often referred to as "squared error loss", measures
 * how far off predictions are from the actual values. It calculates the quadratic 
 * loss between the true value 'y' and the prediction 'ŷ'.
 *
 * 1. Definition:
 *    iquadratic_loss(y, ŷ) = (1/2) * (y - ŷ)²
 *
 * 2. The derivative of the quadratic loss function with respect to the predicted value ŷ is:
 *    iquadratic_loss'(y, ŷ) = ŷ - y
 *
 * Note: We define the function as 'static inline' to enhance performance
 * and reduce execution time. This choice is made because the function is
 * lightweight and frequently utilized, allowing it to be seamlessly integrated
 * into the code where it is invoked. Consequently, this approach minimizes the
 * overhead typically incurred by function calls.
 *
 * @see https://en.wikipedia.org/wiki/Loss_function#Quadratic_loss_function
 */

/**
 * Calculates the quadratic loss for given predicted and expected double values.
 *
 * @param double y
 *   The expected double value.
 * @param double y_hat
 *   The predicted double value.
 *
 * @return double
 *   The quadratic loss value as a double.
 */
static inline double iquadratic_loss(double y, double y_hat) {
   double diff = y - y_hat;
   return 0.5 * diff * diff;
}

/**
 * Calculates the derivative of the quadratic loss for the given predicted and expected double values.
 *
 * @param double y
 *   The expected double value.
 * @param double y_hat
 *   The predicted double value.
 *
 * @return double
 *   The derivative of the quadratic loss function as a double.
 */
static inline double iquadratic_loss_derivative(double y, double y_hat) {
   return y_hat - y;
}

/**
 * Calculates the quadratic loss for given predicted and expected float values.
 *
 * @param float y
 *   The expected float value.
 * @param float y_hat
 *   The predicted float value.
 *
 * @return float
 *   The quadratic loss value as a float.
 */
static inline float iquadratic_lossf(float y, float y_hat) {
   float diff = y - y_hat;
   return 0.5 * diff * diff;
}

/**
 * Calculates the derivative of the quadratic loss for the given predicted and expected float values.
 *
 * @param float y
 *   The expected float value.
 * @param float y_hat
 *   The predicted float value.
 *
 * @return float
 *   The derivative of the quadratic loss function as a float.
 */
static inline float iquadratic_lossf_derivative(float y, float y_hat) {
   return y_hat - y;
}

/**
 * Calculates the quadratic loss for given predicted and expected long double values.
 *
 * @param long double y
 *   The expected long double value.
 * @param long double y_hat
 *   The predicted long double value.
 *
 * @return long double
 *   The quadratic loss value as a long double.
 */
static inline long double iquadratic_lossl(long double y, long double y_hat) {
   long double diff = y - y_hat;
   return 0.5 * diff * diff;
}

/**
 * Calculates the derivative of the quadratic loss for the given predicted and expected long double values.
 *
 * @param long double y
 *   The expected long double value.
 * @param long double y_hat
 *   The predicted long double value.
 *
 * @return long double
 *   The derivative of the quadratic loss function as a long double.
 */
static inline long double iquadratic_lossl_derivative(long double y, long double y_hat) {
   return y_hat - y;
}

#endif /* QUADRATIC_LOSS_H */