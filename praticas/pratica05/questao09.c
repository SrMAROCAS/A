#include <stdio.h>
#include <math.h>

int main() {
  //Faça uma idade expressa em anos, meses e dias para um valor em dias

  int anos;
  int meses;
  int dias;

  printf("Digite quantos anos você tem:");
  int certo = scanf("%i", &anos);
  printf("Digite quantos meses você tem:");
  certo = scanf("%i", &meses);
  printf("Digite quantos dias você tem:");
  certo = scanf("%i" , &dias);
  int idade_em_dias = (anos * 365) + (meses * 30) + dias;
  printf("A sua idade em dias é: %i\n", idade_em_dias);

  return 0;
}