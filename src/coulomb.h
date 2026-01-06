#ifndef COULOMB_H
#define COULOMB_H

double coulombLaw(double q1, double q2, double r) {
    const double k = 8.9875517923e9;
    if (r == 0) return 0;
    return k * q1 * q2 / (r * r);
}

#endif
