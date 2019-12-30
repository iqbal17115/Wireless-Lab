/** Reverse String By Using recursion */
#include <stdio.h>
#include <string.h>
   char str[100];
   int i, j, len;
   void reverse(){
       printf("%c",str[len]);
     if(len==0){
        return 0;
     }
     len--;
     reverse();
   }
int main(){
   printf("Enter your input: ");
   gets(str);
   len=strlen(str);
   len--;
   reverse();
}
