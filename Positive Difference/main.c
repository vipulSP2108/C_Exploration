#include <stdio.h>

int main(void){
  int num1, num2;
  printf("Enter number 1 and number 2 with a space in between\n");
  scanf("%d %d",&num1, &num2);
  int *ptr1 = &num1;
  int *ptr2 = &num2;
  if (num1>num2){
    printf("%d",num1-num2);
  }
  else{
    printf("%d",num2-num1);
  }
}
