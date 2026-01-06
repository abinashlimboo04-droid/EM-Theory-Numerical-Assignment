#include <iostream>
#include <cmath>

// Function to calculate Coulomb Force
double coulombLaw(double q1, double q2, double r) {
    const double k = 8.9875517923e9; // N·m²/C²
    if (r == 0) {
        std::cerr << "Error: Distance cannot be zero!\n";
        return 0;
    }
    return k * q1 * q2 / (r * r);
}

int main() {
    double q1, q2, r;

    // Input from user
    std::cout << "Enter charge q1 (C): ";
    std::cin >> q1;
    std::cout << "Enter charge q2 (C): ";
    std::cin >> q2;
    std::cout << "Enter distance between charges (m): ";
    std::cin >> r;

    // Calculate force
    double F = coulombLaw(q1, q2, r);

    // Display result
    std::cout << "Coulomb Force between the charges: " << F << " N\n";

    return 0;
}