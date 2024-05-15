#include <stdio.h>
int main (){ 
  int numero = 1;
  int maior = 0;
  int menor = 0;
  
  while(numero != 0) {
    printf("Digite um número inteiro:\n" );
    printf("aperte 0 para sair\n");
    int deu_certo = scanf("%i", &numero);
    if (deu_certo) {
      if (numero > maior) {
        maior = numero;
      }
      if (numero < menor) { 
        menor = numero;
      }
    } else {
      getchar ();
      printf("Número inválido. Tente novamente.\n");
    }
  }
  printf("O maior número é %i enquanto o menor número é %i\n", maior, menor);

return 0;
}