#include<iostream>
using namespace std;


void printArray(float arr[],int size){
	for(int i = 0;i<5;i++){
		cout<<arr[i]<< " ";
	}
}
int main(){
	float arr[5];
	cout<<"5 floating point nums: ";
	for(int i = 0;i<5;i++){
		cin>>arr[i];
	}
	printArray(arr,5);
}
