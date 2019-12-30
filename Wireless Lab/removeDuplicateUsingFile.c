#include <stdio.h>
#include <string.h>
int main(){
  FILE *file1, *file2;
  int i,j,len;
  char array[100];
  char ch;
  file1=fopen("input.txt","r");
  file2=fopen("input1.txt","w");
  ch=getc(file1);
  i=0;
  while(ch != EOF){
    array[i++]=ch;
    ch=getc(file1);
  }
  len=strlen(array);
  for(i=0;i<len;i++){
    while(array[i]==array[i+1]){
        for(j=i;j<len;j++){
          array[j]=array[j+1];
        }
        len=strlen(array);
    }
  }
  for(i=0;i<len;i++){
    fprintf(file2,"%c",array[i]);
  }
}
