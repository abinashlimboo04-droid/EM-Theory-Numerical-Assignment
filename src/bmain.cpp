#include <iostream>
#include "biotsavart.h"

int main() {
    double I, dl, r;
    std::cout << "Enter current (A): ";
    std::cin >> I;
    std::cout << "Enter current element dl (m): ";
    std::cin >> dl;
    std::cout << "Enter distance r (m): ";
    std::cin >> r;

    std::cout << "Magnetic field = "
              << magneticField(I, dl, r) << " Tesla\n";

    return 0;
}