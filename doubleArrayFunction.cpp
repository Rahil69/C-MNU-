#include<iostream>
using namespace std;


void doubleArray(int arr[],int size){
	
	for(int i = 0; i <size;i++){
		arr[i] = arr[i] * 2;
		cout<<arr[i]<<" "<<endl;
	}
}

int main(){
	int arr[5] = {1,2,3,4,5};
	doubleArray(arr,5);
		
}
