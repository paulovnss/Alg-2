#include <stdio.h>

typedef struct notasaluno {
  char nome[50]; // Alterado para armazenar o nome como uma string
  int n1;
  int n2;
  int n3;
} Aluno;

int main() {
  Aluno aluno;

  printf("Digite o nome do aluno: ");
  scanf("%s", aluno.nome); // Corrigido para ler uma string

  printf("Digite as notas do aluno: ");
  scanf("%d %d %d", &aluno.n1, &aluno.n2, &aluno.n3);

  printf("Nome do Aluno: %s\n", aluno.nome); // Alterado para %s para imprimir a string completa
  printf("Primeira nota: %d\n", aluno.n1);
  printf("Segunda nota: %d\n", aluno.n2);
  printf("Terceira nota: %d\n", aluno.n3);

  return 0;
}
