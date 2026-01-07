#include <iostream>
#include "Maxwell2D.h"
using namespace std;

void Maxwell2D::run2D() {
    double Ex=1, Ey=0, Bz=0, dx=0.1, dt=0.01;
    int steps;

    cout << "Enter number of time steps: ";
    cin >> steps;

    cout << "\nTime evolution of fields in 2D (simplified):\n";
    for(int t=0; t<steps; t++){
        Ex = Ex + dt*Bz/dx;
        Ey = Ey + dt*Bz/dx;
        Bz = Bz + dt*(Ex + Ey)/dx;
        cout << "Step " << t+1 << ": Ex=" << Ex << ", Ey=" << Ey << ", Bz=" << Bz << endl;
    }
}
