//============================================================================
// Name        : Petya_and_Strings.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void create_lower(void);
string first_string ;
string second_string ;
int difference = 0;
int main() {

	create_lower();

//	cout<<first_string <<"\n";
//	cout<<second_string <<"\n";
	size_t i = 0;
	while (i < first_string.length()) {

		difference = first_string[i] - second_string[i];

		if (difference > 0 || difference < 0 )
		{
	  break;
		}

		//	 cout<< actual_difference <<" \n";

		++i;
	}
	//  cout<<"lol\n";
	if (difference == 0) {

		cout << "0";
	}
	else if (difference < 0) {
		cout << "-1";
	}
	else if (difference > 0) {
		cout << "1";
	}



	return 0;
}

void create_lower(void) {
	cin >> first_string;
	cin >> second_string;
	size_t i = 0;
	while (i < first_string.length()) {

		if (first_string[i] >= 65 && first_string[i] <= 90) {
			first_string[i] = first_string[i] + 32;
		}
		if (second_string[i] >= 65 && second_string[i] <= 90) {
			second_string[i] = second_string[i] + 32;
		}
		++i;
	}
//cout<<second_string <<"\n";
//cout<<first_string <<"\n";
}

