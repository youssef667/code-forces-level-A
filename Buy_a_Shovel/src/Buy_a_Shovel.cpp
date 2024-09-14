//============================================================================
// Name        : Buy_a_Shovel.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int shovel_price =0 ;
int change =0;
int number_of_shovels = 0;
int main() {
	cin >>shovel_price ;
	cin >> change ;
	int i =1;
//	cout <<(shovel_price*i) %10 << " lol \n";
	while (1){
		if (((shovel_price*i) %10) >change){
			i ++;
		}
		else if ((((shovel_price*i) %10) ==change) || (((shovel_price*i) %10) ==0 ))
		{
			break ;
		}
		else if (((shovel_price*i) %10) <change){
			i++;
		}

	}
	number_of_shovels += i ;
cout <<number_of_shovels ;
	return 0;
}
