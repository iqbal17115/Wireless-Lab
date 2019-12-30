/** End with aba  */
#include <stdio.h>
#include <string.h>
int main(){
 char str[100];
 int i, state=0, len, flag=0;
  printf("Enter your string: ");
  gets(str);
  len=strlen(str);
  len--;
  if(str[len]=='a'){
        len--;
    if(str[len]=='b'){
        len--;
        if(str[len]=='a'){
            flag=1;
        }
    }
  }
  if(flag==1){
    printf("Accepted!");
  }else{
    printf("Not Accepted!");
  }
}
