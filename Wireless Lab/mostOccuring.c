/** Most Occuring Character */
#include <stdio.h>
#include <string.h>
int main(){
  char str[100];
  int i, j, len, flag, total=0, temp;
  printf("Enter your input: ");
  gets(str);
  len=strlen(str);
  for(i=0;i<len;i++){
    temp=0;
    for(j=0;j<len;j++){
        if(str[i]==str[j]){
            temp++;
        }
    }
    if(temp>total){
        total=temp;
        flag=i;
    }
  }
  printf("Most Occuring Character is: %c, Total: %d",str[flag],total);
  return 0;
}
