//============================================================================
// Name        : Anton_and_Letters.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <set>
using namespace std;
string letters;
int counter = 0;
int main() {
	 // Input string from the user
	    string letter ;
	    getline(std::cin, letter);


	    bool found[127] = {false};  // all 127 possible values
	    int unique_count = 0;


	    for (char i : letter) {
	        // If the letter has not been found yet, mark it as found and increment the count
	    	if (isalpha(i)) {
	    	if (!found[i]) {
	            found[i] = true;
	            unique_count++;
	          //  cout << i ;
	        }
	    }
	    }
	   cout  << unique_count ;

	    return 0;
}
