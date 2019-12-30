/* Print first non-repeating character from string */
#include <stdio.h>
#include <string.h>
int main(){
  int n, len, i, j, flag=0, p, q=0;
  char str[100];
  printf("Enter your input: ");
  gets(str);
  if(str[0]==str[1]){
    for(i=2;str[i]!='\0';i++){
        if(str[i]!=str[i-1] && str[i]!=str[i+1]){
            p=i;
            flag=1;
            break;
        }

    }

  }else{
    printf("First non-repeating character is: %c",str[0]);
    q=1;
  }
  if(q==0){
    if(flag==1){
    printf("First non-repeating character is: %c",str[p]);
  }else{
    printf("No non-repeating character is here!!");

  }
  }
  return 0;
}
