//============================================================================
// Name        : Stones_on_the_Table.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
int stones_number =0;
int counter =0 ;
int main() {
cin >> stones_number ;

string stones_colors ;
cin >> stones_colors ;


	size_t i = 0;
	while (i < stones_colors.length()) {

		if (stones_colors[i] == stones_colors[i+1]){
			counter ++ ;
		}
	//	cout <<stones_colors[i] << "\n";

		++i;
	}
	cout <<counter ;
	return 0;
}
