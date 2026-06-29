#include <iostream>
using namespace std;

void doubleArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
            arr[i] *= 2;
        }
    }

int main() {
    const int size = 5;
    int values[size];
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> values[i];
    }
    doubleArray(values, size);
    cout << "Doubled array: ";
    for (int i = 0; i < size; i++) {
        cout << values[i];
        if (i < size - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
