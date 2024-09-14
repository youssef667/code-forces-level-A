//============================================================================
// Name        : Word.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
int upper = 0;
int lower = 0;
string name;
void word(void);
int main() {
	word();
cout<<name;
	return 0;
}
void word(void) {
	cin >> name;
	size_t i= 0;
	size_t j= 0;
	size_t l= 0;
	size_t k= 0;
	while (i < name.length()) {

		if (name[i] >= 65 && name[i] <= 90) {
			upper++;
		}
		++i;
	}
	lower = name.length() - upper;

	if (lower > upper) {
		while (j < name.length()) {

			if (name[j] >= 65 && name[j] <= 90) {
				name[j] = name[j] + 32;
			}
			++j;
		}
	}
	else if (lower < upper) {
		while (l < name.length()) {
			if (name[l] >= 97 && name[l] <= 122) {
				name[l] = name[l] - 32;
			}
			++l;
		}
	}
	else if (lower == upper) {
		while (k < name.length()) {

			if (name[k] >= 65 && name[k] <= 90) {
				name[k] = name[k] + 32;
			}
			++k;
		}
	}
}
