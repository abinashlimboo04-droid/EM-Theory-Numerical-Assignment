#include <iostream>
#include "gauss.h"

int main() {
    double Q;
    std::cout << "Enter enclosed charge (C): ";
    std::cin >> Q;

    std::cout << "Electric flux = "
              << electricFlux(Q) << " N·m²/C\n";

    return 0;
}