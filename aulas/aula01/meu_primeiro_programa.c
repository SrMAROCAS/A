#include <stdio.h>

int main(){
 
  float pi = 3.15;
  float raio = 0.0;
  printf("informe o valor do raio da pizza: ");
  scanf("%f", &raio);
  float area_da_pizza = pi * (raio * raio);
   printf("A area da pizza é: %f\n", area_da_pizza);
  
  return 0;
}
