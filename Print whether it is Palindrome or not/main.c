#include <stdio.h>

int main(void){
  int num, count = 0;
  printf("enter length\n");
  scanf("%d",&num);
  
  char input[num];
  scanf("%s",input);
  for (int i = 0; i<num; i=i+1){
    if (input[i] == input[num - 1]){
      count = 1;
    }
    else{
      count = 0;
      break;
    }
    num = num - 1;
  }
  if (count == 0){
    printf("NO");
  }
  else{
    printf("YES");
  }
  return 0;  
}
