#include <stdio.h>

int CheckifPythagorean();

int main(){
  int a, b, c;
  printf("Enter value of line1 line2 and line3 one by one on next line\n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  CheckifPythagorean(a, b, c) == 1? printf("YES"): printf("NO");
}

int CheckifPythagorean(int a, int b, int c){
  int count = 0;
  if (a<0 || b<0 || c<0){
    count = 0;
  }
  else if (a*a + b*b == c*c){
    count = 1;
  }
  else if (a*a + c*c == b*b){
    count = 1;
  }
  else if (b*b + c*c == a*a){
    count = 1;
  }
  return count;
}
