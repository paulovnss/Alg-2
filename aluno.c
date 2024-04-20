#include <stdio.h>
#include <string.h>

typedef struct Alunos {
    char nome[50];
    int matricula;
    float coeficiente;
}aluno;

void ordenar(aluno alunos[], int tamanho) {
    int i, j;
    aluno chave;
    for (i = 1; i < tamanho; i++) {
        chave = alunos[i];
        j = i - 1;
        while (j >= 0 && alunos[j].coeficiente < chave.coeficiente) {
            alunos[j + 1] = alunos[j];
            j = j - 1;
        }
        alunos[j + 1] = chave;
    }
}

int main() {
    aluno alunos[10];

    printf("Dados dos alunos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Coeficiente: ");
        scanf("%f", &alunos[i].coeficiente);
    }

    ordenar(alunos, 10);

    printf("\nAlunos ordenados em ordem decrescente de coeficiente:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nome: %s, Matricula: %d, Coeficiente: %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].coeficiente);
    }

    return 0;
}
