#include <iostream>
using namespace std;

int main() {
    int math, science, english;
    cout << "Enter math marks: ";
    cin >> math;
    cout << "Enter science marks: ";
    cin >> science;
    cout << "Enter english marks: ";
    cin >> english;
    bool eligible = (math >= 60) && (science >= 60 || english >= 60);
    cout << boolalpha << "Eligibility = " << eligible << endl;
    return 0;
}
