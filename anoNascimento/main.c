#include <stdio.h>
#include <stdlib.h>

int main() {
	int idade, ano;
	
	printf("Ano de nascimento: ");
	scanf("%i", &ano);
	idade = 2022 - ano;
	system("cls");
	printf("Voce tem %i anos de idade.", idade);
	
	return 0;
}





























