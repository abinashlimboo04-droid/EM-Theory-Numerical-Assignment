#include "biotsavart.h"
#include <cmath>

const double mu0 = 4 * 3.141592653589793e-7;

double magneticField(double I, double dl, double r) {
    return (mu0 / (4 * 3.141592653589793)) * (I * dl) / (r * r);
}