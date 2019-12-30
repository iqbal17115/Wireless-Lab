/** Substring abbc */
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
        if(str[i]=='b'){
            state=2;
        }else if(str[i]=='a'){
            state=1;
         }else{
            state=0;
        }
    }else if(state==2){
        if(str[i]=='b'){
            state=3;
        }else if(str[i]=='a'){
            state=1;
         }else{
          state=0;
        }
    }else if(state==3){
        if(str[i]=='c'){
            state=4;
            flag=1;
        }else if(str[i]=='a'){
            state=1;
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

