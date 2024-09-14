//============================================================================
// Name        : Gravity_Flip.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int n = 0;
int mini = 0;
int temp = 0;
void from_small_to_larg (int *array,int size);
int main() {
	cin >> n;
	int cubs[n - 1];
	for (int i = 0; i < n; i++) {
		cin >> cubs[i];
	}
	from_small_to_larg (cubs,n);

	for (int i = 0; i < n; i++) {
		cout << cubs[i]<<" ";
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


