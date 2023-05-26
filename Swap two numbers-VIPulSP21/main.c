#include <stdio.h>

int swap(int* num1, int* num2);

int main(void){
  int num1, num2;
  // num1 = 10;
  // num2 = 20;
  scanf("%d %d", &num1, &num2);
  swap(&num1, &num2);
  printf("%d %d", num1, num2);
  return 0;
  }

int swap(int* num1, int* num2){
  int temp;
  temp = *num1;
  *num1 = *num2;
  *num2 = temp;
  return *num1, *num2;
}
