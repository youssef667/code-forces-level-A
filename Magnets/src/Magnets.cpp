//============================================================================
// Name        : Magnets.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int number_of_magnets ;
int number_of_groups  ;
int main() {

	cin >>number_of_magnets;
	char magnets [number_of_magnets*2];
	for(int i =0 ;i <(number_of_magnets*2) ;i++){
		cin>>magnets [i];
	}
	for(int j =0 ;j <(number_of_magnets*2) ; j++){

		if(j%2 == 0){
			if (magnets[j] != magnets[(j) +2]){
				number_of_groups++;
			}
		}
	}
	cout << number_of_groups ;

	return 0;
}

