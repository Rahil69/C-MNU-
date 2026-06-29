#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    swapNumbers(a, b);
    cout << "After swap: " << a << " " << b << endl;
    return 0;
}
