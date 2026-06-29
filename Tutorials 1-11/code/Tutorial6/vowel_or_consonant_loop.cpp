#include <iostream>
#include <cctype>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        char ch;
        cout << "Enter an alphabet: ";
        cin >> ch;
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    }
    return 0;
}
