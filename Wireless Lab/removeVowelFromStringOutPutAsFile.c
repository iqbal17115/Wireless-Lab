#include <stdio.h>
#include <string.h>
int main(){
  FILE *file1, *file2;
  file1=fopen("input.txt","r");
  file2=fopen("input1.txt","w");
  char ch;
  ch=getc(file1);
  char str[100];
  int i=0;
  while(ch != EOF){
    if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U' && ch!=' '){
        str[i++]=ch;
        printf("%c",ch);
        fprintf(file2,"%c",ch);
    }
    ch=getc(file1);
  }
}
