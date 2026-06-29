#include<iostream>
using namespace std;

int main(){
	int temp;
	int nums[5] = {1,2,5,3,2};
	
	for(int i=0;i<5;i++){
		for(int j= i+1;j<5;j++){
			if(nums[i] > nums[j]){
				temp = nums[j];
				nums[j] = nums[i];
				nums[i] = temp;
				
			}
		}
	}
	cout<<"sorted array is: "<<endl;
	
	for(int i  = 0 ; i<5 ; i++){
		cout<<nums[i] << " ";
		
	}
}
