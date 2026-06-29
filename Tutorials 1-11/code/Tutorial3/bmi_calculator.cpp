#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double pounds, inches;
    cout << "Enter weight in pounds: ";
    cin >> pounds;
    cout << "Enter height in inches: ";
    cin >> inches;
    double kg = pounds * 0.4536;
    double meters = inches * 0.0254;
    double bmi = kg / pow(meters, 2);
    cout << "BMI is " << bmi << endl;
    return 0;
}
