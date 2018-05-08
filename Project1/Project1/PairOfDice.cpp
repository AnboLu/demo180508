#include "PairOfDice.h"




//std::random_device rd;
//std::default_random_engine PairOfDice::dre(PairOfDice::rd());

PairOfDice::PairOfDice() : dre(PairOfDice::rd())
{
	
}

int PairOfDice::roll() {

	std::uniform_int_distribution<int> di(1, 6);
	
	int roll1 = di(dre);
	int roll2 = di(dre);

	
	numberOfDoubles =
		(roll1 != roll2 || numberOfDoubles == 3) ?//if already three doubles re-set to zero
		0 :
		numberOfDoubles + 1;


	return roll1 + roll2;
}

bool PairOfDice::isGoToJail() {

	return (numberOfDoubles == 3);




}