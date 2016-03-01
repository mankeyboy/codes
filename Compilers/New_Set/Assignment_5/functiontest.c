//Function test
// Declaring Functions and then defining them at the same point and later or leaving it 
// without defining. Upto the program.
//Function Declaration and definition
double func(int a,int b)
{
    double c;
    a = 10;
    b = 20;
    a = a+b;
    c=a;
    return a;
}
//Only function declaration
double func_dbl(int a,int b);
//Function declaration, definitions later
char func_char(int x,int y,double z);
int main()
{
    int a;
    double k;
    char n;
    k = func(4,a);
    n = func_tripleparam(6,7,k);
    return 0;
}
//Function Definition for function declared above
char func_tripleparam(int x,int y,double z)
{
    char ch;
    if(x<y)
    {
        y = x*y/z;
        while(x<y)
        {
            x = y+z;
        }
    }
    else
    {
        y = x--;
    }
    ch = 'a';
    return ch;
}