#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    const int N = 20;
    const double dx = 0.1;
    const double dt = 0.001;
    const int steps = 1000;
    double V[N][N][N] = {0};


    V[N/2][N/2][N/2] = 0.01;


    for(int t=0; t<steps; t++)
        for(int i=1; i<N-1; i++)
            for(int j=1; j<N-1; j++)
                for(int k=1; k<N-1; k++)
                    V[i][j][k] += dt * (
                        (V[i+1][j][k] + V[i-1][j][k] +
                         V[i][j+1][k] + V[i][j-1][k] +
                         V[i][j][k+1] + V[i][j][k-1] -
                         6*V[i][j][k]) / (dx*dx)
                    );

    ofstream file("result3d.txt");


    for(int i=1; i<N-1; i++)
        for(int j=1; j<N-1; j++)
            for(int k=1; k<N-1; k++){
                double x = (i-N/2)*dx;
                double y = (j-N/2)*dx;
                double z = (k-N/2)*dx;


                double Ex = -(V[i+1][j][k]-V[i-1][j][k])/(2*dx);
                double Ey = -(V[i][j+1][k]-V[i][j-1][k])/(2*dx);
                double Ez = -(V[i][j][k+1]-V[i][j][k-1])/(2*dx);

                file << x << " " << y << " " << z << " " << Ex << " " << Ey << " " << Ez << "\n";
            }
file.close();

return 0;

}
