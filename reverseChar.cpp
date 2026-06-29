#include<iostream>
using namespace std;


int main(){
	char letter[5];
	
	cout<<"Enter 5 characters: "<<endl;
	
	for(int i = 0;i<5;i++){
		cin>>letter[i];
		
	}
	
	cout<<"Character in reverese order: "<<endl;
	
	for(int i = 4 ; i>=0;i--){
		cout<<letter[i];
	}
}
