//============================================================================
// Name        : Free_Ice_Cream.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	long long packs_of_ice_cream = 0;
	int n = 0;
	int number_of_distresed_kids=0;


	cin >> n >> packs_of_ice_cream ;

	string ice_cream_sign[n];
    int number_of_packs [n];
	for (int i = 0; i < n; i++) {

		cin >> ice_cream_sign[i];
		cin >> number_of_packs [i];
	}

	for (int j = 0; j < n; j++) {

		if ( ice_cream_sign[j] == "+"){
			packs_of_ice_cream += number_of_packs[j];
		}
		else if (ice_cream_sign[j] == "-"){
			if (number_of_packs[j] > packs_of_ice_cream){
				number_of_distresed_kids++;
			}
			else if(number_of_packs[j] <= packs_of_ice_cream){
				packs_of_ice_cream -= number_of_packs[j];
			}
		}
	}
	cout << packs_of_ice_cream <<" " << number_of_distresed_kids;
	return 0;
}
