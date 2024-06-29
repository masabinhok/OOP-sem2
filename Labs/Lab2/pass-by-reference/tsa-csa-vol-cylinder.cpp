#include <iostream>
using namespace std;

const float PI = 3.14159;

void calcCylinder(float r, float h, float &tsa, float &csa, float &vol) {
    tsa = 2 * PI * r * (r + h);
    csa = 2 * PI * r * h;
    vol = PI * r * r * h;
}

int main () {
    float r, h, tsa, csa, vol;
    cout << "Enter the radius and height of cylinder: " << endl;
    cin >> r >> h;
    calcCylinder(r, h, tsa, csa, vol);
    cout << "Total surface area of cylinder = " << tsa << endl;
    cout << "Curved surface area of cylinder = " << csa << endl;
    cout << "Volume of cylinder = " << vol << endl;
    return 0;
}
