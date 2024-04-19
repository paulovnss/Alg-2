#include <stdio.h>

float pot(int base ,int expoente){
   float result = 1;

   for (int i = 0; i < expoente; i++){
    result *= base;
   }
   return result;
}


int main(){
   int base;
   int expoente;

   printf("Digite a base: ");
   scanf("%d",&base);
   printf("Digite o expoente: ");
   scanf("%d",&expoente);

  float resultado = pot(base,expoente);

  printf("O resultado da potencia e: %.2f",resultado);


  return 0;
}