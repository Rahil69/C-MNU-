#include <iostream>
using namespace std;

int main() {
    const int pin_code = 1234;
    int pin;
    for (int attempt = 1; attempt <= 3; attempt++) {
        cout << "enter PIN: ";
        cin >> pin;
        if (pin == pin_code) {
            cout << "loading..." << endl;
            return 0;
        }
    }
    cout << "Blocked..." << endl;
    return 0;
}
