//
//
//


#include <iostream>
#include "PairOfDice.h"

int main() {


	std::cout << "hi\n";

	PairOfDice dice;

	for (int i = 0; i < 100; i++) {
		std::cout << dice.roll() << " ";
		if (dice.isGoToJail()) {
		
			std::cout << "\nGoToJail\n";
		}
	}








	getchar();


}