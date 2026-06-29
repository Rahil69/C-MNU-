#include<iostream>
using namespace std;

int main(){
	int counter = 0;
	
	while(counter < 100){
		counter+= 1;
		if(counter % 15 == 0){
			cout << "FizzBuzz";
		}
		    
		else if(counter % 3 == 0)
		    cout << "Fizz";
		else if(counter % 5 == 0)
		    cout << "Buzz";
		else
		    cout << counter<< " ";
				
	}
}
