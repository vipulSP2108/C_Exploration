#include <stdio.h>
#include <string.h>

int main(void){
  int num1, num2;
  printf("Enter length of your first name and secound name on seprate line\n");
  scanf("%d %d", &num1, &num2);
  char first[num1+num2+1];
  char secound[num2];
  printf("Enter First Name\n");
  scanf("%s",first);
  printf("Enter Secound Name\n");
  scanf("%s",secound);
  // printf("%s %s",first, secound);
  printf("%s",strcat(first, secound));
}
