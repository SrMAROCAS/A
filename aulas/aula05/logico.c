#include <stdio.h>
int main() {
  
  int numero;

  printf("Entre com um numero: ");
  int deu_certo = scanf("%i", &numero);

  // 0 < X < 10 -> 0 < x E X < 10 ("E" é o operador lógico &&)

  int maior_que_0_e_menor_que_10 = numero > 0 && numero < 10;
  printf("O numero é maior que 0 e menor que 10? %i\n", maior_que_0_e_menor_que_10);

  //X < 0, X > 10 -> X < 0 OU X > 10 ("OU" é o operador lógico || )
  
  int menor_que_0_ou_maior_que_10 = numero < 0 || numero > 10;
  printf("O numero é menor que 0 ou maior que 10? %i\n", menor_que_0_ou_maior_que_10);

  // x não > 0 (!) inverte
  int nao_maior_que_0 = !(numero > 0);
  printf("O número não é maior que 0? %i\n" , nao_maior_que_0);

  return 0;
}