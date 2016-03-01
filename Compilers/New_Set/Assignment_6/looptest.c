//Check for all types of loops except control construct goto 
int main()
{
    int i,j=2;
    int a[10];
    int y = 9;
    double x,z = 10.0;
    z = 2.0;
    int constant = 10;
    //While check with array access added in the body
    while(y>0)
    {
        a[y] = y;
        y--;
    }
    //Do-while check with modification of values and array access in boolean condition
    i = 4;
    do
    {
        i = i-1;
    }while(a[i]<z);
    //If else construct tested to modify values
    x = 5.0;
    if(i<=j && y >= 9)
    {
        x = x--;
    }
    else
    {
        y = y*x + 10;
    }
    //For Loop
    for(i=1;i<constant;i++)
    {
        y--;
        x = x+5;
    }

    return 0;
}