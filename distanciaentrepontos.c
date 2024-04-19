#include <stdio.h>
#include <math.h>

typedef struct {
  float x;
  float y;
}Ponto;

double distance(Ponto a,Ponto b){
  double result = sqrt(pow(b.x-a.x,2) + pow(b.y-a.y,2));
  return result;
}


int main(){
  Ponto a,b;
  scanf("%f %f",&a.x,&a.y);
  scanf("%f %f",&b.x,&b.y);

  printf("%.4lf\n",distance(a,b));

  return 0;
}
