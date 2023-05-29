#include <stdio.h>

int main(void) {
  int number, i;
  scanf("%d",&number);
  // printf("\n%d",number%(10*10000)/10000);

  // Initial calculating value of i for getting ans in right answer
  for (i = 1; i > 0; i *= 10){
    int var = number%(10*i)/i;
    // printf("%d",var);
    if (number%(10*i)==number){
      break;
    }
  }

  for (i = i; i > 0; i /= 10){
    // printf("%d\n",i);
    char five, ten, one;
    
    if (i==1){
      five = 'V', one = 'I', ten = 'X';
    }
    if (i==10){
      five = 'L', one = 'X', ten = 'C';
    }
    if (i==100){
      five = 'D', one = 'C', ten = 'M';
    }
    if (i == 1000){
      five = 'V', one = 'M', ten = 'M';
    }
    
    // printf("%d\n",(number%(10*i))/i);
    int var = number%(10*i)/i;
    
    if (var == 1){
      printf("%c", one);
    }
    else if (var == 2){
      printf("%c%c", one, one);
    }
    else if (var == 3){
      printf("%c%c%c", one, one, one);
    }
    else if (var == 4){
      printf("%c%c", one, five);
    }
    else if (var == 5){
      printf("%c",five);
    }
    else if (var == 6){
      printf("%c%c", five, one);
    }
    else if (var == 7){
      printf("%c%c%c", five, one, one);
    }
    else if (var == 8){
      printf("%c%c%c%c", five, one, one, one);
    }
    else if (var%10 == 9){
      printf("%c%c", one, ten);
    }
    // printf("%d\n",var);
  }
  return 0;
}
