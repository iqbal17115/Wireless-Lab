/** Swap Two String */
#include <stdio.h>
#include <string.h>
int main(){
  char str[100], str1[100], temp[100];
  int len, len1, i;
  printf("Enter your first string: ");
  gets(str);
  printf("Enter your first string: ");
  gets(str1);
  len=strlen(str);
  len1=strlen(str1);
  for(i=0;i<len;i++){
    temp[i]=str[i];
  }
  for(i=0;i<len1;i++){
    str[i]=str1[i];
  }
  for(i=0;i<len;i++){
    str1[i]=temp[i];
  }
  printf("After Swaping:-\n");
  printf("First String: ");
  for(i=0;i<len1;i++){
    printf("%c",str[i]);
  }
  printf("\n");
  printf("Second String: ");
  for(i=0;i<len;i++){
    printf("%c",str1[i]);
  }
}
