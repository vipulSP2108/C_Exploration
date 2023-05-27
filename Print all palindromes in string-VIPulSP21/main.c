#include <stdio.h>
#include <string.h>

void palindromes(char str[], int* ptr);

int main(void){
  int num1, num2, num3;
  // printf("Enter the length of all words with space\n");
  // scanf("%d %d %d", &num1, &num2, &num3);
  char str1[15];
  char str2[15];
  char str3[15];
  scanf("%s %s %s", str1, str2, str3);
  int cot = 0;
  int* ptr = &cot;
  // char str1[] = "std";
  palindromes(str1, &cot);
  palindromes(str2, &cot);
  palindromes(str3, &cot);
  // printf("%d",cot);
  if (cot == 3){
    printf("No palindrome");
  }
}

void palindromes(char str[], int* ptr){
  int len = strlen(str)-1;
  int count = 0;
  for (int i = 0; i<=len; len-- && i++){
    if (str[i]==str[len]){
      count = 1;
    }
    else{
      count = 0;
      break;
    }
  }
  
  if (count == 0){
    *ptr += 1;
  }
  else{
    printf("%s\n",str);
  }
}
