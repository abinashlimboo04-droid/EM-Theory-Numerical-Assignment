#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

int main() {

    ofstream file("Result.txt");

    int N = 50;
    double dx = 0.1;
    double epsilon0 = 1.0;
    double q = 1.0;

    for(int i = 1; i < N; i++) {
        double x = i * dx;
        double E = (1.0 / (4 * M_PI * epsilon0)) * (q / (x * x));
        file << x << " " << E << endl;
    }

    file.close();

    return 0;
}
