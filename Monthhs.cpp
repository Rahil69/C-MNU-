#include<iostream>
using namespace std;

int main(){
	int month;

	
	do{
		cout<<"Enter month to find out how many days in there son: "<<endl;
	cin >> month;
	
	switch(month){
		case 1:
			cout<<"january 30 days";
			break;
		case 2:
			cout<<"february 28 days";
			break;
		case 3:
			cout<<"march 31 days";
			break;
		case 4:
			cout<<"April 30 days";
			break;
		case 5:
			cout<<"may 30 days";
			break;
		default:
			cout<<"i only calculate 5 months yo chill";
	}
}while(month <= 12);
	
}
