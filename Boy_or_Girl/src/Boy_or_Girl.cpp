//============================================================================
// Name        : Boy_or_Girl.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

string name ;
void number_of_char(void);



int main() {
	number_of_char();
if(name.length()%2)
{
	cout <<"IGNORE HIM!";}
else
{
	cout <<"CHAT WITH HER!";}
	return 0;
}
void number_of_char(void){
	cin >> name ;
	char cart =0 ;
	size_t i  = 0;
	while (i < name.length()) {
		cart =name[i];
		size_t j = i+1;
		while (j < name.length()) {
			if (cart == name[j] ){
				name.erase(j, 1);

			}
			else {++j;
			}
		}
	++i;
	}

}
