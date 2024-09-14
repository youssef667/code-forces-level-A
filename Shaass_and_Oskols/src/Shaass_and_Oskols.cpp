//============================================================================
// Name        : Shaass_and_Oskols.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int number_of_wires = 0;
// Supposed there are ai oskols sitting on the i-th wire.
int number_shooted_birds = 0;
int main() {
	cin >> number_of_wires;
	int birds[number_of_wires];
	for (int i = 0; i < number_of_wires; i++) {
		cin >> birds[i];
	}
	cin >> number_shooted_birds;
	int index[number_shooted_birds][2];

	for (int i = 0; i < number_shooted_birds; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> index[i][j];
		}
	}
	int birds_on_the_right =0;
	int birds_on_the_left =0;
	for (int i = 0; i < number_shooted_birds; i++) {
// birds on the left jump to up
	//		index[i][0]; // wire index
	//	cout <<index[i][0] << "  index \n";
			if (index[i][0] == 1  ){

				birds_on_the_right = birds[index[i][0]-1] -index[i][1];
				birds[index[i][0]] +=birds_on_the_right;
				birds[(index[i][0])-1] =0;
			    birds_on_the_right =0;
				birds_on_the_left =0;

				continue ;
			}
			else if ( index[i][0] == (number_of_wires)){
			birds_on_the_left = index[i][1] - 1; // bird index from the left
			birds[index[i][0] - 2] += birds_on_the_left;
			birds[(index[i][0]) - 1] = 0;
			birds_on_the_right = 0;
			birds_on_the_left = 0;
				continue ;
			}

			birds_on_the_left =index[i][1] -1; // bird index from the left
			birds_on_the_right = birds[index[i][0]-1] -index[i][1];
			birds[index[i][0]-2] +=birds_on_the_left;
			birds[index[i][0]] +=birds_on_the_right;
			birds[(index[i][0])-1] =0;
			birds_on_the_right =0;
			birds_on_the_left =0;

	}
	for (int i = 0; i < number_of_wires; i++) {
		cout << birds[i] << "\n";
	}
	return 0;
}
