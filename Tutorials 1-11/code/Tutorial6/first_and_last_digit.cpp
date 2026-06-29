#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number greater than 100: ";
    cin >> n;
    int last = n % 10;
    int first = n;
    while (first >= 10) {
        first /= 10;
    }
    cout << "The first digit of entered number is: " << first << endl;
    cout << "The last digit of entered number is: " << last << endl;
    return 0;
}
