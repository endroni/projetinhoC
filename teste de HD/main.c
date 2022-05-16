#include <stdio.h>
#include <stdlib.h>

#define RPM 7500


int main() {
	int numeroSerie, velocidade;	
	printf("Informe o numero de serie: \n");
	scanf("%i", &numeroSerie);
	printf("Informe a velocidade atingida: \n");
	scanf("%i", &velocidade);
	
	if (velocidade < RPM){
		printf("REPROVADO NO TESTE");
	}
	return 0;
}