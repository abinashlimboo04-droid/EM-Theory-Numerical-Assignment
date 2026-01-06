#include <iostream>
#include "coulomb.h"

int main() {
    double q1, q2, r;

    std::cout << "Enter q1: ";
    std::cin >> q1;
    std::cout << "Enter q2: ";
    std::cin >> q2;
    std::cout << "Enter distance r: ";
    std::cin >> r;

    double F = coulombLaw(q1, q2, r);
    std::cout << "Coulomb Force = " << F << " N" << std::endl;

    return 0;
}