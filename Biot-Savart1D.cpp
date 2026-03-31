#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ofstream file("biot1d.txt");

    double R = 1.0;
    double I = 1.0;
    double mu0 = 1.0;


    for (double z = -5.0; z <= 5.0; z += 0.1) {


        double numerator = mu0 * I * R * R;
        double denominator = 2.0 * pow((R * R + z * z), 1.5);
        double B = numerator / denominator;


        file << z << " " << B << endl;
    }

    file.close();

    return 0;
}
