/** Transfer input from one file to another */
#include <stdio.h>
#include <string.h>
int main(){
   FILE *file1, *file2;
   char ch;
   file1=fopen("input.txt","r");
   file2=fopen("output.txt","w");
   ch=getc(file1);
   while(ch != EOF){
      fprintf(file2,"%c",ch);
      printf("%c",ch);
      ch=getc(file1);
   }
}
