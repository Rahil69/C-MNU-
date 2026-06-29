#include <iostream>
using namespace std;

struct Rectangle {
        double length;
        double breadth;
    };

int main() {
    Rectangle r1, r2;
    cout << "Enter length and breadth for first rectangle: ";
    cin >> r1.length >> r1.breadth;
    cout << "Enter length and breadth for second rectangle: ";
    cin >> r2.length >> r2.breadth;
    double area1 = r1.length * r1.breadth;
    double area2 = r2.length * r2.breadth;
    cout << "Area of first rectangle: " << area1 << endl;
    cout << "Area of second rectangle: " << area2 << endl;
    if (area1 > area2) cout << "First rectangle has the greater area." << endl;
    else if (area2 > area1) cout << "Second rectangle has the greater area." << endl;
    else cout << "Both rectangles have the same area." << endl;
    return 0;
}
