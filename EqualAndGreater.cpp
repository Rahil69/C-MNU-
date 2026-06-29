#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"Enter values for a & b: ";
	cin>>a>>b;
	
	if(a == b){
		cout<<"A is equal to B";
		
	}
	else if(a > b){
		cout<<"A is greater than B";
		
	}else{
		cout<<"B is greater than A";
	}
}
