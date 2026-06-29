#include <iostream>
using namespace std;

void displayNumbers(int n) {
        for (int i = 10; i <= n; i++) {
            cout << i;
            if (i < n) cout << ", ";
        }
        cout << endl;
    }

int main() {
    int n;
    cout << "Enter a positive number greater than 10: ";
    cin >> n;
    displayNumbers(n);
    return 0;
}
