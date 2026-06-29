#include <iostream>
using namespace std;

int sumValues(int values[], int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) sum += values[i];
        return sum;
    }

    double averageValues(int values[], int size) {
        return (double)sumValues(values, size) / size;
    }

int main() {
    int values[10];
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> values[i];
    }
    cout << "Sum = " << sumValues(values, 10) << endl;
    cout << "Average = " << averageValues(values, 10) << endl;
    return 0;
}
