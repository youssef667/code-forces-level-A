//============================================================================
// Name        : Sereja_and_Dima.cpp
// Author      : Youssef_Malak
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;
size_t cards_number = 0;
int Sereja_score = 0;
int Dima_score = 0;
int Sereja_turn = 1;
int Dima_turn = 0;
int main() {
	cin >> cards_number;
	std::vector<int> cards (cards_number);

	for (size_t i = 0; i < cards_number; i++) {
		cin >> cards[i];
	}

	for (size_t j = 0; j < cards_number; j++) {

		if (Sereja_turn == 1 && Dima_turn == 0) {
			Dima_turn = 1;
			Sereja_turn = 0;
			if (cards[0] > cards[cards.size() - 1]) {
				Sereja_score += cards[0];

				cards.erase(cards.begin());

			} else if (cards[0] < cards[cards.size() - 1]) {
				Sereja_score += cards[cards.size() - 1];

				cards.erase(cards.end() - 1);

			}
			else if (cards[0] == cards[cards.size() - 1]){
				Sereja_score += cards[cards.size() - 1];
				cards.erase(cards.end() - 1);
			}

		} else if (Sereja_turn == 0 && Dima_turn == 1) {
			Dima_turn = 0;
			Sereja_turn = 1;
			if (cards[0] > cards[cards.size() - 1]) {
				Dima_score += cards[0];
				cards.erase(cards.begin());
			} else if (cards[0] < cards[cards.size() - 1]) {
				Dima_score += cards[cards.size() - 1];
				cards.erase(cards.end() - 1);
			}
			else if (cards[0] == cards[cards.size() - 1]){
				Dima_score += cards[cards.size() - 1];
				cards.erase(cards.end() - 1);
			}
		}
	}
	cout <<Sereja_score <<" " ;
	cout <<Dima_score ;
	return 0;
}
