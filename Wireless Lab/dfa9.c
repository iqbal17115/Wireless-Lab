/** aba as a substring */
#include <stdio.h>
#include <string.h>
int main(){
    char ch;
    int flag=0, state=0;
  FILE *file1;
  file1=fopen("input.txt","r");
  ch=getc(file1);
  while(ch != EOF){
    if(state==0){
        if(ch=='a'){
            state=1;
        }
    }else if(state==1){
        if(ch=='b'){
           state=2;
        }else{
           state=0;
        }
    }else if(state==2){
        if(ch=='a'){
            state=3;
            flag=1;
        }else{
            state=0;
        }
    }
    ch=getc(file1);
  }
  if(flag==1){
    printf("Accepted!");
  }else{
    printf("Not Accepted!");
  }
}
