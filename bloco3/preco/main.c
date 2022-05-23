#include <stdio.h>
#include <stdlib.h>

int main() {
	float preco;
	
	printf("Qual o preco do seu carro? \n");
	scanf("%f", &preco);
	printf("Seu carro custa R$ %f", preco);
	return 0;
}