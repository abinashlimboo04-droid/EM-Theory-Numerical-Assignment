#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ofstream file("ampere1d.txt");
    int N = 200;
    double dx = 0.05;
    double mu0 = 1.0;
    double J0 = 1.0;
    double slab_width = 2.0;

    double B = 0.0;

    for (int i = 0; i < N; i++) {
        double x = (i - N/2) * dx;

        if (abs(x) < slab_width / 2.0) {
            B += mu0 * J0 * dx;
        }

        file << x << " " << B << endl;
    }

    file.close();
    return 0;
}
