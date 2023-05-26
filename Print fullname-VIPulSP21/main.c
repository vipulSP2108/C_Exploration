#include <stdio.h>

int main(void){
  int num1, num2;
  printf("Enter length of your both names with space\n");
  scanf("%d %d", &num1, &num2);
  char str1[num1+num2+1];
  char str2[num2];
  char str3[1]={" "};
  printf("First Name\n");
  scanf("%s", &str1);
  printf("Secound Name\n");
  scanf("%s", &str2);
  printf("%s",str1);
  printf(" ");
  printf("%s",str2);
  // char str[] = strcat(str1, str3);
  return 0;
}
