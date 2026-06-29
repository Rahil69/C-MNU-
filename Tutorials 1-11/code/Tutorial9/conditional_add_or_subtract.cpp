#include <iostream>
using namespace std;

int adjust(int value) {
        return (value > 0) ? (value + 5) : (value - 5);
    }

int main() {
    int value;
    cout << "Enter a value: ";
    cin >> value;
    cout << "Final output: " << adjust(value) << endl;
    return 0;
}
