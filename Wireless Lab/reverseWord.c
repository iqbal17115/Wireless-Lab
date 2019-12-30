/** Reverse word in a given string */
#include <stdio.h>
#include <string.h>
int main(){
 char str[100];
 int len, i, j, temp;
 printf("Enter your string: ");
 gets(str);
 len=strlen(str);
 strcat(str," ");
 for(i=len-1;i>=0;i--){
     temp=i;
    if(str[i]==32){
            i++;
        while(str[i]!=32){
            printf("%c",str[i]);
            i++;
        }
        printf(" ");
    }
    i=temp;
 }
 i=0;
 while(str[i]!=32){
    printf("%c",str[i]);
    i++;
 }
}
