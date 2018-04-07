#include "Soup.h"
#include "stdio.h"

void Soup::addSalt(int s){
	printf("Add Salt %d\n", s);
	salt += s;
}

void Soup::taste(){
	printf("Taste, Saltiness = %d\n", salt);
}