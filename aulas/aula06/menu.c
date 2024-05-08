#include <stdio.h>

int main(){
 char opçao;

  printf("  MENU PRINCIPAL  \n");
  printf(" 1 - Consulte saldo:\n");
  printf(" 2 - Fazer recarga:\n");
  printf(" 3- Listar recados\n");
  printf(" 4- Ligaçõe:feitas\n");
  printf(" 5- Sair\n");
  printf(" Escolha uma opção =>\n ");
  printf("\n ");
  int certo = scanf ("%c", &opçao);

  switch(opçao) { 
    case '1': 
       printf("\n ");
      printf("Seu saldo é de R$ 10.00\n"); break; 
    case '2': {
      float valor;
      printf("\n ");
      printf("Informe o valor da recarga: ");
      certo = scanf("%f", &valor);
      printf("Valor recebido\n");
      break;
    }
    case '3': 
      printf("\n ");
      printf ("Você não tem recados \n"); break;
    case '4': 
    printf("\n ");
    printf("(61)99785-5457\n");
    printf("(61)3556-8765\n");
    printf("(61)98215-6215\n");
    printf("(61)99566-5425\n");
    break;
    case '5':  
      printf("\n ");
      printf("Saindo...\n"); break;
    default: printf("Opção inválida. Tente novamente!\n");
      }
  
  return 0;
}
  