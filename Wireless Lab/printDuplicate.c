/** Print all duplicate input from string */
#include <stdio.h>
#include <string.h>
int main(){
   char str[100];
   int i, j, len;
   printf("Enter you input: ");
   gets(str);
   len=strlen(str);
   for(i=0;i<len;i++){
     if(str[i]==str[i+1]){
        printf("%c",str[i]);
        while(str[i]==str[i+1]){
            i++;
        }
     }
   }
}
