/* Remove Even Digit And Space
and transfer another file*/
#include <stdio.h>
#include <string.h>
int main(){
   FILE *file1, *file2;
   file1=fopen("input.txt","r");
   file2=fopen("input1.txt","w");
   char array[100], ch;
   ch=getc(file1);
   int i=0;
   while(ch!=EOF){

    if(ch%2!=0 && ch!=32){
        array[i++]=ch;
    }
    ch=getc(file1);
   }
   int len;
   len=strlen(array);
   for(i=0;i<len;i++){
    printf("%c",array[i]);
    fprintf(file2,"%c",array[i]);
   }
}
