#include <iostream>
using namespace std;

int main() {
    double kmh;
    cout << "Enter kilometers/hour: ";
    cin >> kmh;
    cout << "Miles/hour = " << (kmh * 0.621371) << endl;
    return 0;
}
