#include <iostream>
#include <string>
using namespace std;

int main() {
    string first_name, second_name;
    cout << "Enter first name: ";
    getline(cin, first_name);
    cout << "Enter second name: ";
    getline(cin, second_name);
    cout << first_name << " " << second_name << endl;
    return 0;
}
