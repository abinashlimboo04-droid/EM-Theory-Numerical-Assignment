#include <iostream>
#include "Maxwell1D.h"
using namespace std;

void Maxwell1D::run1D() {
    double Ex, Bx, dx, dt;
    int steps;

    cout << "Enter initial electric field Ex (V/m): ";
    cin >> Ex;
    cout << "Enter initial magnetic field Bx (T): ";
    cin >> Bx;
    cout << "Enter space step dx (m): ";
    cin >> dx;
    cout << "Enter time step dt (s): ";
    cin >> dt;
    cout << "Enter number of time steps: ";
    cin >> steps;

    cout << "\nTime evolution of fields in 1D (simplified):\n";
    for(int t=0; t<steps; t++){
        // Simplified update: E and B oscillation (1D wave example)
        Ex = Ex + dt*Bx/dx;
        Bx = Bx + dt*Ex/dx;
        cout << "Step " << t+1 << ": Ex = " << Ex << " , Bx = " << Bx << endl;
    }
}