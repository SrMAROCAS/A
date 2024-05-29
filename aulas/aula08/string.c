#include <stdio.h>
#include <string.h>

int main() {         
  char nome[31];

  printf("Entre com o seu nome: ");
  int deu_certo = scanf("%[^\n]s", nome); //sempre colocar o [^\n]s quando houver espaço

  printf("Olá %s!\n", nome);

  char primeiro_nome[21];
  char ultimo_nome[21];

  strcpy(primeiro_nome, "Bianca"); //primeiro_nome = "Bianca"
  strcpy(ultimo_nome, "Lopes"); //ultimo_nome = "Lopes"

  strcpy(nome, primeiro_nome);
  strcat(nome, ultimo_nome); //nome = primeiro_nome + ultimo_nome

  int tamanho = strlen(nome);
  printf("Seu nome tem %i caracteres\n", tamanho);

  printf("As strings são iguais? %i\n", strcmp(primeiro_nome, ultimo_nome)); // == (comparar se os nomes são iguais)

  return 0;
}