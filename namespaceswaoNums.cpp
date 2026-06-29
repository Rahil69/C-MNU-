#include<iostream>
using namespace std;

namespace myFunctions{
	void swapNumbers(int &a,int&b){
		int temp;
		temp = a;
		a = b;
		b = temp;
		cout<<a<<endl;
		cout<<b<<endl;
	}
	
}

int main(){
	int a = 2;
	int b = 3;
	
	myFunctions::swapNumbers(a,b);

}
