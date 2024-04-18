#include <stdio.h>
int main(){
  char v[11] = {'a','b','c','d','e','f','g','h','i','j','k'};
  int soma;
   for (int i = 0; i < 11; i++){
    v[i] = v[i] - '0';
    printf("%d\n", v[i]);
    soma += v[i];
   }
    printf("%d",soma);
   

  return 0;
}
