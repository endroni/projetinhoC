#include <stdio.h>


int main() {
	// Declarando uma constante
	const double IOF = 6.38/100;
	double valorProduto = 100;
	double totalProduto = valorProduto + (valorProduto * IOF);
	
	printf("%f", totalProduto);
	return 0;
}



















