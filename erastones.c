#include <stdio.h>

int main() {
    int inicio, fim;

    // Solicita ao usuário os limites do intervalo
    printf("Digite o limite inferior do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o limite superior do intervalo: ");
    scanf("%d", &fim);

    // Array para marcar se um número é primo ou não
    int primos[fim+1];

    // Inicializa o array com 1 (todos os números são considerados primos)
    for (int i = 2; i <= fim; i++) {
        primos[i] = 1;
    }

    // Marca os múltiplos como não primos
    for (int i = 2; i * i <= fim; i++) {
        if (primos[i] == 1) {
            for (int j = i * i; j <= fim; j += i) {
                primos[j] = 0;
            }
        }
    }

    // Exibe os números primos no intervalo dado
    printf("Números primos no intervalo [%d, %d]:\n", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (primos[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
