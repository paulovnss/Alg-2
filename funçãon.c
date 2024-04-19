#include <stdio.h>
  int change(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    return 0;
  }

int main(){
  int x,y;

  printf("Digite o primeiro número:");
  scanf("%d",&x);
  printf("Digite o segundo número:");
  scanf("%d",&y);

  change(&x,&y);
  printf("O x agora é: %d e o y é %d",x,y);
  return 0;
}
