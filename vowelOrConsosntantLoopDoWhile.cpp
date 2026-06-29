#include<iostream>
using namespace std;

int main(){
	int index=0;
	char cr;
	do{
		cout<<"Enter a letter: ";
		cin>>cr;
		if(cr == 'a' || cr == 'e' || cr == 'i' || cr == 'o' || cr == 'u'){
			cout<<"Ts letter a vowel";
		}else{
			cout<<"ts a constapocnstant";
		}
		index += 1;
	}while(index<5);
}
