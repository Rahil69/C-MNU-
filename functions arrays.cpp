#include<iostream>
using namespace std;


int findSum(int numbers[],int size);

int main(){
	int numbers[5];
	int sum;
	
	cout<<"enter 5 numbers"<<endl;
	
	for(int i =0;i<5;i++){
		cin>>numbers[i];
		
	}
	sum = findSum(numbers,5);
	
	cout<<"sum is: "<<sum;
	
}

int findSum(int numbers[],int size){
	int sum = 0;
	for(int i =0 ; i<size;i++){
		sum += numbers[i];
	}
	
	return sum;
}
