#include <stdio.h>
#include <math.h>

int main() {
  //calcular a formula de baskara
  int valor_a;
  int valor_b;
  int valor_c;

  printf("Digite o valor de a da sua função: ");
  int deu_certo = scanf("%i", &valor_a);
  printf("Digite o valor de b da sua função: ");
  deu_certo = scanf("%i", &valor_b);
  printf("Digite o valor de c da sua função: ");
  deu_certo = scanf("%i", &valor_c);

  double potencia_b = pow(valor_b, 2);
  double delta = potencia_b - 4 * valor_a * valor_c;
  
  if (delta <= 0.0) {
    printf("Raiz quadrada de delta é nula ou negativa.Sua função não tem X1 ne X2\n"); }
  else {
  double raiz_delta = sqrt(delta);
  float x1 = (-valor_b + raiz_delta) / (2 * valor_a);
  float x2 = (-valor_b - raiz_delta) / (2 * valor_a); 
  
  printf("O valor de X1 na sua sua função é: %f\n", x1 );
  printf("O valor de X2 na sua sua função é: %f\n", x2 );
  }
  return 0;
}