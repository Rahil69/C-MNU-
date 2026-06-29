#include<iostream>
using namespace std;

int largestNum(int numbers[],int size);

int main(){
	int numbers[5] = {241,2,3,4,5};
	int largest;
	int smallest;
	
	largest =  largestNum(numbers,5);
	
	cout<<largest;
	
}

int largestNum(int numbers[],int size){
	int largest = numbers[0];
	for(int i =0;i<size;i++){
		if(numbers[i] > largest){
			largest = numbers[i];
		}
	}
	return largest;
}
