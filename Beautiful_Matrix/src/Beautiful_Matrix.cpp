//============================================================================
// Name        : Beautiful_Matrix.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

int Beautiful_Matrix[5][5];
int one_x_index = 0;
int one_y_index = 0;
int distance =0;

int main() {


	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> Beautiful_Matrix[i][j];
			if (Beautiful_Matrix[i][j] == 1) {
				one_y_index = i;
				one_x_index = j;
			}
		}
	}
	cout << (abs(one_x_index - 2)) + (abs(one_y_index - 2));

	return 0;
}
