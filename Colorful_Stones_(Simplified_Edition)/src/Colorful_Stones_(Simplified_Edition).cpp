//============================================================================
// Name        : Colorful_Stones_(Simplified_Edition).cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
string stone;
string instruction;
int main() {
	cin >> stone;
	cin >> instruction;
	int counter = 0;
	for (size_t i = 0; i < stone.size(); i++) {
		for (size_t j = 0; j < instruction.size(); j++) {
			if (stone[i] == instruction[j]) {
				counter++;
                i++;
                continue ;
			} else if (stone[i] != instruction[j]) {

                //j-- ;
               // i--;
				continue ;
			}
          if (i >=stone.size() ){
        	  break;
          }
		}
		break;
	}
   cout << counter +1 ;
	return 0;
}
