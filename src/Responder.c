//Responder.c: Responds to all Threatening Environments

#include <windows.h>

//Response Method
void respond(){
	//Count Beeps
	int times = 0;

	//Beep 4 Times
	while(times < 4){
		Beep(850, 1500);
		times++;
		sleep(2);
	}
}
