#include <stdio.h>

float fat(int n){
  float result = 1;
  for(int i = 1; i <= n; i++){
    result *= i;
  }
  return result;
}

int main(){
   int n;
   float result;

   printf("Digite um numero: ");
   scanf("%d", &n);

   result = fat(n);

   printf("O fatorial de %d eh %.2f\n", n, result);

   return 0;
}
