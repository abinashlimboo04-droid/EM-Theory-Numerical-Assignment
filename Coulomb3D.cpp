#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {

    ofstream file("Result.txt");

    int N = 20;
    double dx = 0.2, dy = 0.2, dz = 0.2;
    double epsilon0 = 1.0;
    double q = 1.0;

    for(int i = -N; i < N; i++) {
        for(int j = -N; j < N; j++) {
            for(int k = -N; k < N; k++) {
                double x = i * dx;
                double y = j * dy;
                double z = k * dz;

                double r2 = x*x + y*y + z*z;

                if(r2 == 0) continue;

                double E = (1.0 / (4 * M_PI * epsilon0)) * (q / r2);

                file << x << " " << y << " " << z << " " << E << endl;
            }
        }
        file << endl;
    }

    file.close();1sd

    return 0;
}
