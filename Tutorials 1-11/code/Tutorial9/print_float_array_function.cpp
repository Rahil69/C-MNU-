#include <iostream>
using namespace std;

void printArray(double values[], int size) {
        for (int i = 0; i < size; i++) {
            cout << values[i];
            if (i < size - 1) cout << " ";
        }
        cout << endl;
    }

int main() {
    double values[10];
    cout << "Enter 10 numbers" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> values[i];
    }
    printArray(values, 10);
    return 0;
}
