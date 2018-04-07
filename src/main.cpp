#include "Soup.h"

int main(){

	Soup *pot = new Soup();
	Soup *ladle = pot;

	for(int i=0; i<=4; i++){
		pot->addSalt(1);
		ladle->taste();
	}

	return 0;
}
