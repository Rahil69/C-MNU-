#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str) {
        for (int i = 0, j = (int)str.size() - 1; i < j; i++, j--) {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
        }
    }

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    reverseString(str);
    cout << "Reversed string: " << str << endl;
    return 0;
}
