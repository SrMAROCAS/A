#include <stdio.h>

int main () {
  
  float media_1 = 0.4;
  float media_2 = 0.6;
  float a1; 
  float a2;

  printf("                          \n");
  printf("Infrome a nota do primeiro bimestre:");
  int deu_certo = scanf("%f", &a1);
  float media_1f= a1*media_1;
  printf("Sua média do primeiro bimestre é: %.2f\n" , media_1f);

  printf("Infrome a nota do segundo bimestre: ");
  deu_certo = scanf("%f", &a2);
  float media_2f = a2*media_2;
  printf("Sua média do segundo bimestre é: %.2f\n" , media_2f);

  float media_final = media_1f + media_2f;
  printf("A nota final é: %.2f\n" , media_final);
  
  printf("                          \n");
   return 0;
  }