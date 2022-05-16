#include <stdio.h>
#include <stdlib.h>

int main() {
	int jogo;
	printf("Escolha um jogo \n");
	printf("1 - Sonic\n");
	printf("2 - Street Fighter\n");
	printf("3 - Super Mario Bros\n");
	printf("9 - Sair do jogo\n");
	scanf("%i", &jogo);
	
	switch(jogo){
		case 1: 
			printf("SEGA");
			break;
		case 2: 
			printf("CAPCOM");
			break;
		case 3: 
			printf("NINTENDO");
		break;
		case 9:
			printf("SAIR DO CONSOLE");
			break;
		default:
			printf("Opcao invalida!");
	}	
	return 0;
}

