#include <stdio.h>

int main(void){
  int A, B;
  printf("Enter Number\n");
  scanf("%d",&A);
  printf("Enter Power\n");
  scanf("%d",&B);
  int count = 1;
  int i = 1;
  // for(int i=1; i<=B; i += 1){
  //   count = count*A;
  // }
  // printf("%d",count);
  while (i<=B){
    count = count*A;
    i += 1;
  }
  printf("%d",count);
  }
