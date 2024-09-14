//============================================================================
// Name        : Anton_and_Danik.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

unsigned int n =0; /*number of games*/
int ANTON =0;
int DANIK =0;
string input_matches ;
int main() {
	cin >> n ;
    cin >>input_matches ;

    for (char i :input_matches){
    	if (i =='A'){
    		ANTON++;
    	}
    	else if(i =='D'){
    		DANIK++;
    	}
    }
    if (ANTON >DANIK){
    	cout<< "Anton";
    }
    else if (DANIK >ANTON){
    	cout<< "Danik";
    }
    else if (DANIK == ANTON){
    	cout<< "Friendship";
    }
	return 0;
}
