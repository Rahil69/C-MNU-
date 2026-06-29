#include <iostream>
using namespace std;

int main() {
    unsigned int value;
    cout << "Enter an unsigned integer variable: ";
    cin >> value;
    cout << "Stored value = " << value << endl;
    cout << "A negative input wraps to a large positive number in unsigned storage." << endl;
    return 0;
}
