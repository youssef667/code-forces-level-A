//============================================================================
// Name        : New_Password.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	int length = 0;
	int number_of_charchter;

	cin >> length >> number_of_charchter;
	string password;

	for (int i = 0; i < number_of_charchter; i++) {
		password += 97 + i;
	}
	int lol = length/number_of_charchter ;
	int modelous = length%number_of_charchter ;
	for (int j = 0; j < lol; j++) {

		cout<< password;
	}
	for (int j = 0; j < modelous; j++) {

		cout<< password[j];
	}
	return 0;
}
