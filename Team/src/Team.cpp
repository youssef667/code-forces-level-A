//============================================================================
// Name        : Team.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int n =0 ;//number of problems
int counter =0 ;
int question_solved =0;
int helper =0;
int main() {
	cin >> n ;
    int freind[n][3];  // Create a vector of size n to store the numbers
    for(int i =0 ;i< n;i++){
    	for (int j =0 ;j< 3;j++){
 		cin >> freind[i][j];
    	}
 	}

    for(int i =0 ;i <n+1;i++){

	for (int j =0 ;j<3;j++){
		helper =freind[i][j];
		if (helper==1)
		{
			counter++ ;
		}

	}
	if (counter > 1)
			{
		 ++ question_solved ;
			}
	counter =0 ;
	}
   cout << question_solved ;
	return 0;
}
