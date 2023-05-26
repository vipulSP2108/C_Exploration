#include <stdio.h>

int main(void){
  int num1, num2;
  printf("Enter both number with a space\n");
  scanf("%d %d", &num1, &num2);
  
  num1>num2?printf("%d",num1):printf("%d",num2);
}
