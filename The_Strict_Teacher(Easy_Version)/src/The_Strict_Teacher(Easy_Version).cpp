//============================================================================
// Name        : The_Strict_Teacher(Easy_Version).cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() { //2 teachers and 1 query
	int number_of_tests = 0 ;

	int number_of_cells =0 ;
	int number_of_teachers =0;
	int student_query =0;
	int number_of_moves = 0 ;
	int david_moves =0 ;
	int teacher_moves =0 ;
	cin >> number_of_tests ;
	for (int i =0 ; i < number_of_tests ; i++){
		cin >> number_of_cells ;
		cin >> number_of_teachers ;
		cin >> student_query ;
        int teacher_positions [2];
        for (int j =0 ; j <number_of_teachers ; j ++){
        	cin >> teacher_positions [j];
        }
        int David_cell_number =0;
        cin >>David_cell_number ;
      if (David_cell_number < teacher_positions[0] &David_cell_number < teacher_positions[1] )
      {
    	  david_moves =  David_cell_number -1;
      }
      else if (David_cell_number > teacher_positions[0] &David_cell_number > teacher_positions[1]){
    	  david_moves =  number_of_cells -David_cell_number;
      }
      else {
    	  david_moves =0 ;
      }
      if (abs (teacher_positions[0]-David_cell_number)> abs (teacher_positions[1]-David_cell_number)){
    	  teacher_moves
      }
	}

	return 0;
}
