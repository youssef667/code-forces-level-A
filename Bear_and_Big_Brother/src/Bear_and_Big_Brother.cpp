//============================================================================
// Name        : Bear_and_Big_Brother.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int time =0;
int a=0; //Limak
int b=0; //Bob
int main() {
	cin >> a >> b;
	while ((b>a) || (b==a)){
		b=b*2;
		a=a*3;
		++time;
	}
cout << time ;
	return 0;
}
