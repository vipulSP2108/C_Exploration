#include <stdio.h>

int main(void){
  printf("enter number below 100 digits\n");
  int num[100];
  for (int i = 0 ; i < 100 ; i++){
    // printf("your %d digit in number is",i);
    char var;
    scanf("%c",&var);
    if (var == '\n'){
      printf("%d",i);
      break;
    }
  }
  return 0;
}
