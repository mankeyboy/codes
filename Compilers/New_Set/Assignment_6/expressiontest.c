//Main function declaration
// Everything has been put inside the main fuction block. This is only for testing expressions.
// The following code will check whether general expressions are handled well or not.
int main()
{
    int i,j;
    int *a,**b;
    char ch;
    double d,e,f;
    a = &j;
    b = &a;
    j = 10;
    i = *a + 1;
    double arr[10];
    e = 1.5;
    int arri[2][2];
    f = arri[0][0]--;
    f = 12.0;
    d = f/e;
    ch = 'c';
    i = 10;
    j = i*5>>2;
    int l = (i+j)%4;
    j = 0;
    while(i < j)
    {j++;}
    
    arri[1][1] = arri[0][0]++;
    i = f*j;
    int c = i-j;
    if(i<j && e>=f)
    {
        d = f;
    }
    else
    {
        d = f+e;
    }
    i = 0;
}