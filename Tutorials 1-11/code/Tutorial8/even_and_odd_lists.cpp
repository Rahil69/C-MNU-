#include <iostream>
using namespace std;

void printEven() {
        for (int i = 2; i <= 50; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    }

    void printOdd() {
        for (int i = 1; i <= 50; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    }

int main() {
    cout << "Even numbers:" << endl;
    printEven();
    cout << "Odd numbers:" << endl;
    printOdd();
    return 0;
}
