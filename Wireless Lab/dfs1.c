/** Start with a */
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  printf("Enter your string: ");
  gets(str);
  if(str[0]=='a'){
    printf("Accepted!");
  }else{
    printf("Not Accepted!");
  }
}
