#include <stdio.h>

int main(){
  int marks;
  printf("Enter Your Marks\n");
  scanf("%d",&marks);
  if(marks>=90){
    printf("A");
  }
  else if(89>marks && marks>=80){
    printf("B");
  }
  else if(79>marks && marks>=70){
    printf("C");
  }
  else{
    printf("D");
  }
  return 0;
}
