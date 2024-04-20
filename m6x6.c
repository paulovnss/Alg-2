#include <stdio.h>

int main() {
    int matriz[6][6];
    int valor_inferior = 2; 
    int valor_superior = 1; 

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == j) { // Diagonal principal
                matriz[i][j] = 0;
            } else if (i > j) { // Diagonal inferior
                matriz[i][j] = valor_inferior;
                valor_inferior += 2; // Atualiza o próximo valor para preencher a diagonal inferior
            } else if (i < j) { // Diagonal superior
                matriz[i][j] = valor_superior;
                valor_superior += 2; // Atualiza o próximo valor para preencher a diagonal superior
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        matriz[i][5 - i] = 0;
    }

    printf("Matriz 6x6:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%2d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
