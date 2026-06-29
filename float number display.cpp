#include<iostream>
using namespace std;

int main(){
	float nums[5];
	cout<<"Enter 5 numbers: ";
	
	for(int i = 0; i < 5; i++){
		cin >> nums[i];
	}

	cout<<"the numbers are: "<<endl;
	for(int i =  0 ; i < 5; i++){
		cout<<nums[i] << " ";
	}
}
