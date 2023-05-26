#include <stdio.h>
#include <math.h>

int main(void){
  int a, b;
  printf("Enter num1 and num2 with space\n");
  scanf("%d %d", &a, &b);
  int power = pow(a,b);
  printf("%d",power%10);
  return 0;
}
