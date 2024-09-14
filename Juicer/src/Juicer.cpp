//============================================================================
// Name        : Juicer.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int number_of_oranges = 0;
int max_orange_size = 0;
int max_waste = 0;
int counter = 0; // this will count the amount of waste
int empty_the_box = 0;
int main() {
	cin >> number_of_oranges >> max_orange_size >> max_waste;
	int oranges[number_of_oranges];
	for (int i = 0; i < number_of_oranges; i++) {
		cin >> oranges[i];
	}
	for (int i = 0; i < number_of_oranges; i++) {
		if (oranges[i] > max_orange_size) {
			continue;
		} else if (oranges[i] <= max_orange_size) {
			counter += oranges[i];
			if (counter > max_waste) {
				counter = 0;
				empty_the_box++;
			}
		}
	}
	cout << empty_the_box ;
	return 0;
}
