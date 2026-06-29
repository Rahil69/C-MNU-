#include <iostream>
using namespace std;

double area(double radius) {
        return 3.14159265358979323846 * radius * radius;
    }

int main() {
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Area of the circle is " << area(radius) << endl;
    return 0;
}
