#include <stdio.h>

int main(void){
  int N;
  scanf("%d",&N);
  int i = 1, fact = 1;
  while (i <= N){
    fact = fact*i;
    i = i + 1;
  }
  printf("%d\n",fact);
  return 0;
}
