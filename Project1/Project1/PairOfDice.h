//
//
//


#pragma once

#include <iostream>
#include <random>



class PairOfDice
{
public:
	PairOfDice();
	

	int roll();
	bool isGoToJail();






private:

	int numberOfDoubles;	
	//static 
		std::random_device rd;
	//static 
		std::default_random_engine dre;
};

