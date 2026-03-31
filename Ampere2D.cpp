#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ofstream file("ampere2d.txt");
    int N = 20;
    double dx = 0.2;
    double dy = 0.2;
    double mu0 = 1.0;
    double I = 1.0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            double x = (i - N/2) * dx;
            double y = (j - N/2) * dy;
            double r = sqrt(x*x + y*y);

            if (r < 0.1) r = 0.1;

            double B_mag = (mu0 * I) / (2 * M_PI * r);

            double Bx = -B_mag * (y / r);
            double By =  B_mag * (x / r);

            file << x << " " << y << " " << Bx << " " << By << endl;
        }
    }

    file.close();
    return 0;
}
