#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[100], second[100];
    cout << "Enter first string: ";
    cin.getline(first, 100);
    if (first[0] == '\0') cin.getline(first, 100);
    strcpy(second, first);
    cout << "First string: " << first << endl;
    cout << "Second string after copy: " << second << endl;
    return 0;
}
