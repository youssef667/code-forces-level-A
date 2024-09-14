//============================================================================
// Name        : Vanya_and_Fence.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : Your copyright notice
// Description :  C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*first inputs*/
int h =0;/*fence height*/
int n =0 ;/*the number of friends */

/*****************/
int minimum_possible_valid_width =0;
int main() {
	cin >> n >> h;
    int freind_heights[n];  // Create a vector of size n to store the numbers
	for(int i =0 ;i< n;i++){
		cin >> freind_heights[i];
	}

	for(int i =0 ; i<n ; i++){
		if(freind_heights[i] <= h){
			minimum_possible_valid_width++;
		}
		else if(freind_heights[i] > h){
			minimum_possible_valid_width =minimum_possible_valid_width +2;
		}

	}
	cout <<minimum_possible_valid_width <<" ";
	return 0;

}
