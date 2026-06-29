#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int num;
    int product = 1;

    cout << "Enter a number: ";
    cin >> num;

    num = abs(num);

    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }

    cout << "The product of all the digits is " << product << endl;

    return 0;
}
