//============================================================================
// Name        : Team_Olympiad.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int number_of_kids = 0;
	int one = 0;
	int two = 0;
	int three = 0;
	cin >> number_of_kids;
	int number[number_of_kids];
	for (int i = 0; i < number_of_kids; i++) {
		cin >> number[i];
	}
	for (int i = 0; i < number_of_kids; i++) {
		if (number[i] == 1) {
			one++;
		} else if (number[i] == 2) {
			two++;
		} else if (number[i] == 3) {
			three++;
		}

	}
	int number_of_teams = min(one, std::min(two, three));
	cout << number_of_teams << "\n";
	int ones [one];
	int twos [two];
	int threes [three];
	int c =0;
	int b =0 ;
	int d =0 ;
	for (int i = 0; i < number_of_kids; i++) {
			if (number[i] == 1) {
				ones[c] =i+1;
				c++;
			} else if (number[i] == 2) {
				twos[b] = i +1;
				b++ ;
			} else if (number[i] == 3) {
				threes[d] = i+1;
				d++ ;
			}

		}

if (number_of_teams != 0){
	for(int c =0 ; c < number_of_teams ; c++){
		cout << ones[c] << " " << twos[c] << " " << threes[c] << "\n";
	}

}
	return 0;
}
