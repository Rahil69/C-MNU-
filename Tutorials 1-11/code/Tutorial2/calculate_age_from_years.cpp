#include <iostream>
using namespace std;

int main() {
    int current_year, birth_year;
    cout << "Enter current year: ";
    cin >> current_year;
    cout << "Enter the year you were born in: ";
    cin >> birth_year;
    cout << "You will be " << (current_year - birth_year) << " this year." << endl;
    return 0;
}
