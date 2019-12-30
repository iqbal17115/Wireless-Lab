/** Start with ab+a */
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  int flag=0, i=0, len, state;
  printf("Enter your string: ");
  gets(str);
  if(str[i]=='a'){
    i++;
    if(str[i]=='b'){
            state=1;
        while(str[i]=='b'){
            i++;
        }
    }
    if(state==1){
        if(str[i]=='a'){
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

