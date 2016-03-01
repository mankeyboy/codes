#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

//Function Prototypes

int issubseq(char *, char *);
char * genBt( char *, int);
char * findt(char *,char *, int *);

//Function Declarations

int issubseq(char A[1000], char B[])
{
  int i,j,l_a,l_b,f=0;
  l_a=strlen(A);
  l_b=strlen(B);
  if(l_b>l_a)return 0;
  for(i=0,j=0;i<l_a,j<l_b;i++)
  {
    if(A[i]==B[j])
    j++;
  }
  if(B[j]=='\0')f=1;//Reached final letter of B or Bt
  return f;
}

char* genBt( char *B,int t)
{
  int i,j,k=0,f,l_b,l_bt;
  l_b=strlen(B);
  l_bt=l_b*t;//length of to be string
  char *A=new char[l_bt+1];
  for(i=0,j=0;i<l_b,j<l_bt;i++)
  {
    k=t;
    while(k>0)
    {A[j]=B[i];j++;k--;}//copying t times
  }
  A[j]='\0';
  cout<<"\nTry : "<<A<<endl;//Making it string
  return A; 
}

char * findt(char A[1000], char B[], int *t)
{
  int t_max,m,m1=1,i=1,f=1,l=0,l_a,l_b,l_bt;
  l_a=strlen(A);
  l_b=strlen(B);
  t_max=l_a/l_b;
  l=t_max;m=0;
  char *Bt1=NULL, *Bt2=NULL;
  if(!issubseq(A,B))
  return 0;
  while((l-f)==1 || (l-f)==0 || (l-f)==-1)
  { 
    i=(f+l)/2;
    l_bt=l_b*(i);
    Bt1=genBt(B,i);//generating Bt
    if(issubseq(A,Bt1))
    {
      if(Bt2==NULL)//Error Check
      Bt2=Bt1;
      else
      { 
        delete []Bt2;//Free memory allocated to B(t-1) since Bt is subsequent.
        Bt2=Bt1;//Maintaining this array
      }f=i;m=m1;m1=i;
    }
    else l=i;   
  }
  *t=f;
  return Bt2;
}
  /*for(i=1;bcase!=0;)
  {
    if((j+i)==1) //base case
    { 
      if(issubseq(A,B))
      {
        i*=2;
        k=1;
      }
      else f=0;
    }
    else
    { 
      l_bt=l_b*(j+i);
      Bt1=genBt(B,(j+i));//generating Bt
      if(issubseq(A,Bt1))
      {
        k=j+i;
        if(Bt2==NULL)//Error Check
        Bt2=Bt1;
        else
        { 
          delete []Bt2;//Free memory allocated to B(t-1) since Bt is subsequent.
          Bt2=Bt1;//Maintaining this array
        }
        if((j+i*2)<=t_max)i*=2;
      }
      else f=0;
    }
    if(!f && k>2)
    {k-=i/2;j+=i/2;i=1;}
  }*/       

int main()
{
  int t,i,j,k=0;
  char A[1000], B[100], *Bt;
  cout<<"A = ";
  cin>>A;
  cout<<"B = ";
  cin>>B;
  Bt = findt (A , B, &t);//Function call
  cout<<"t = "<<t;
  if(t==0)
    cout<<"\n"<<A<<"\n Trivial Subsequent";
  else
  {
    cout<<"\n"<<A<<endl;
    for(i=0,j=0;i<strlen(A),j<strlen(Bt);i++)
    {
      if(A[i]==Bt[j])
      { 
        cout<<Bt[j];
        j++;
      }
      else cout<<" ";
    }
    cout<<"\n";
    for(i=0,j=0;i<strlen(A),j<strlen(Bt);i++)
    {
      if(A[i]==Bt[j])
      { 
        if(k==0 || k==t-1)
        {cout<<"|";
         j++;k++;}
        else
        {cout<<"-";
         j++;k++;}
        if(k==t-1)
        k=0;
      }
      else 
      {
        if(k==0)cout<<" ";
        else cout<<"-";
      }
    }
  }
}