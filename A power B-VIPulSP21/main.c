#include <stdio.h>
#include <math.h>

int main(void){
  int num1, num2, square;
  scanf("%d",&num1);
  scanf("%d",&num2);
  square = pow(num1,num2);
  printf("%d",square);
}
