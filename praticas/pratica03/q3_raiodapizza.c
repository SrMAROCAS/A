#include <stdio.h>

int main () {

  float pi = 3.14;
  float raio = 0.0;
  printf("                          \n");
  printf("Infrome o valor do raio da pizza: ");
  int deu_certo = scanf("%f", &raio);
  float area_da_pizza = pi*raio*raio;
  printf("A área da pizza é: %.2f\n", area_da_pizza);
  printf("                          \n");
  
  return 0;
}