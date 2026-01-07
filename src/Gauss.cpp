#include "gauss.h"

const double eps0 = 8.854e-12;

double electricFlux(double Q_enclosed) {
    return Q_enclosed / eps0;
}
