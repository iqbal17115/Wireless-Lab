/** String start with a */
#include <stdio.h>
#include <string.h>
int main(){
    char ch;
    int flag=0;
  FILE *file1;
  file1=fopen("input.txt","r");
  ch=getc(file1);
  if(ch=='a'){
    flag=1;
  }
  if(flag==1){
    printf("Accepted!");
  }else{
    printf("Not Accepted!");
  }
}
