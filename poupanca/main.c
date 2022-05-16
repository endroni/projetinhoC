#include <stdio.h>
#include <stdlib.h>

int main() {
	const float POUPANCA = 0.006559;
	int meses;
	float deposito, rendimento;
	printf("Digite o valor depositado: ");
	scanf("%f", &deposito);
	printf("Resgate em quantos meses: ");
	scanf("%i", &meses);
	rendimento = (POUPANCA * deposito) * meses;
	printf("Valor depositado R$ %f \n", deposito);
	printf("Meses %i \n", meses);
	printf("Rendimento: R$ %.2f ", rendimento);
	return 0;
}