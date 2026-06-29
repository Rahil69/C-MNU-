#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 1, b = 1, c = 1, x = 1, y = 1;
    double answer = ((3 + 4 * x) / 5.0)
                  - ((10 * (y - 5) * (a + b + c)) / x)
                  + (9 * ((4.0 / x) + ((9.0 + x) / y)));
    cout << "Answer = " << answer << endl;
    return 0;
}
