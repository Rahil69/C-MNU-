#include <iostream>
using namespace std;

void table(int n) {
        cout << "Multiplication Table" << endl;
        cout << "===================" << endl;
        for (int i = 1; i <= 12; i++) {
            cout << i << " x " << n << " = " << (i * n) << endl;
        }
    }

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    table(n);
    return 0;
}
