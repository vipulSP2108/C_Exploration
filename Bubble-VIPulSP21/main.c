#include <stdio.h>

int main(void){
  int listx[100];
  int num;
  scanf("%d",&num);
  
  for(int i = 0 ; i<num ; i+=1){
    int listnum;
    scanf("%d", &listnum);
    listx[i] = listnum;
  }
  printf("end");
  
  for(int i = 0; i<(num-1); i+=1) {
    for(int j = 0; j<(num-1-i); j+=1) {
      if (listx[j] > listx[j+1]) {
        int comp = listx[j];
        listx[j] = listx[j+1];
        listx[j+1] = comp; 
      }
    }
  }
  
  for(int i = 0 ; i<num ; i+=1){
    printf("%d", listx[i]);
  }
  return 0;
}
