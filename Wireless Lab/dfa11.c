// Divisible By 4
#include <stdio.h>
#include <string.h>
int main(){
  int i, j, len,state=0;
  char str[100];
  gets(str);
  len=strlen(str);
  for(i=0;i<len;i++){
    if(state==0){
        if(str[i]=='1'){
            state=1;
        }
    }else if(state==1){
         if(str[i]=='0'){
            state=2;
         }else{
            while(str[i]=='1'){
                i++;
            }
            if(str[i]=='0'){
                state=2;
            }
         }
    }else if(state==2){
        if(str[i]=='1'){
            state=1;
        }else{
            state=3;
        }
    }
  }
  int flag=0;
  for(i=0;i<len;i++){
    if(str[i]=='1'){
        flag=1;
    }
  }
  if(flag!=1){
    state=3;
  }
  if(state==3){
    printf("Accepted!");
 }else{
    printf("Not Accepted!");
 }
}
