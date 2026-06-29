#include <iostream>
using namespace std;

int main() {
    char op;
    while (true) {
        cout << "Enter + for addition" << endl;
        cout << "Enter - for subtraction" << endl;
        cout << "Enter * for multiplication" << endl;
        cout << "Enter / for division" << endl;
        cout << "Enter Q to exit" << endl;
        cout << "Enter an operator: (+, -, *, /, Q): ";
        cin >> op;
        if (op == 'Q' || op == 'q') {
            cout << "end of program" << endl;
            break;
        }
        double a, b;
        cout << "Enter two numbers:" << endl;
        cin >> a >> b;
        switch (op) {
            case '+': cout << "Sum of " << a << " and " << b << " is " << (a + b) << endl; break;
            case '-': cout << "Difference of " << a << " and " << b << " is " << (a - b) << endl; break;
            case '*': cout << "Product of " << a << " and " << b << " is " << (a * b) << endl; break;
            case '/': cout << "Quotient of " << a << " and " << b << " is " << (a / b) << endl; break;
            default: cout << "Invalid operator" << endl;
        }
    }
    return 0;
}
