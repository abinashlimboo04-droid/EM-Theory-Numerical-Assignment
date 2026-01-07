#include <iostream>
#include "Maxwell3D.h"
using namespace std;

void Maxwell3D::run3D() {
    double Ex=1, Ey=0, Ez=0, Bx=0, By=0, Bz=0, dx=0.1, dt=0.01;
    int steps;

    cout << "Enter number of time steps: ";
    cin >> steps;

    cout << "\nTime evolution of fields in 3D (simplified):\n";
    for(int t=0; t<steps; t++){
        Ex += dt*(By - Bz)/dx;
        Ey += dt*(Bz - Bx)/dx;
        Ez += dt*(Bx - By)/dx;

        Bx += dt*(Ey - Ez)/dx;
        By += dt*(Ez - Ex)/dx;
        Bz += dt*(Ex - Ey)/dx;

        cout << "Step " << t+1 
             << ": Ex=" << Ex << ", Ey=" << Ey << ", Ez=" << Ez
             << ", Bx=" << Bx << ", By=" << By << ", Bz=" << Bz << endl;
    }
}