#include<iostream>
using namespace std;

int main(){
	int pos=0;
	int neg=0;
	int zer=0;
	int nums[5] = {1,2,3,-4,0};
	
	for(int i = 0;i<5;i++){
		if(nums[i] > 0 ){
			pos +=1 ;
		}
		else if(nums[i] < 0 ){
			neg +=1;
		}
		else if(nums[i] == 0){
			zer += 1;
		}
	}
	cout << "Positive = " << pos << endl;
cout << "Negative = " << neg << endl;
cout << "Zero = " << zer << endl;
	
	
}
