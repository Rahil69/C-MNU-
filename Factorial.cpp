#include<iostream>
using namespace std;

int main(){
	int factorial=1;
	int num;
	cout<<"Enter number u wanna find factorial for: ";
	cin>>num;
	for (int i = num;i>=1; i--){
		factorial = factorial * i;
		
	}
	cout<<factorial;
	
}
