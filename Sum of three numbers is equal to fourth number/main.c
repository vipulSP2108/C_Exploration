#include <stdio.h>

int main(void){
  int num1, num2, num3, num4;
  printf("Enter the 3 numbers with space\n");
  scanf("%d %d %d",&num1, &num2, &num3);
  printf("Enter the 4th number\n");
  scanf("%d",&num4);
  if ( num1 + num2 + num3 == num4){
    printf("YES");
  }
  else{
    printf("NO");
  }
  return 0;
}
