#include<iostream>
using namespace std;


void areaAndPer(int &length,int &width){
	int area;
	int per;
	area = length * width;
	per = 2 * (length+ width);
	
}

int main(){
	int length = 20;
	int width = 30;
	
	areaAndPer(length,width);
}
