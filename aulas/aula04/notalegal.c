#include <stdio.h>

int main() {
  char nome [31];
  int quantidade;
  float valor;

  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);

  printf("Entre com a quantidade do produto: ");
  deu_certo = scanf( "%i", &quantidade);

  printf("Entre com o valor do produto: ");
   deu_certo = scanf( "%f", &valor);

  printf("                                    \n");
  printf("                                    \n");
  printf ("\x1b[36m-----------------------------------\n");
  printf ("         N O T A L E G A L                  \n");
  printf ("-----------------------------------\x1b[0m\n");
  printf ("Item                      Qtd VALOR\n");
  printf ("%-24s  %03i %5.2f \n" , nome, quantidade, valor);
  printf ("-----------------------------------\n");
  printf ("Total: %28.2f\n"   , 30.00);
  printf("                                    \n");
  printf("                                    \n");
  
  return 0;
}