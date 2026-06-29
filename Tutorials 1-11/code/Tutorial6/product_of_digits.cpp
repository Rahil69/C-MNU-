#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 0) n = -n;
    int product = 1;
    if (n == 0) {
        product = 0;
    } else {
        while (n > 0) {
            product *= (n % 10);
            n /= 10;
        }
    }
    cout << "The product of all the digits is " << product << endl;
    return 0;
}
