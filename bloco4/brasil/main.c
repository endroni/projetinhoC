#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	printf("Acentua��o! Como o portugues � diferente n�o � Elis? \n\n");
	printf ("Localidade corrente: %s\n", setlocale(LC_ALL,NULL) );
	return 0;	
}




































