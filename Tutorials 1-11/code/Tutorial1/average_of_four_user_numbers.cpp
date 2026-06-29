#include <iostream>
using namespace std;

int main() {
    double a, b, c, d;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    cout << "Enter the fourth number: ";
    cin >> d;
    double average = (a + b + c + d) / 4.0;
    cout << "The average of these numbers is: " << average << endl;
    return 0;
}
