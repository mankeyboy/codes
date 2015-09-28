#include "y.tab.h"
#include <stdio.h>
int main()
{
  yydebug=1;
  int status = yyparse();  
  if(status){
    printf("FAILURE!\n");
  }
  else{
    printf("SUCCESS!\n");
  }
  return 0;
}
