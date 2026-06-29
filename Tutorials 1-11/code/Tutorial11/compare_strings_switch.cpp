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
    int len1 = strlen(first);
    int len2 = strlen(second);
    int result = (len1 > len2) ? 1 : (len1 < len2) ? -1 : 0;
    switch (result) {
        case 0: cout << "same size" << endl; break;
        case 1: cout << "first string is longer than the second" << endl; break;
        case -1: cout << "second string is greater than the first string" << endl; break;
    }
    return 0;
}
