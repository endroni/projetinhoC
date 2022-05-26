#include <stdio.h>

// Declara a fun��o  
double fatorial(int n);

int main(void)
{
  int numero;
  double f;
  
  printf("O programa realiza o calculo fatorial\n");
  printf("Digite um numero: ");
  scanf("%d",&numero);
  
  // Chama a fun��o
  f = fatorial(numero); 
  
  printf("Fatorial de %d = %.0lf",numero,f);
  
  // getch, espera que o usu�rio digite uma tecla e retorna este caractere
  getch(); 
  return 0;
}

double fatorial(int n)
{
  double valorFatorial;
  
  if ( n <= 1 )  // Testa valores positivos
    return (1);
  else
  {    
    valorFatorial = n * fatorial(n - 1);//Chamada recursiva
    return (valorFatorial);
  }
}





















