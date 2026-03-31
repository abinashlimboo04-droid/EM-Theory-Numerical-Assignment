#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {

    ofstream file("Result.txt");

    int N = 50;
    double dx = 0.1, dy = 0.1;
    double epsilon0 = 1.0;
    double q = 1.0;

    for(int i = -N; i < N; i++) {
        for(int j = -N; j < N; j++) {
            double x = i * dx;
            double y = j * dy;

            double r2 = x*x + y*y;

            if(r2 == 0) continue;

            double E = (1.0 / (4 * M_PI * epsilon0)) * (q / r2);

            file << x << " " << y << " " << E << endl;
        }
        file << endl;
    }

    file.close();

    return 0;
}
