#include <iostream>
using namespace std;

int main() {
    double amount;
    cout << "Enter the total amount: ";
    cin >> amount;
    double discount = (amount > 2000) ? amount * 0.10 : amount * 0.05;
    cout << "Discount: " << discount << endl;
    return 0;
}
