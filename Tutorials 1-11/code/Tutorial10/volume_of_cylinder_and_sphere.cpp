#include <iostream>
using namespace std;

double radius = 0.0;
    double height = 0.0;
    double cylinderVolume = 0.0;
    double sphereVolume = 0.0;

    void cylinder(double &r, double &h) {
        cylinderVolume = 3.14159265358979323846 * r * r * h;
        cout << "Volume of cylinder = " << cylinderVolume << endl;
    }

    void sphere(double &r) {
        sphereVolume = (4.0 / 3.0) * 3.14159265358979323846 * r * r * r;
        cout << "Volume of sphere = " << sphereVolume << endl;
    }

int main() {
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Enter height: ";
    cin >> height;
    cylinder(radius, height);
    sphere(radius);
    return 0;
}
