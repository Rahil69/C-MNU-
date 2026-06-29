#include<iostream>
using namespace std;

int main(){
	int largest;
	int nums[5];
	cout<<"5 nums enter";
	for(int i =0;i<5;i++){
		cin>>nums[i];
	}
	largest = nums[0];
	for(int i = 0;i<5;i++){
		if (largest < nums[i]){
			largest = nums[i];
		}
	}
	cout<<"The largest value is "<<largest;
}
