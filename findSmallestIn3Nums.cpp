#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	
	cout<<"Enter 3 values: ";
	cin>>a>>b>>c;
	cout<<"Output: ";
	if(a < b && a<c){
		cout<<a<<" is the smallest number";
	}
	else if(b<a && b<c){
		cout<<b<<" is the smallest number";
	}
	else{
		cout<<c<<" is the smallest number";
	}
	
}
