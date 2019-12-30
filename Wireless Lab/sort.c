/** Swap a String */
#include <stdio.h>
#include <string.h>
int main(){
  char str[300], temp[1];
  int len, i, j;
  printf("Enter your string: ");
  gets(str);
  len=strlen(str);
  for(i=0;i<len;i++){
    for(j=0;j<len;j++){
        if(str[i]<str[j]){
          temp[0]=str[i];
          str[i]=str[j];
          str[j]=temp[0];
        }
    }
  }
  printf("After Sorting:%s",str);
}
