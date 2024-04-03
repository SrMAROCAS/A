#include <stdio.h>
#include <math.h>

int main() {
  //Fazer a decomposição de um número 

  int numero;
  
  printf("Digite o seu número até em milhar: ");
  int certo = scanf("%i", &numero);
  int milhar = numero / 1000;
  int centena = (numero % 1000) / 100;
  int dezena = (numero % 100) / 10;
  int unidade = (numero % 10);
  printf("O seu número é composto por:\n %i milhar\n %i centena\n %i dezena\n %i unidade\n" , milhar, centena, dezena, unidade);

  return 0;
}