#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ofstream file("biotsavart2d.txt");

    double R = 1.0;
    double I = 1.0;
    double mu0 = 1.0;
    int N = 100;

    double dtheta = 2 * M_PI / N;

    for (double x = -5.0; x <= 5.0; x += 0.2) {
        for (double z = -5.0; z <= 5.0; z += 0.2) {

            double Bx = 0.0, By = 0.0, Bz = 0.0;


            for (int i = 0; i < N; i++) {

                double theta = i * dtheta;


                double xl = R * cos(theta);
                double yl = R * sin(theta);
                double zl = 0.0;


                double dlx = -R * sin(theta) * dtheta;
                double dly =  R * cos(theta) * dtheta;
                double dlz = 0.0;


                double rx = x - xl;
                double ry = 0.0 - yl;
                double rz = z - zl;

                double r = sqrt(rx*rx + ry*ry + rz*rz);
                if (r < 0.1) continue;


                double cx = dly * rz - dlz * ry;
                double cy = dlz * rx - dlx * rz;
                double cz = dlx * ry - dly * rx;

                double factor = (mu0 * I) / (4 * M_PI * pow(r, 3));

                Bx += factor * cx;
                By += factor * cy;
                Bz += factor * cz;
            }


            double B = sqrt(Bx*Bx + By*By + Bz*Bz);

            file << x << " " << z << " " << B << endl;
        }
        file << endl;
    }

    file.close();

    return 0;
}
