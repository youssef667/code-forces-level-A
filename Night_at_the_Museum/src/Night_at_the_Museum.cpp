//============================================================================
// Name        : Night_at_the_Museum.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
int clock_wise =0 ;
int anti_clock_wise =0 ;
char pointer = 'a';
string name ;
int distance =0;
int total_distance =0 ;
int main() {
cin >>name ;
for (size_t i =0;i <name.size();i++)
{
	if (pointer == name [i]){

		continue ;
	}
	if (abs(pointer -name[i])<=(26 -abs(pointer -name[i])))
	{
		total_distance+= abs(pointer -name[i]) ;
	}
	else if ((abs(pointer -name[i])>(26 -abs(pointer -name[i]))))
	{
		total_distance+= (26 - abs(pointer -name[i])) ;
	}
	pointer =name[i];
	}
cout <<total_distance;
	return 0;
}

/*
 *                    d = pointer - target k-d =7
                      d= 26- (pointer - target) = 19
     */
