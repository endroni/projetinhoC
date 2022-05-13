#include <stdio.h>
#include <stdlib.h>

int main() {
	int humidade = 25;
	
	if (humidade < 10){
		printf("Ligar esguichos!");
	} else if (humidade < 20 ) {
		printf("Desligar esguichos!");
	} else {
		printf("Abrir Janelas!");
	}
	return 0;
}
