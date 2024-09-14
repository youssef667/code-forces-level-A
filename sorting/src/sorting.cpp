//============================================================================
// Name        : sorting.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void from_small_to_larg (int *array,int size);
int main() {
int list [6] = {1,18,3,19,6,200};
from_small_to_larg(list ,6);
for(int i =0 ; i <6 ; i++){
	cout << list[i]<<"  ";
}
return 0;
}

void from_small_to_larg (int *array,int size){
	int  temp ;
	for (int i =0;i < size ; i++){

		for (int j =0 ; j < size ; j++){
			if (array[i]<array[j]){
				temp = array[i];
				array[i]= array[j];
				array[j]=temp;
			}
		}
	}
}
