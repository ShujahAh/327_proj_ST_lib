/*
 * Smalltalk_Brit.cpp
 *
 *  Created on: Dec 8, 2020
 *      Author: zestra
 */


#include "includes/Smalltalk_Brit.h"
#include "includes/constants.h"

	Smalltalk_Brit::Smalltalk_Brit(int iPerson):Smalltalk(BRIT, iPerson){
		populatePhrases();
	}

	Smalltalk_Brit::~Smalltalk_Brit(void){

	}

	void Smalltalk_Brit::populatePhrases(){
		Smalltalk::mySmallTalk.push_back(BRIT_1);
		Smalltalk::mySmallTalk.push_back(BRIT_2);
		Smalltalk::mySmallTalk.push_back(BRIT_3);
		Smalltalk::mySmallTalk.push_back(BRIT_4);
		Smalltalk::mySmallTalk.push_back(BRIT_5);
		Smalltalk::mySmallTalk.push_back(BRIT_6);
		Smalltalk::mySmallTalk.push_back(BRIT_7);
	}
