#include <stdio.h>
#include <math.h>
//Converter um valor em segundos para o valor em horas, minutos e segundos
int main() {
  int tempo_segundos;
  int horas;
  int minutos;
  int segundos;
  
  printf ("Escreva o tempo em segundos: ");
  int certo = scanf ("%i", &tempo_segundos);
  
  float horas = tempo_segundos / 3600;
  float minutos = (tempo_segundos % 3600) / 60;
  float segundos = (tempo_segundos % 3600) % 60;
  



  
  return 0;
}