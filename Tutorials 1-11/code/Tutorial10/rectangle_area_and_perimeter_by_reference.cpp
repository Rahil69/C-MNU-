#include <iostream>
using namespace std;

void rectangle(double &length, double &width) {
        cout << "Area = " << (length * width) << endl;
        cout << "Perimeter = " << (2 * (length + width)) << endl;
    }

int main() {
    double length, width;
    cout << "Enter length and width: ";
    cin >> length >> width;
    rectangle(length, width);
    return 0;
}
