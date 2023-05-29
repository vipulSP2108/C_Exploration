#include <stdio.h>
#include <string.h>

void suffle(int num[], int length);

int main() {
  int length;
  printf("enter length of your number ");
  scanf("%d",&length);
  int num[length];
  for (int i = 0; i < length; i++){
    printf("enter %d digit ",i);
    scanf("%d",&num[i]);
  }
  // int num[4] = {1,2,3,4};
  // int len = 4;
  suffle(num,length);
}

void suffle(int num[], int length){
  int len = length;
  if (len%2==0){
    len = len/2;
  }
  else{ 
    len = (len/2) + 1;
  }
  int suffled[10];
  for (int i = 0, j = 0; i<length; i++){
    if (i%2==0){
      suffled[i] = num[j];
      printf("%d ", num[j]);
      j += 1;
    }
    else{
      suffled[i] = num[len];
      printf("%d ", num[len]);
      len += 1;
    }
  }
  // for (int i = 0; i<=length; i++){
  //   // printf("%d\n", suffled[i]);
  // }
}
