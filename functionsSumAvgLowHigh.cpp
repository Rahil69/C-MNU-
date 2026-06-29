#include<iostream>
using namespace std;

int sum(int arr[],int size){
	int total = 0;
	for(int i = 0;i<size;i++){
		total+=arr[i];
	}
	return total;
}
int average(int sums,int size){
	int avg = sums / size;
	return avg;
}

int highestNum(int arr[],int size){
	int highest = arr[0];
	for(int i = 0; i< size; i++){
		if(highest < arr[i]){
			highest = arr[i];
		}
		
	}
	return highest;
}

int lowestNum(int arr[],int size){
	int lowest = arr[0];
	for(int i = 0; i< size; i++){
		if(lowest > arr[i]){
			lowest = arr[i];
		}
		
	}
	return lowest;
}

int main(){
	int arr[5];
	int sums;
	int avverage;
	int big;
	int small;
	cout<<"Enter 5 values to calculate sum average, highest and lowest number: "<<endl;
	
	
	for(int i = 0;i<5;i++){
	cin>>arr[i];
	}
	sums= sum(arr,5);
	cout<<sums<<endl;
	avverage = average(sums,5);
	cout<<avverage<<endl;
	
	big = highestNum(arr,5);
	cout<<big<<endl;
	small = lowestNum(arr,5);
	cout<<small<<endl;
	
	
}
