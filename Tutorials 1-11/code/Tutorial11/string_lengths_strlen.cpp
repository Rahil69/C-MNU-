#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[100], second[100];
    cout << "Enter first string: ";
    cin.getline(first, 100);
    if (first[0] == '\0') cin.getline(first, 100);
    cout << "Enter second string: ";
    cin.getline(second, 100);
    cout << "Size of first string = " << strlen(first) << endl;
    cout << "Size of second string = " << strlen(second) << endl;
    return 0;
}
