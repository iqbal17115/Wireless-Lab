/** Pallindrom Check */
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  int len, mid, i, j, flag=0;
  printf("Enter your input: ");
  gets(str);
  len=strlen(str);
  mid=len/2;
  for(i=0, --len;i<=mid;i++, len--){
    if(str[i]!=str[len]){
        flag=1;
    }
  }
  if(flag==0){
    printf("Palindrome!");
  }else{
    printf("Not Palindrome!");
  }
 return 0;
}
