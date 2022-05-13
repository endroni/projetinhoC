#include <stdio.h>
#include <stdlib.h>

int main() {
	int departamento;
	
	printf("Selecione:\n\n");
	printf("1 - Para feminino \n");
	printf("2 - Para masculino \n");
	printf("3 - Para infantil \n\n");
	printf("Departamento: ");
	scanf("%i", &departamento);

	system("cls");
	
	switch (departamento) {
		case 1:
			printf("Feminino");
			break;
		case 2:
			printf("Masculino");
			break;
		case 3: 
			printf("Infantil");
			break;
		default:
			printf("Opção Inválida!");
	}
	return 0;
}



