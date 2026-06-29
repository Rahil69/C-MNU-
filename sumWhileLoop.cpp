#include<iostream>
using namespace std;
int main(){
	int num;
	int sum=0;
	cout<<"Enter NUmber to add (0 to exit)";
	cin>>num;
	
	while(num!=0){
		sum += num;
		cout<<"Enter NUmber to add (0 to exit)";
		cin>>num;
		
	}
if(sum == 0)
    cout << "exit program";
else
    cout << "Sum of all the numbers is: " << sum << endl;
}
