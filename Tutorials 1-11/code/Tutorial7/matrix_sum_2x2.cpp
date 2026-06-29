#include <iostream>
using namespace std;

int main() {
    int first[2][2], second[2][2], sum[2][2];
    cout << "Enter elements for the first 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> first[i][j];
        }
    }
    cout << "Enter elements for the second 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> second[i][j];
            sum[i][j] = first[i][j] + second[i][j];
        }
    }
    cout << "First Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) cout << first[i][j] << " ";
        cout << endl;
    }
    cout << "Second Matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) cout << second[i][j] << " ";
        cout << endl;
    }
    cout << "Sum of the two matrices:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) cout << sum[i][j] << " ";
        cout << endl;
    }
    return 0;
}
