/** ab*a as substring */
#include <stdio.h>
#include <string.h>
int main(){
 char str[100];
 int i, state=0, len, flag=0;
  printf("Enter your string: ");
  gets(str);
  len=strlen(str);
  for(i=0;i<len;i++){
    if(state==0){
        if(str[i]=='a'){
            state=1;
        }
    }else if(state==1){
        state=2;
        if(str[i]=='b'){
            while(str[i]=='b'){
                i++;
            }
            i--;
        }
    }else if(state==2){
        if(str[i]=='a'){
            flag=1;
            state=3;
        }else{
            state=0;
        }
    }
  }
  if(flag==1){
    printf("Accepted!");
  }else{
    printf("Not Accepted!");
  }
}
