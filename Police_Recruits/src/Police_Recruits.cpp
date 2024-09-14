//============================================================================
// Name        : Police_Recruits.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int event_number;
int unsolved_crime = 0;
int police_memnber =0;
int main() {
	cin >>event_number;
	int events[event_number];
	for (int i = 0; i < event_number; i++) {
		cin >> events[i];
	}
	for (int j = 0; j < event_number; j++) {
		//if (j == 0) {
			if (events[j] < 0) {
            if (police_memnber > (-events[j]))
            {
            	police_memnber -= (-events[j]);

            }
            else if (police_memnber <= (-events[j])){
            	unsolved_crime = unsolved_crime + (-events[j]) -police_memnber ;
            	police_memnber =0;

            }
			}
			else if (events[j] > 0) {
				police_memnber +=events[j] ;
				//continue ;
			}
		}
     cout <<(unsolved_crime);
	//}
	return 0;
}
/*	if (police_memnber < (-events[j])){
				police_memnber-=events[j];
				unsolved_crime = unsolved_crime+(-1*events[j]) - police_memnber;
				}
				else if ((-events[j]) <police_memnber){
					unsolved_crime =0;
					police_memnber-=events[j];
				}*/
