#include <stdio.h>

//declaração da constante
#define ISS 0.025;

int main(void)
{
    float valorServico = 100;  
    float imposto = valorServico * ISS;
    
    printf("Imposto: R$ %.2f", imposto );
  
  return 0;
}










































