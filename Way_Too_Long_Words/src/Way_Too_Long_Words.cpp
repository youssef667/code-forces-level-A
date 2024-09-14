//============================================================================
// Name        : Way_Too_Long_Words.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <vector>  // Include the vector library
using namespace std;

int main() {
	int size =0;
	int words_size =0;
	cin >>size;
	vector<string> words(size);

	for (int  i =0 ; i < size; i ++){
			cin >> words[i];

		}

	for (int  i =0 ; i < size; i ++){
		if (words[i].size()<=10){ //if its length is strictly more than 10 characters
			cout <<words[i] <<"\n";
		}
		else {
			words_size=words[i].size()- 2;
			cout << words[i][0] << words_size <<words[i][words[i].size()-1] <<"\n";
		}
	}


	return 0;
}
