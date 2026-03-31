#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream file("Result.txt");

    int N = 10;
    double dx = 0.1;
    double epsilon0 = 1.0;
    double rho0 = 1.0;

    double E[10];

    E[0] = 0;

    for(int i = 0; i < N-1; i++) {
        E[i+1] = E[i] + (rho0 * dx)/epsilon0;
    }

    for(int i = 0; i < N; i++) {
        file << E[i] << endl;
    }

    file.close();

    return 0;
}
