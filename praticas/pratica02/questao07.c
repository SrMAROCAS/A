#include <stdio.h>

int main() {

  float valor_hora_de_trabalho = 150.0f;
  float total_de_horas_trabalhadas = 100.0f;

  //float serve para trabalhar com variáveis
  //const floatvalores invariáveis

  const float IR = 0.25f;
  const float INSS = 0.11f;

  float salario_bruto = valor_hora_de_trabalho * total_de_horas_trabalhadas;
  float imposto_de_renda = salario_bruto * IR;
  float imposto_de_inss = salario_bruto * INSS;
  float salario_liquido = salario_bruto - imposto_de_renda - imposto_de_inss;
  

  printf ("-------------------------------------------------------\n");
  printf ("               C O N T R A C H E Q U E           \n");
  printf ("-------------------------------------------------------\n");
  
  printf ("Salário bruto: r$ \x1b[34m %36.2f \x1b[0m\n", salario_bruto);
  printf ("Imposto de renda: R$ %34.2f\n", imposto_de_renda);
  printf ("Imposto de inss: R$ %35.2f\n",  imposto_de_inss);
  printf ("Salário líquido: R$ \x1b[34m %34.2f \x1b[0m\n",  salario_liquido);


  return 0;
}