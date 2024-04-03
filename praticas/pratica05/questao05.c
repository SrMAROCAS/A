#include <stdio.h>
#include <math.h>
 //Coverter um valor qualquer em Gigabytes para bytes (1GB = 1024^3MB)
int main() {
 int valor;
  
  printf("Digite o seu número a ser convertido: ");
  int certo = scanf("%i", &valor);
  
 double valor_em_bytes = valor * pow(1024, 3);
  printf("O seu número em bytes é: %.f\n", valor_em_bytes);




  return 0;
}