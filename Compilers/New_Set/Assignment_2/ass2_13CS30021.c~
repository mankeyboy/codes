// MAYANK ROY
// 13CS30021
// Assignment 2: 
// Writing fuctions for print and reading without using library functions
# include "myl.h"
# define LEN 100

int printi(int n)
{
    int i = 0, dig, first, last;
    char buff[LEN], temp;
    if(!n)
        buff[i++] = '0';
    else if(n < 0){
        buff[i++] = '-';
        n *= -1;
    }
    first = i;

    // Extract all the digits lower place value first
    while(n > 0){
        dig = n%10;
        buff[i++] = (char)(dig + '0');
        n = n/10;
    }

    // Reverse the array to print
    last = i-1;
    while(first <= last){
        temp = buff[first];
        buff[first++] = buff[last];
        buff[last--] = temp;
    }
    buff[i] = '\0';

    __asm__ __volatile__(
          "movl $1, %%eax \n\t"
          "movq $1, %%rdi \n\t"
          "syscall \n\t"
          :
          : "S"(buff), "d"(i)
    );
    return i;
}

// Reads an integer and returns it
int readi(int *ep){
    
    char str[LEN];
    int i = 0, first = 0, last, temp = 0;
    //Get array of char from system console
    do{
        __asm__ __volatile(
            "movl $0, %%eax \n\t"
            "movq $1, %%rdi \n\t"
            "syscall \n\t"
            :
            :"S"(str+i), "d"(1)
            );
    }while(str[i++]!='\n');

    i--;
    last = i-1;
    if(str[0] == '-')
        first = 1;

    // Convert the array of characters to number
   
    while(first <= last)
    {
        if(str[first]<'0' || str[first]>'9') //If the array contains a non numeral character, return with error
        {     
        (*ep) = ERR;
        return (*ep);   
        }        
        temp = temp*10 + (int)(str[first++]-'0');
    }
    if(str[0] == '-')
        temp = temp*(-1);
    (*ep) = OK;
    return temp;
}

// Prints an array of characters and returns the number of characters
int prints(char *str){     // str is null terminated
    int length = 0;
    
    while(*(str + length))
        length++;
    
    __asm__ __volatile__(
          "movl $1, %%eax \n\t"
          "movq $1, %%rdi \n\t"
          "syscall \n\t"
          :
          : "S"(str), "d"(length)
    );
    return length;
}


// Reads a floating point number and returns it
int readf(float *fp){
    char str[LEN];
    int i = 0,first = 0, fact = 1; //fact is the point after which decimal begins (factor 10)
    do{
        __asm__ __volatile
        (
            "movl $0, %%eax \n\t"
            "movq $1, %%rdi \n\t"
            :
            : "S"(str+i), "d"(1)
        );
    }while(str[i++]!='\n');
    
    i--;
    if(str[0] == '-')
        first = 1;
    while(first<i && str[first]!='.')
    {
	   if(str[first]<'0' || str[first]>'9') //If the array contains a non numeral character, return with error
       {
		  (*fp) = ERR;
		  return ERR;
	   }    	
	   (*fp) = (*fp)*10 + (str[first++] - '0');
    }
    first++;
    
    while(first<i)
    {
	   if(str[first]<'0' || str[first]>'9')
       {
		  (*fp) = ERR;
		  return ERR;
	   }           
	   (*fp) = (*fp)*10 + (str[first++] - '0');
        fact = fact * 10;
    }
    
    (*fp) = (*fp)/fact;
    if(str[0] == '-')
        (*fp) = (-1)*(*fp);
    return OK;
}

//Print the floating point number
int printd(float f)
{
    char str[LEN];
    int i = 0,first = 0;
    if(f == 0.0)
        str[i++] = '0';
    else if(f<0)
    {
        str[i++] = '-';
        f = (-1)*f;
        first = 1;
    }
    int int_fP = (int)f;
    float f_part = f - int_fP;
    while(int_fP)
    {
        str[i++] = (char)((int_fP%10)+'0');
        int_fP/=10;
    }
    int last = i-1, temp;
    
    while(first < last)
    {
        temp = str[first];
        str[first++] = str[last];
        str[last--] = temp;
    }
    str[i++] = '.';
    first = i;
    if(f_part == 0.0)
        str[i++] = '0';
    else
    {
        int counter = 0;
	    int rem = 0;
	    while(counter < 8)
        {
            rem = (int)(f_part*10);
            str[i++] = (char)(rem + '0');
            f_part*=10;
            f_part = f_part - rem;
	        counter++;
        }
    }
    str[i] = '\0';
    last = i-1;
    while(first<last)
    {
        temp = str[first];
        str[first++] = str[last];
        str[last--] = temp;
    }
    __asm__ __volatile__(
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(str), "d"(i)
	);
    return i;
}
