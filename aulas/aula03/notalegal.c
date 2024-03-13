#include <stdio.h>

int main() {
  printf ("\x1b[36m-----------------------------------\n");
  printf ("         N O T A L E G A L                  \n");
  printf ("-----------------------------------\x1b[0m\n");
  printf ("Item                      Qtd VALOR\n");
  printf ("\x1b[34m %-23s \x1b[0m %03i %5.2f \n" , "Banana nanica", 2, 20.00);
  printf ("\x1b[34m %-2s \x1b[0m %03i %5.2f \n" , "Coca cola", 1, 10.00);
  printf ("\x1b[34m %-23s \x1b[0m %03i %5.2f \n" , "Laranja lima", 1, 18.00);
  printf ("\x1b[36m-----------------------------------\x1b[0m\n");
  printf ("Total: %28.2f\n"   , 30.00);

// padrão da formatação é imprimir tudo para a direita (por isso colocamos negativos para alinhar a direita)
// string - %s   
//Ao invés de:
//printf ("Banana nanica           2     20.00\n");
//printf ("Coca cola               1     10.00\n");
// printf ("Laranja lima           1     18.00\n");
// printf ("----------------------------------\n");
// printf ("Total                        30.00\n");
//Fazer o que foi feito em cima
  
  return 0;
}