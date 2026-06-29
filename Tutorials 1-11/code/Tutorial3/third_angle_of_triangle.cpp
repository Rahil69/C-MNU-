#include <iostream>
using namespace std;

int main() {
    double a1, a2;
    cout << "Input the 1st angle of the triangle: ";
    cin >> a1;
    cout << "Input the 2nd angle of the triangle: ";
    cin >> a2;
    cout << "The 3rd angle of this triangle is: " << (180 - a1 - a2) << endl;
    return 0;
}
