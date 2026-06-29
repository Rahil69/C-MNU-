#include<iostream>
using namespace std;


void reverseString(string &word){
	int n = word.length();
	
	for(int i = 0 ; i <n/2;i++){
		char temp = word[i];
		word[i] = word[n-i-1];
		word[n-i-1] = temp;
		
		
	}
}

int main(){
    string word;

    cout << "Enter a word: ";
    cin >> word;

    reverseString(word);

    cout << "Reversed string: " << word;

    return 0;
}
