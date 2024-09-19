//============================================================================
// Name        : Helpful_Maths.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
 string input ;
 getline(std::cin, input);
 for (int i =0 ; i < input.size(); i++){
	 char helper  ;
	 if (input[i] == '+'){
		 continue ;
	 }
	 else {
		 for (int j =i ; j < input.size(); j++){
			 if (input[j] == '+'){
				 continue ;
			 }
			 if (input [i] > input[j]){
				 helper = input [i] ;
				 input [i] = input[j] ;
				 input[j] = helper ;
			 }
		 }
	 }
 }
cout << input ;
	return 0;
}
