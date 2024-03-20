#include <stdio.h>

int main () {
  // Calcule a área de um triângulo.

  float base; 
  float altura;
  
  
  printf("                          \n");
  printf("Infrome o valor da base do triângulo: ");
  int deu_certo = scanf("%f", &base);
  
  printf("Infrome o valor da altura do triângulo: ");
  deu_certo = scanf("%f", &altura);
  
  float area = (base * altura)/2;
  printf("A área do triangulo é: %.2f\n", area); 
  printf("                          \n");
  

  return 0;
}