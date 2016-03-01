//Main Function
//Condition check
//Nested if, else structures applied to see if ST works properly and implements type conversions
//in translation to machine code
int main()
{
    int a=5, b=10, c;
    double z= a*b - 19.5;
    char ch, ch_a='a';
    c = ch_a;
    if(a>b)
    {
        z = b;
    }
    else
    {
        if( b==a || (c && c<'z'))//Conversion for temporary check + OR condition
        {
            c++;
        }
        else
        {
            c--;
        }
    }
    if(b>a)
    {
        if(z<1.0)
        {
            b--;
        }
    }
    else
    {
        b++;
    }
    return 0;
}