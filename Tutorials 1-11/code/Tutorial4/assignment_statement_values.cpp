#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 0, c = 0, answer = 0;
    answer = a + (b = 10);
    cout << "a. answer = " << answer << endl;
    answer = a + (b = 10) - 8;
    cout << "b. answer = " << answer << endl;
    answer = a + (b = (c = 12)) - 8;
    cout << "c. answer = " << answer << endl;
    return 0;
}
