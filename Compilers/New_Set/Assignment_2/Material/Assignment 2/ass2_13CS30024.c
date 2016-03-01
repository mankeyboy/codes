#include "myl.h"
#define MAX 100

int prints(char *s)
{
    int len = 0;
    while(*(s+len))
        len++;
    __asm__ __volatile__(
        "movl $1, %%eax \n\t"
        "movq $1, %%rdi \n\t"
        "syscall \n\t"
        :
        :"S"(s),"d"(len));
    return len;
}

int printi(int n)
{
    int begin,end,temp,i=0;
    char s[MAX];
    if(!n)
        s[i++]='0';
    else if(n<0)
    {
        s[i++]='-';
        n=(-1)*n;
    }
    begin=i;
    while(n>0)
    {
        temp=n%10;
        s[i++]=(char)(temp+'0');
        n=n/10;
    }
    end=i-1;
    while(begin<=end)
    {
        temp=s[begin];
        s[begin++]=s[end];
        s[end--]=temp;
    }
    s[i]='\0';
        __asm__ __volatile__(
            "movl $1, %%eax \n\t"
            "movq $1, %%rdi \n\t"
            "syscall \n\t"
            :
            :"S"(s),"d"(i));
    return i;
}

int readi(int *eP)
{
    char s[MAX];
    int begin=0,end,value=0,i=0;
    do
    {
        __asm__ __volatile__(
            "movl $0, %%eax \n\t"
            "movq $1, %%rdi \n\t"
            "syscall \n\t"
            :
            :"S"(s+i), "d"(1)); 
    }while(s[i++]!='\n');
    i--;
    end=i-1;
    if(s[0]=='-')
        begin=1;
    while(begin<=end)
    {
        if(!(s[begin]>='0' && s[begin]<='9'))
        {
            (*eP)=ERR;
            return (*eP);
        }
        value=value*10+(int)(s[begin++]-'0');
    }

    if(s[0]=='-')
        value=-1*value;
    (*eP)=OK;
    return value;
}

int readf(float *fP)
{
    char s[MAX];
    int i=0, begin=0, dp=1, end;
    float value=0;
    do
    {
        __asm__ __volatile__(
            "movl $0, %%eax \n\t"
            "movq $1, %%rdi \n\t"
            "syscall \n\t"
            :
            : "S"(s+i), "d"(1)
        );
    }while(s[i++]!='\n');
    i--;
    end=i-1;
    if(s[0]=='-')
        begin=1;
    while(begin<=end && s[begin]!='.')
    {
        if(!(s[begin]>='0' && s[begin]<='9'))
        {
            (*fP)=ERR;
            return *fP;
        }
        value=value*10+(s[begin++]-'0');
    }
    begin++;
    while(begin<=end)
    {
        if(!(s[begin]>='0' && s[begin]<='9'))
        {
            (*fP)=ERR;
            return *fP;
        }
        value=value*10+(s[begin++]-'0');
        dp=dp*10;
    }

    value=value/dp;
    if(s[0]=='-')
        value=-1*value;
    (*fP)=value;
    return OK;
}

int printd(float f)
{
    char s[MAX];
    int i=0, begin=0, cha, end, temp, n, rem;
    float man;
    if(f==0.0)
        s[i++]='0';
    else if(f<0){
        s[i++]='-';
        f=-1*(f);
        begin=1;
    }
    cha=(int)f;
    man=f-cha;
    while(cha>0){
        s[i++]=cha%10+'0';
        cha=cha/10;
    }
    end=i-1;
    while(begin<=end){
        temp=s[begin];
        s[begin++]=s[end];
        s[end--]=temp;
    }
    s[i++]='.';
    begin=i;
    if(man==0.0)
        s[i++]='0';
    else
    {
        n=0;
        rem=0;
        while(n<10)
        {
            rem=(int)(man*10);
            s[i++]=(char)(rem+'0');
            man=man*10;
            man=man-rem;
            n++;
        }
    }
    s[i]='\0';
    end=i-1;
        __asm__ __volatile__(
            "movl $1, %%eax \n\t"
            "movq $1, %%rdi \n\t"
            "syscall \n\t"
            :
            :"S"(s),"d"(i));
    return i;
}