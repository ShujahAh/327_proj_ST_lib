//
/*
 * Functions.cpp
 *
 *  Created on: Nov 5, 2017
 *      Author: Ahmad Shujah
 */
#include <iostream>
#include <memory>

#include "./includes/Functions.h"
#include "./includes/Smalltalk_American.h"
#include "./includes/ST_American_DonutEnthusiest.h"
#include "./includes/Smalltalk_Brit.h"
#include "./includes/Watch.h"
#include "./includes/constants.h"

//create a vector with appropriate numbers of Smalltalk_Brit,Smalltalk_American and ST_American_DonutEnthusiest
//objects using unique pointers.  Since we are using c++11 returning this vector by value is fine since the 
//compiler will move the vector on return rather than recreate it (this means there is no copy penalty)
std::vector<std::unique_ptr<Smalltalk>> getPeople(int numBrit,
		int numAmerican, int numbAmericanDonutEnthusiest,
		int numWatches) {

	//create a vector to hold SmallTalk unique pointers
	std::vector<std::unique_ptr<Smalltalk>> lis;

	//add brits to vector
	for (int j = 1; j <= numBrit; j++){
		lis.push_back(std::unique_ptr<Smalltalk>(new Smalltalk_Brit(j)));


	}

	//add americans  to vector
	for (int i = 1; i <= numAmerican; i++){
		lis.push_back(std::unique_ptr<Smalltalk>(new Smalltalk_American(i)));
	}

	//add american donut enthusiest  to vector
	for (int i = 1; i <= numbAmericanDonutEnthusiest; i++){
		lis.push_back(std::unique_ptr<Smalltalk>(new ST_American_DonutEnthusiest(i)));

	}

	//Checks to see if there are more watches then people
	if (numWatches > numBrit + numAmerican + numbAmericanDonutEnthusiest){
			numWatches = numBrit + numAmerican + numbAmericanDonutEnthusiest;
		}

	//then give the watches away to first NUM_WATCHES people in the vector
	for (auto &x: lis){
			std::unique_ptr<Watch> pWach = std::unique_ptr<Watch>(new Watch());
			if(numWatches > 0){
				x->giveWatch(pWach);
			}
			numWatches -=1;
	}


	//return your vector
	return lis;
}
