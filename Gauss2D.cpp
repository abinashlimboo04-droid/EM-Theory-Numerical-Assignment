#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    const int N = 100;
    double V[N][N] = {0};
    double rho[N][N] = {0};

    double dx = 0.1;
    double epsilon0 = 8.854e-12;


    rho[N/2][N/2] = 1e-9;


    for (int iter = 0; iter < 5000; iter++) {
        for (int i = 1; i < N-1; i++) {
            for (int j = 1; j < N-1; j++) {
                V[i][j] = 0.25 * (
                    V[i+1][j] + V[i-1][j] +
                    V[i][j+1] + V[i][j-1] +
                    rho[i][j] * dx * dx / epsilon0
                );
            }
        }
    }


    ofstream file("Poisson2D.txt");

    for (int i = 1; i < N-1; i++) {
        for (int j = 1; j < N-1; j++) {
            double x = (i - N/2) * dx;
            double y = (j - N/2) * dx;

            double Ex = -(V[i+1][j] - V[i-1][j]) / (2 * dx);
            double Ey = -(V[i][j+1] - V[i][j-1]) / (2 * dx);

            file << x << " " << y << " " << Ex << " " << Ey << endl;
        }
        file << endl;
    }

    file.close();


    return 0;
}
