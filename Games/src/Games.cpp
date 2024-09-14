//============================================================================
// Name        : Games.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int number_of_teams = 0;
//int number_of_matches = 0;
int counter ;
int main() {
	cin >> number_of_teams;
//	number_of_matches = number_of_matches * (number_of_matches - 1);
	int teams[number_of_teams][2];
	for (int i = 0; i < number_of_teams; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> teams[i][j];
		}
	}

	for (int k = 0 ; k <number_of_teams ; k++){
		for (int l =0 ; l <number_of_teams ; l++){
			if (k == l){
				continue ;
			}
			if (teams[k][0]==teams[l][1]){
				counter ++;
			}
		}
	}
cout << counter ;
	return 0;
}
