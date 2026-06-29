#include <iostream>
using namespace std;

int main() {
    int values[5];
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> values[i];
    }
    int sum = 0;
    int largest = values[0];
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++) {
        sum += values[i];
        if (values[i] > largest) largest = values[i];
        cout << values[i];
        if (i < 4) cout << " ";
    }
    cout << endl;
    cout << "Sum of array elements: " << sum << endl;
    cout << "Largest element: " << largest << endl;
    return 0;
}
