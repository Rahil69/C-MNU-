#include <iostream>
using namespace std;

int main() {
    double values[10];
    cout << "Enter 10 numbers" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> values[i];
    }
    cout << "The numbers are" << endl;
    for (int i = 0; i < 10; i++) {
        cout << values[i];
        if (i < 9) cout << " ";
    }
    cout << endl;
    return 0;
}
