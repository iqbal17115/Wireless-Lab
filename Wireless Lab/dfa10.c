/* 001 AS a Substring */
#include <stdio.h>
#include <string.h>
int main(){
 int i,j,len, state=0;
 char str[100];
 gets(str);
 len=strlen(str);
 for(i=0;i<len;i++){
    if(state==0){
        if(str[i]=='0'){
            state=1;
        }
    }else if(state==1){
        if(str[i]=='0'){
            state=2;
        }else{
            state=0;
        }
    }else if(state==2){
         if(str[i]=='1'){
            state=3;
         }else{
          state=2;
         }
    }
 }
 if(state==3){
    printf("Accepted!");
 }else{
    printf("Not Accepted!");
 }
}
