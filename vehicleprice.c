#include <stdio.h>

typedef struct {
    char modelo[50], marca[30], cor[30]; 
    int ano, valor;
} Veiculo;

int expensive(Veiculo veiculo[3]) {
    int price = veiculo[0].valor; 
    for (int i = 1; i < 3; i++) { 
        if (price < veiculo[i].valor) {
            price = veiculo[i].valor;
        }
    }
    return price;
}

int main() {
    Veiculo veiculo[3];
    for (int i = 0; i < 3; i++) {
        printf("Insira o modelo do veiculo %d: ", i + 1);
        scanf("%s", veiculo[i].modelo);
        printf("Insira a marca do veiculo %d: ", i + 1);
        scanf("%s", veiculo[i].marca);
        printf("Insira a cor do veiculo %d: ", i + 1);
        scanf("%s", veiculo[i].cor);
        printf("Insira o ano do veiculo %d: ", i + 1);
        scanf("%d", &veiculo[i].ano);
        printf("Insira o valor do veiculo %d: ", i + 1);
        scanf("%d", &veiculo[i].valor);
    }
    printf("O veiculo mais caro custa: %d\n", expensive(veiculo));
    return 0;
}
