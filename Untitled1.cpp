#include<iostream>
using namespace std;

int main(){
	int nums[5];
	int sum;
	float average;
	cout<<"Enter 5 values"<<endl;
	int size = sizeof(nums) / sizeof(nums[0]);
	for(int i =0 ; i<size;i++){
		cin>>nums[i];}
		
	for(int i =0;i<size;i++){
		sum += nums[i];
		
	 }
	 average = sum / size;
	 cout<<"sum is: "<<sum<<endl;
	 cout<<"average is: "<< average;
		
		
		
	
	return 0;
}
