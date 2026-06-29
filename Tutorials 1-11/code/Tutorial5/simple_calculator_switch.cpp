#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    switch (op) {
        case '+': cout << "Sum = " << (a + b) << endl; break;
        case '-': cout << "Difference = " << (a - b) << endl; break;
        case '*': cout << "Product = " << (a * b) << endl; break;
        case '/': cout << "Quotient = " << (a / b) << endl; break;
        default: cout << "Invalid operator" << endl;
    }
    return 0;
}
