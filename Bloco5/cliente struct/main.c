#include <stdio.h>
#include <string.h>

// struct cliente
struct cliente{
	char nome[10];
	int anoNascimento;
};

int main() {
	
	// Criando a vari�vel do tipo cliente
	struct cliente c1;
	
	// Atribuindo valores aos membros
	strcpy(c1.nome, "Rubem");
	c1.anoNascimento = 1983;
	
	// Sa�da de dados
	printf("Cliente: %s\n", c1.nome);
	printf("Idade: %d", 2022 - c1.anoNascimento);
	
	return 0;
}

































