#include <stdio.h>

int main(){
  int n;
  long int fatorial = 1;
  
  printf("Calculo do Fatorial (n!)\n\n");
  printf("Informe um número maior que 0: ");
  int deu_certo = scanf("%i", &n);
  int numero_valido = n >= 0;

  if (numero_valido && n) {
    printf("%i! = ", n);
  for (int i = n; i > 1; i--){
    fatorial = fatorial * i;
    printf("%i x" , i);
  }
    printf("1 = %li\n", fatorial);
  } else {
    printf("Número invalido!\n");
  }
    
return 0;
}