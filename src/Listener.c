//Listener.c: Listen to all input and processes it

#include <string.h>
#include <stdio.h>

#include "include/Responder.h"
#include "include/Listener.h"

//Main method
void listenforDanger(){
	//Process
	inputSurroundings();
	int threat = scanWords();

	//Register Threat Level
	if(threat >= 2)
		respond();
}

//Translate Audio to Word String
void inputSurroundings(){
	//Get File
	FILE *file;
	file = fopen("translatedSurroundings.txt", "r");

	//Init Line & Input
	char word[0];

	//Write each Line to a Char Array
	int arrayIndex = 0;
	while(fgets( word, 0, file) != NULL){
		input[arrayIndex] = word;
		arrayIndex++;
	}

	//Close and Clear Text File
	fopen("translatedSurroundings.txt", "w");
	fclose("translatedSurroundings.txt");
}

int scanWords(){
	//Define input & resulting variables
	int threatLevel = 0;

	//Cycle through Words
	for(int i = 0; i < 40; i++){
		//Process current Word
		char scanWord = input[i];

		//Look for the current Word to Match any Unwanted Words
		for(int i2 = 0; i2 < 1; i2++){
			//Process current Unwanted Word
			char scanUnwantedWord = unwantedWords[i2];
			//Check
			if(scanWord == scanUnwantedWord)
				threatLevel++;
		}
	}
		return threatLevel;
}
