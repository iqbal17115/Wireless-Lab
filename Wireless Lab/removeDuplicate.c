/** Remove duplicate from String */
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  int i, j;
  printf("Enter your string: ");
  gets(str);
  for(i=0;str[i]!='\0';i++){
    while(str[i]==str[i+1]){
        for(j=i;str[j]!='\0';j++){
            str[j]=str[j+1];
        }
    }
  }
  printf("%s",str);
}
