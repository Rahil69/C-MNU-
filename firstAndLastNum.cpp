#include<iostream>
using namespace std;

int main(){
	int num;
	int first;
	int last;
	cout<<"Enter a number greater than 100: ";
	cin>>num;
	cout<<endl;
	last = num % 10;
	if(num>=100){
		while(num >= 10){
			num = num / 10;
			
		}
		
	}
	first = num;
	cout<<first<<endl;;
	cout<<last;
}
