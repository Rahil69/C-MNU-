#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double x;
    double y = 2.0;
    cout << "Enter any number between 2 to 5: ";
    cin >> x;
    double z = sqrt((5 * pow(x, 5)) - ((3 * pow(x, 2)) / pow(y, 3))) / (2 * x);
    cout << fixed << setprecision(5);
    cout << "Z = " << z << endl;
    return 0;
}
