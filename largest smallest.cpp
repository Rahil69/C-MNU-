#include<iostream>
using namespace std;

int main(){
	int numbers[5];
	int largest;
	int smallest;
	int sum;
	float average;
	
	cout<<"enter 5 values  to find the largest and smallest number: ";
	for(int i = 0;i<5;i++){
		cin>>numbers[i];
		sum += numbers[i];	
	}
	largest = numbers[0];
	smallest = numbers[0];
	
	for (int i =0;i<5;i++){
		if(numbers[i] > largest){
			largest = numbers[i];
		}
		if(numbers[i] < smallest){
			smallest = numbers[i];
		}
	}
	average = sum / 5;
	cout<<"Average is: "<<average<<endl;
	cout<<"Sum is: "<<sum<<endl;
	cout<<"Largest number is "<<largest<<endl;
	cout<<"smallest number is "<<smallest;
}
