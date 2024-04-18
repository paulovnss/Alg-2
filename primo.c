#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
        }
    }

    if (isPrime == 1){  
        printf("%d e um numero primo.\n", num);
        }else{
        printf("%d nao e um numero primo.\n", num);
        }
    return 0;
}
