/** Divide a String into N equeal part */
#include <stdio.h>
#include <string.h>
int main(){
  int n, len, part, r, i, j;
  char str[100];
  printf("Enter your input: ");
  gets(str);
  printf("How many part do you want to divide? ");
  scanf("%d",&n);
  len=strlen(str);
  part=len/n;
  r=0;
  for(i=0;i<n;i++){
    for(j=r;j<part+r;j++){
        printf("%c",str[j]);
    }
    printf("\n");
    r +=part;
  }
}

