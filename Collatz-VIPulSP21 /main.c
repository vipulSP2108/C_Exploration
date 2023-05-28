#include <stdio.h>

void collaz(int var);

int main(void){
  int input;
  scanf("%d", &input);
  collaz(input);
  return 0;
}

void collaz(int var){
  for(int i = 0; i>-1; i++){
    if (var%2==0){
      var = var/2;
      if (var == 1){
        printf("%d\n", var);
        break;
      }
      printf("%d\n",var);
    }
    else {
      if (var == 1){
        printf("%d\n", var);
        break;
      }
      var = ((3*var) + 1);
      printf("%d\n", var);
    }
  }
}
