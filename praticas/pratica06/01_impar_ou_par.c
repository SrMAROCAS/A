#include <stdio.h>

//Descubra se um número é par ou impar

int main() {
int numero;
  printf("Digite o número: ");
  int deu_certo = scanf("%i", &numero);
  int numero_divisivel_por_2 = numero % 2 == 0;

  if (deu_certo) {
  if (numero_divisivel_por_2) {
    printf("O número %i é par\n", numero);
  } 
   else {
  printf("O número %i é impar\n", numero);
   }
  }
  else { 
  printf("Você não digitou um número. Tente novamente.\n");
    } 
  return 0;
}