#include <stdio.h>

int DecimaltoBinary(int decimal);

int main(){
  int i, decimal;
  int *ptr = &i;
  printf("Enter your Decimal number\n");
  scanf("%d",&decimal);
  
  int binary[100];
  if (decimal == 0){
    printf("%d",0);
  }
    for (*ptr=0; decimal>0 ; *ptr=*ptr+1, decimal = decimal/2){
      int remainder = decimal%2;
      binary[*ptr] = remainder;
      // printf("%d",remainder);
  }
  // printf("%d",*ptr);
  int r =  *ptr;
  for (int j = r-1; j>=0; j=j-1){
    printf("%d",binary[j]);
  }
}
