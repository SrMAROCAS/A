#include <stdio.h>

int main() {
  float nota1;
  float nota2;

  printf("Digite o valor da primeira nota:\n");
  int deu_certo = scanf("%f", &nota1);
  int nota01_valida = nota1 >= 0.0 && nota1 <= 10.0;

  if (nota01_valida) {
    printf("Digite o valor da segunda nota\n");
    deu_certo =scanf("%f", &nota2);
    int nota02_valida = nota2 >= 0.0 && nota2 <= 10.0;
   if (nota02_valida) {
      float media = 0.4 * nota1 + 0.6 * nota2;
     printf(" A média do aluno é: %.1f\n", media);
    }
    else{  printf("Nota inválida. Informe um valor entre 0 e 10\n");
        }
  }
  else{
    printf("Nota inválida. Informe um valor entre 0 e 10\n");
  }
  return 0;
}