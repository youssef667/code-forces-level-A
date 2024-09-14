//============================================================================
// Name        : Carrot_Cakes.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int number_of_needed_cakes = 0;
int time_needed_to_bake_cakes_in_oven = 0;
int number_of_cakes_baked_at_the_same_time = 0;
int time_needed_to_build_second_oven = 0;
int time_one_oven = 0;
int time_with_two_ovens = 0;
int i = 0;
int two_ovens(void);
int one_ovens(void);
int main() {
	cin >> number_of_needed_cakes >> time_needed_to_bake_cakes_in_oven
			>> number_of_cakes_baked_at_the_same_time
			>> time_needed_to_build_second_oven;

	time_one_oven = one_ovens();
	time_with_two_ovens =two_ovens() ;
//cout << time_with_two_ovens ;
	if (time_one_oven <= time_with_two_ovens) {
		cout << "NO";
	} else if (time_one_oven > time_with_two_ovens) {
		cout << "YES";
	}


	return 0;
}

int two_ovens(void) {
	int time_first_oven = 0;
	int time_second_oven = time_needed_to_build_second_oven;

	int helper_2 = number_of_needed_cakes;
	while (1) {
		if (helper_2 <= 0) {
			break;
		}
		helper_2 -= number_of_cakes_baked_at_the_same_time;
		time_first_oven += time_needed_to_bake_cakes_in_oven;

		i += time_needed_to_bake_cakes_in_oven;
		if (i < time_needed_to_build_second_oven) {

		} else if (i >= time_needed_to_build_second_oven) {
			if (helper_2 <= 0) {
				break;
			}
			helper_2 -= number_of_cakes_baked_at_the_same_time;
			time_second_oven += time_needed_to_bake_cakes_in_oven;
		}

	}
//	cout << time_second_oven << "second oven \n";
//	cout << time_first_oven << "first oven \n";
	if (time_second_oven > time_first_oven) {
		return time_second_oven;
	} else if (time_second_oven < time_first_oven) {
		return time_first_oven;
	} else if (time_second_oven == time_first_oven) {
		return time_first_oven;
	}
	return 0;
}
int one_ovens(void){
	int time =0 ;
	int helper = number_of_needed_cakes;
		while (1) {
			if (helper <= 0) {
				break;
			}
			helper -= number_of_cakes_baked_at_the_same_time;
			time += time_needed_to_bake_cakes_in_oven;
		}
		return time;
}
