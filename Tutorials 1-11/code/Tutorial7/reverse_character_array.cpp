#include <iostream>
using namespace std;

int main() {
    char letters[5];
    cout << "Enter 5 characters" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> letters[i];
    }
    cout << "characters in reverse order" << endl;
    for (int i = 4; i >= 0; i--) {
        cout << letters[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
    return 0;
}
