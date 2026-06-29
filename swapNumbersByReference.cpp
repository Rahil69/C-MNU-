#include<iostream>
using namespace std;

void swapNumbers(int &a,int&b){
	int temp; 
	temp = a;
	a = b;
	b = temp;
	cout<<"swwapped is a= "<<a<< "b = "<<b<<endl;
}

int main(){
	int a = 2;
	int b= 3;
	
	swapNumbers(a,b);
}
