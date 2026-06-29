#include<iostream>
using namespace std;

int main(){
	int counter = 0;
	int pin;
	while(counter <=3){
		cout<<"Enter PIN: ";
		cin>>pin;
		if(pin != 1234){
			counter +=1;
		}else{
			cout<<"Loading...";
			break;
		}
		if(counter ==3){
			cout<<"BLOCKED...";
			break;
		}
		
	}
	
	
}
