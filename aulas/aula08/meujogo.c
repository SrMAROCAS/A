#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;

  do {
    int deu_certo = system("clear");
    printf("MEU JOGO\n");
    printf("1 - Jogar\n");
    printf("2 - Resultado\n");
    printf("3 - Ajuda\n");
    printf("4 - Sair\n");
    printf("Escolha uma opção => ");
    deu_certo = scanf("%i", &opcao);
    if (!deu_certo) opcao = 0;
      printf("Opção inválida\n"); 
      continue;
    }
    while (getchar() != '\n'); // limpa o buffer do teclado

    switch (opcao) {
      case 1:{
         char nome[31];
         printf("Digite o nome do jogador: ");
         deu_certo = scanf("%[^\n]s", nome);
         while (getchar() != '\n');
         printf("Olá %s\n", nome);
         printf("pressione ENTER para iniciar");
         getchar();
        break;
      }
      case 2:{
        deu_certo = system("clear");
        printf("Resultado:\n");
        printf("Primeiro lugar - Jogador - 1000 pontos\n");
        printf("Segundo lugar - Jogador - 500 pontos\n");
        printf("Terceiro lugar - Jogador- 250 pontos\n");
        printf("Quarto lugar -
Jogador - 100 pontos\n");
        printf("Quinto lugar - Jogador - 50 pontos\n");
        printf("Pressione ENTER para voltar\n");
        getchar();

        break;
    }
      case 3: break;
      case 4: break;

      default: 
        opcao = 0;
        printf("Opção inválida!, Pressione ENTER para continuar\n");
        getchar();
    }
  } while (opcao !=4);

  return 0;
}