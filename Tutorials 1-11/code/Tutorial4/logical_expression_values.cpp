#include <iostream>
using namespace std;

int main() {
    int a = 2, b = 3, c = 4;
    cout << boolalpha;
    cout << "(a < b) || (b < c) = " << ((a < b) || (b < c)) << endl;
    cout << "!(a > b) || (c <= b) = " << (!(a > b) || (c <= b)) << endl;
    cout << "(a > b) || (b < c) && (a < b) || (a < c) = " << ((a > b) || (b < c) && (a < b) || (a < c)) << endl;
    cout << "((a > b) || (b < c)) && (a > b) = " << (((a > b) || (b < c)) && (a > b)) << endl;
    return 0;
}
