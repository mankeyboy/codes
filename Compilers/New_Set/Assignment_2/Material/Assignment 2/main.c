# include <stdio.h>
# include "myl.h"
int main(){
  char ch, s[100];
  int n,m,len,i = 0;
  float f;
  printf("*******************************************\n");
  printf("Enter any string\n");
  while((ch=getchar())!='\n'){
    s[i++] = ch;
  }
  s[i] = '\0';
  printf("The string entered is:\n");
  len = prints(s);
  printf("\nThe no of characters is: \n%d",len);
  printf("\n*******************************************\n");
  printf("Enter any integer\n");
  n = readi(&m);
  if(m)
     printf("Invalid Input\n");
  else{
      printf("The entered integer is:\n");
      len = printi(n);
      printf("\nThe number of characters: \n%d",len);
  }
  printf("\n*******************************************\n");
  printf("Enter any floating point number\n");
  m = readf(&f);
  if(m)
     printf("Invalid Input\n");
  else{
      printf("The number you entered:\n");
      len = printd(f);
      printf("\nThe number of characters:\n");
      printf("%d\n",len);	
  }
  printf("*******************************************\n");
  return 0;
}