#include <iostream>
using namespace std;

void reverseArray(char letters[], int size) {
        for (int i = size - 1; i >= 0; i--) {
            cout << letters[i];
            if (i > 0) cout << " ";
        }
        cout << endl;
    }

int main() {
    char letters[5];
    cout << "Enter 5 characters" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> letters[i];
    }
    reverseArray(letters, 5);
    return 0;
}
