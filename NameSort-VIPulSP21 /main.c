#include <stdio.h>

int main(void) {

  int numfirst, numlast;
  char firstname[100];
  for (int i = 0; i >= 0; i++){
    char first;
    scanf("%c",&first);
    firstname[i] = first;
    if (first == '\n'){
      numfirst = i;
      break;
    }
    // printf("%c\n",firstname[0]);
  }

  char lastname[100];
  for (int i = 0; i >= 0; i++){
    char last;
    scanf("%c",&last);
    lastname[i] = last;
    if (last == '\n'){
      numlast = i;
      break;
    }
    // printf("%c\n",firstname[0]);
  }

  int i = 0 , count = 0;
  while (i >= 0){
    if (firstname[i] == lastname[i]){
      i += 1;
    }
    else if (firstname[i] < lastname[i]){
      count = 1;
      break;
    }
    else{
      count = -1;
      break;
    }
  }
  
  // lastname
  if (count == -1){
    for (int i = 0; i<numlast ; i++){
      printf("%c",lastname[i]);
    }
  }
  // firstname
  else if (count == 1){
    for (int i = 0; i<numfirst ; i++){
      printf("%c",firstname[i]);
    }
  }
}
