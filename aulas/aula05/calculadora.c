#include <stdio.h>
#include <math.h>

int main() {
  int numero1;
  int numero2;
  
  printf("Digite o primeiro número: ");
  int deu_certo = scanf("%i", &numero1);

  printf("Digite o segundo número: ");
  deu_certo = scanf("%i", &numero2);
  
  int soma = numero1 + numero2;
  int subtracao = numero1 - numero2;
  int multiplicacao = numero1 * numero2;
  float dividir = 1.0f * numero1 / numero2; //conversão implicita

  printf("A soma é: %i\n", soma);
  printf("A subtração é: %i\n", subtracao);
  printf("A multiplicação é: %i\n", multiplicacao);
  printf("A divisão é: %f\n", dividir);

  int resto = numero1 % numero2;
  printf("O reto da divisão é %i\n", resto);

  //numero01 = numero01 + 1;

  numero1++;
  ++numero1;

  printf("O incrmento de primeiro número é: %i\n", numero1++);
  printf("O incremento do primeiro número é: %i\n", ++numero1);

  //numero01 = numero01 - 1;
  //decremento

  printf("O decremento do primeiro número é: %i\n", numero1--);
  printf("O decremento do primeiro número é: %i\n", --numero1);

  double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro número é: %.4f\n" , raiz_quadrada);
  double potencia = pow(numero1, 4); //numero1^4
  printf("A quarta potencia do primeiro número é: %.4f\n" , potencia);
  double logaritmo = log2(numero1);
  printf("O logaritmo do primeiro número na base 2 é: %.3f\n" , logaritmo);
  const double PI = 3.1416;
  double seno = sin(numero1 * (PI / 180)); //angulo tem que ser espresso em radiano, não em graus; ou seja, * PI/180
  printf("O seno do primeiro número é: %.4f\n" , seno);
  
  return 0;
}