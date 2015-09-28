/*
    Mayank Roy
    13CS30021
    Assignment-3
*/

#include <stdio.h>

union
{
    long long i_val;
    double d_val;
}var_1,var_2;
enum
{
    ZERO = 0,
    ONE = 1,
    TWO = 2
};
struct N //Struct keyword check
{
    int xyz;
} n_struct;
void sum(int i, int j, int k = 4) // Addition Function with default set
{
    return i+j+k;               
}
int main()
{
    double d1,d2,d3;
    d1 = 0.91;
    d2 = 0.69;
    d3 = d1 - d2;
    printf("%f - %f : %f\n",d1,d2,d3);
    
	int p, q, r;
    p = 1000;
    q = 1;
    r = sum(p,q);
    printf("\nSum : %d %d = %d\n",p,q,r);
    
	for(int i=1;i<5;++i)
    {
		switch(i){
        	case 1:
        		i = i<<1;
        		printf(" i = %d",i);
        		break;
        	case 2:
        		int a,b,c;
        		a=7;
        		b= 49;
        		c = a*b; 
        		printf("Multiplication\n");
        		printf("%d * %d = %d\n",a,b,c);
        		break;
        	case 3:
        		char * a = "Mayank";
        		printf("%s\n",a);
        		break;
        	case 4:
        		bool val = true;
        		int size = sizeof(a);
        		if(size&1)
			{
	        		size^=1;
	        		printf("size = %d\n",size);
	        		size&=1;
	        		printf("size = %d\n",size);
	        		size|=1; 
	        		printf("size = %d\n",size);
        		}       
        		break;
        	default:
        		break;
    		}
	}
    return 0;
}


