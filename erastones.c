#include <stdio.h>

int main() {
    int inicio, fim;

    printf("Digite o limite inferior do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o limite superior do intervalo: ");
    scanf("%d", &fim);

    int primos[fim+1];
    
    for (int i = 2; i <= fim; i++) {
        primos[i] = 1;
    }


    for (int i = 2; i * i <= fim; i++) {
        if (primos[i] == 1) {
            for (int j = i * i; j <= fim; j += i) {
                primos[j] = 0;
            }
        }
    }


    printf("Números primos no intervalo [%d, %d]:\n", inicio, fim);
    for (int i = inicio; i <= fim; i++) {
        if (primos[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
