//
//
//


#include <iostream>
#include "PairOfDice.h"

int main() {


	std::cout << "hi\n";

	PairOfDice dice;

	for (int i = 0; i < 1000; i++) {
		std::cout << dice.roll() << " ";
		if (dice.isGoToJail()) {
		
			std::cout << "\n\nGoToJail\n\n";
		}
	}








	getchar();


}