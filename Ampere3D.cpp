#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ofstream file("ampere3d.txt");
    int N = 10;
    double dx = 0.4, dy = 0.4, dz = 0.4;
    double mu0 = 1.0;
    double I = 1.0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                double x = (i - N/2) * dx;
                double y = (j - N/2) * dy;
                double z = (k - N/2) * dz;

                double r = sqrt(x*x + y*y);
                if (r < 0.2) r = 0.2;

                double B_mag = (mu0 * I) / (2 * M_PI * r);

                double Bx = -B_mag * (y / r);
                double By =  B_mag * (x / r);
                double Bz = 0.0;

                file << x << " " << y << " " << z << " " << Bx << " " << By << " " << Bz << endl;
            }
        }
    }

    file.close();
    return 0;
}
