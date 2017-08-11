//Author: Nathan Weber

//Main.c: Main for program "DecisAssist"s

#include <stdio.h>
#include <unistd.h>

#include "include/Listener.h"

//Main Startup
int main() {
	//Define time control
	int cycles = 0;
	while(cycles <= 24000){
		//Processes
		listenforDanger();

		//Time control
		sleep(3);
		cycles++;
	}
	return 0;
}
