//============================================================================
// Name        : Is_your_horseshoe_on_the_other_hoof.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int color [4] ;
int counter =0;
int main() {
	for (int i =0 ; i < 4 ; i ++){
		cin >> color[i];
	}

	for (int j =0 ; j < 4 ;j ++){
       for (int k =j +1 ; k <= 4 ;k++)
			if (color [j] == color[k]){
				counter ++;
				break ;
		}
	}
	cout << counter ;
	return 0;
}
