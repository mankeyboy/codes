# include <stdio.h>
# include "myl.h"
int main(){
  char ch, s[100];
  int n,m,len,i = 0;
  float f;
  printf("\n--------------------------------------------\n");
  printf("Enter any integer\n");
  n = readi(&m);
  if(m)
     printf("Invalid Input\n");
  else
  {
      printf("The entered integer is : ");
      len = printi(n);
      printf("\nThe number of characters: \n%d",len);
  }
  printf("----------------------------------------------\n");
  printf("Enter any string : ");
  while((ch=getchar())!='\n')
    s[i++] = ch;
  s[i] = '\0';
  printf("The string entered is : ");
  len = prints(s);
  printf("\nThe no of characters is: \n%d",len);
  printf("\n--------------------------------------------\n");
  printf("Enter any floating point number : ");
  m = readf(&f);
  if(m)
     printf("Invalid Input\n");
  else{
      printf("The number you entered : ");
      len = printd(f);
      printf("\nThe number of characters : ");
      printf("%d\n",len);	
  }
  printf("\n--------------------------------------------\n");
  return 0;
}
