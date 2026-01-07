#include <iostream>
#include "Maxwell1D.h"
#include "Maxwell2D.h"
#include "Maxwell3D.h"
using namespace std;

int main() {
    int choice;
    cout << "Select Maxwell equation dimension:\n";
    cout << "1. 1D\n2. 2D\n3. 3D\nChoice: ";
    cin >> choice;

    if(choice == 1){
        Maxwell1D m1;
        m1.run1D();
    }
    else if(choice == 2){
        Maxwell2D m2;
        m2.run2D();
    }
    else if(choice == 3){
        Maxwell3D m3;
        m3.run3D();
    }
    else {
        cout << "Invalid choice\n";
    }

    return 0;
}