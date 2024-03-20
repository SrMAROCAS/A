//Ler 3 números reais e mostrar a média aritmética destes números. 

#include <stdio.h>

int main () {

  float n1;
  float n2;
  float n3;
  

  printf("                          \n");
  printf("Infrome o primeiro número: ");
  int deu_certo = scanf("%f", &n1);
  printf("Infrome o segundo número:  ");
  deu_certo = scanf("%f", &n2);
  printf("Infrome o primeiro número: ");
  deu_certo = scanf("%f", &n3);

  float media = (n1 + n2 + n3)/3;
  printf("A média aritmética é: %.2f\n", media);
   
return 0;
}