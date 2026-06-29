#include <iostream>
using namespace std;

int main() {
    int values[10];
    cout << "Enter 10 numbers" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> values[i];
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (values[j] > values[j + 1]) {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j + 1] = temp;
            }
        }
    }
    cout << "Numbers sorted in ascending order" << endl;
    for (int i = 0; i < 10; i++) {
        cout << values[i];
        if (i < 9) cout << " ";
    }
    cout << endl;
    return 0;
}
