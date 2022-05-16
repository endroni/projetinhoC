#include <stdio.h>
#include <stdlib.h>

int main() {
	int opcao, pedido;
	
	printf("Porcao de 128g: \n");
	printf("1 - Tropeiro \n");
	printf("2 - Macarronada \n");
	printf("3 - Feijoada \n");
	scanf("%i", &opcao);
	
	switch(opcao){
		case 1: 			
			printf("588 calorias");
			break;
		case 2:
			printf("444 calorias");
			break;
		case 3: 
			printf("371 calorias");
			break;
		default:
			printf("Opcao invalida");
	}
	return 0;
}

