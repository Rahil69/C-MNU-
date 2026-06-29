#include<iostream>
using namespace std;

int main(){
	char option = ' ';
	int num1,num2;
	
	cout<<"*******************************"<<endl;
	cout<<"Enter + for additio "<<endl;
	cout<<"Enter - for subtraction"<<endl;
	cout<<"Enter * for mult"<<endl;
	cout<<"Enter / for div" <<endl;
	cout<<"Type Q to exit" <<endl;
	cout<<"*******************************"<<endl;
	
	while(option != 'Q' ){
		cout<<"Enter an operator: (+, -, *, /, Q): ";
		cin>>option;
		switch(option){
			case '+':
				cout<<"Enter 2 numbers: "<<endl;
				cin>>num1>>num2;
				cout<<num1+num2<<endl;
				break;
			case '-':
				cout<<"Enter 2 numbers: "<<endl;
				cin>>num1>>num2;
				cout<<num1-num2<<endl;
				break;
				
		}
	}
	cout<<"End of program";
}
