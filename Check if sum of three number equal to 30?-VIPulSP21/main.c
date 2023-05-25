#include <stdio.h>

void Checksum30(int num1, int num2, int num3);

int main(){
  int num1, num2, num3;
  printf("Enter all three number one by one on next line\n");
  scanf("%d",&num1);
  scanf("%d",&num2);
  scanf("%d",&num3);
  Checksum30(num1, num2, num3);
  return 0;
}

void Checksum30(int num1, int num2, int num3){
  num1+num2+num3 == 30 ? printf("YES") : printf("NO");
}
