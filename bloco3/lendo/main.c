#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	char cliente[10];
	printf("Informe seu nome: ");
	scanf("%s", &cliente);
	printf("Ol� %s",cliente);
	
	return 0;
}
