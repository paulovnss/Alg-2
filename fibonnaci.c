#include <stdio.h>

float fibonnaci(int n){
  float antecessor = 0;
  float atual = 1;
  float sucessor;
  //i = 2 pois os dois primeiros termos da sequencia fibonnaci são 0 e 1
  for (int i = 2; i < n; i++){
    sucessor = antecessor + atual;
    antecessor = atual;
    atual = sucessor;
  }
  return atual;
}

int main(){
  int n;

  printf("Informe qual posição da sequencia fibonnaci vc deseja: ");
  scanf("%d",&n);

  float result = fibonnaci(n);

  printf("o número é : %.1f",result);


  return 0;
}