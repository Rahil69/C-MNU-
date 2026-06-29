#include<iostream>
using namespace std;

int main(){
	int nums[5];
	cout<<"enter 5 numbers";
	int odd=0;
	int even=0;
	
	for(int i=0;i<5;i++){
		cin>>nums[i];
		if(nums[i] % 2 == 0){
			even +=1;
		}else{
			odd+=1;
		}
	}
	
	cout<<odd<<endl;
	cout<<even;
	
	
	
}
