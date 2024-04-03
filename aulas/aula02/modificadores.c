#include <stdio.h> 

int main () {
  signed char caracter_com_sinal; // 1 byte -128 a 127
  unsigned char caracter_sem_sinal; // 1 byte 0 a 255

  signed int inteiro_com_sinal; // 4 bytes -2bi a 2bi
  unsigned int inteiro_sem_sinal; // 4 bytes 0 a 4bi

  short int inteiro_pequeno; // 2 bytes -32768 a 32767
  unsigned short int inteiro_pequeno_sem_sinal; // 2 bytes 0 a 65535

  long int inteiro_grande; // 8 bytes -9hexa a 9hexa
  unsigned long int inteiro_grande_sem_sinal; // 8 bytes 0 a 18hexa

  long double duplo_longo; // 16 bytes -1.2e+4932 a 1.2e+4932

  return 0;
}