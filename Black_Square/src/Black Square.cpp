//============================================================================
// Name        : Black.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
int strip_1 = 0;
int strip_2 = 0;
int strip_3 = 0;
int strip_4 = 0;
string steps ;
int calories = 0 ;
int main() {
	cin >>strip_1;
	cin >>strip_2;
	cin >>strip_3;
	cin >>strip_4;
	cin >> steps ;
	for (size_t i = 0 ; i < steps.size() ; i++){
		if (steps[i]=='1')
		{
			calories+=strip_1;
		}
		else if (steps[i]=='2')
			{
			calories+=strip_2;
			}
		else if (steps[i]=='3')
			{
			calories+=strip_3;
			}
		else if (steps[i]=='4')
			{
			calories+=strip_4;
			}
	}
	cout<<calories;
	return 0;
	}


