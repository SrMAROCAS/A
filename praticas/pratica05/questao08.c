#include <stdio.h>
#include <math.h>
//Converter um valor em segundos para o valor em horas, minutos e segundos
int main() {
  int tempo_segundos;
  
  printf ("Escreva o tempo em segundos: ");
  int certo = scanf ("%i", &tempo_segundos);
  

  int horas = tempo_segundos / 3600;
  int resto = tempo_segundos % 3600;
  int minutos = resto / 60;
  int segundos = resto % 60;
 
  
  printf("O tempo em horas é: %i\n", horas);
  printf("O tempo em minutos é: %i\n", minutos);
  printf("O tempo em segundos é: %i\n", segundos);
 
  return 0;
} 