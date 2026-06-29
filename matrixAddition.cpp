#include<iostream>
using namespace std;

int main(){
	int matrix1[10][10];
	int matrix2[10][10];
	int sum[10][10];
	int size;
	cout<<"Enter size of matrix: "<<endl;
	cin>>size;
	
	cout<<"Ennter values for dfirrst matrix";
	for(int i = 0 ; i < size; i++){
		for(int j = 0;j<size;j++){
			cin>>matrix1[i][j];
		}
	}
	
	cout<<"Ennter values for second matrix";
	for(int i = 0 ; i < size; i++){
		for(int j = 0;j<size;j++){
			cin>>matrix2[i][j];
		}
	}

		for(int i = 0 ; i < size; i++){
		for(int j = 0;j<size;j++){
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
		cout<<"Sum of matrix is: "<<endl;
	for(int i = 0 ; i < size; i++){
		for(int j = 0;j<size;j++){
			cout<<sum[i][j]<<" ";
			
		}cout<<endl;
		
	}
}
