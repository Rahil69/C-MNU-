#include<iostream>
using namespace std;

void reverseArray(char arr[], int size){
	for(int i = 4; i>=0;i--){
		cout<<arr[i]<< " ";
	}
	
}
int main(){
	char arr[5];
	
	cout<<"Enter 5 characters: ";
	for(int i = 0;i<5;i++){
		cin>>arr[i];
	}
	reverseArray(arr,5);
}
