#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    do {
        cout << "Enter number to add (enter 0 to exit): ";
        cin >> n;
        if (n != 0) sum += n;
    } while (n != 0);
    if (sum == 0) {
        cout << "exit program" << endl;
    } else {
        cout << "sum of the numbers is: " << sum << endl;
    }
    return 0;
}
