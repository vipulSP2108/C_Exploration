#include <stdio.h>

void febo(int var);

int main(void){
  int input;
  scanf("%d",&input);
  febo(input);
  return 0;
}

void febo(int var){
  int listx[100];
  int count = 0;
  for (int i = 0; count<var; i++){
    if (i == 0 || i == 1){
      listx[i] = 1;
    }
    else{
      listx[i] = listx[i-1] + listx[i-2];
    }
    // printf("%d\n",listx[i]);
    
// even or not
    if (listx[i]%2 == 0){
      printf("%d\n",listx[i]);
      count += 1;
    }
  }
}
