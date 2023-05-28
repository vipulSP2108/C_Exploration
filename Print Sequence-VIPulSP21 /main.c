#include <stdio.h>
#include <string.h>

int main(void){
  int N;
  scanf("%d",&N);
  
  // M 1
  for (int i = 1; i <= N; i++){
    if (i == 1){
      printf("*\n");
    }
    else if(i == 2){
      printf("**\n");
    }
    else if(i == 3){
      printf("***\n");
    }
    else if(i == 4){
      printf("****\n");
    }
    else if(i == 5){
      printf("*****\n");
    }
  }
  
    // M 2
  char star[] = "*************************************";
  for (int i = 1; i <= N; i++){
    char starstore[100];
    memcpy(starstore, star, i);
    printf("%s\n", starstore);
  }
    
  return 0;
}
