#include <iostream>
using namespace std;

int smallestValue(int values[], int size) {
        int smallest = values[0];
        for (int i = 1; i < size; i++) {
            if (values[i] < smallest) smallest = values[i];
        }
        return smallest;
    }

int main() {
    int values[5];
    cout << "Enter 5 integers:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> values[i];
    }
    cout << "Smallest value = " << smallestValue(values, 5) << endl;
    return 0;
}
