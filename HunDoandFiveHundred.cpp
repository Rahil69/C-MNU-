#include<iostream>
using namespace std;

int main(){
	int num = 100;
	
	while(num <= 500){
		if(num % 3 == 0 && num % 5 == 0){
			cout<<num<<endl;
		}
	num++;
	}
	
}
