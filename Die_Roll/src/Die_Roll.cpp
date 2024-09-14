//============================================================================
// Name        : Die_Roll.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int first_input = 0;
int second_input = 0;
int helper = 0;
int six = 6;
int main() {
	cin >> first_input;
	cin >> second_input;

	if (first_input >= second_input) {
		helper = 6 - first_input + 1;
	} else if (first_input < second_input) {
		helper = 6 - second_input + 1;
	}

	if (first_input == 1 && second_input == 1) {
		cout << "1/1";

	}
	else {
		for (int i = 2; i <= 9; i++) {

			if ((helper % i == 0) && (six % i == 0)) {
				helper = helper / i;
				six = six / i;
			}
		}
		cout << helper << "/" << six;
	}
	return 0;
}
