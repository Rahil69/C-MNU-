#include <iostream>
using namespace std;

int main(){
    for(int row = 4; row >= 1; row--){
        for(int star = 1; star <= row; star++){
            cout << "*";
        }
        cout << endl;
    }
}
