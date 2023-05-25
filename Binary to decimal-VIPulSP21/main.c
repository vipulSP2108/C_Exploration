#include <stdio.h>
#include <math.h>

int BinarytoDecimal();

int main(){
  int len;
  printf("length of your number ");
  scanf("%d",&len);
  // printf("%d\n",len);
  int binary[len];
  printf("enter number one by one on next line by pressing enter\n");
  for(int i=0; i<len; i += 1){
    scanf("%d",&binary[i]);
  }
  printf("%d",BinarytoDecimal(binary,len));
}

int BinarytoDecimal(int binary[],int len){
  int factor, num = 0;
  for(int j=0; j<len; j += 1){
    factor = pow(2,j);
    // printf("factor %d\n",factor);
    // printf("binary %d\n",binary[len-j-1]);
    num += factor*binary[len-j-1];
    // printf("num %d\n",num);
  }
  return num;
}
