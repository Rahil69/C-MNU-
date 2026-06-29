#include <iostream>
using namespace std;

int main() {
    int shares;
    double purchase_price, current_price;
    cout << "Enter the number of shares: ";
    cin >> shares;
    cout << "Enter the purchase price per share: ";
    cin >> purchase_price;
    cout << "Enter the current price per share: ";
    cin >> current_price;
    double profit = (shares * current_price) - (shares * purchase_price);
    cout << "You have made a profit of $" << profit
         << " dollars since you bought " << shares << " shares of this stock." << endl;
    return 0;
}
