#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
struct protein
{
  int val,ind;
  char name;
};
void arrange(protein *p, int var)
{
  
}
void classify(int *a, string s)
{
  for(int i=0;i<s.size();i++)
    {
      a[(int)(s[i]-'a')]++;//incrementing in a character wise manner
    }
}
void calc(int req, int *outfreq, int *infreq, protein *p, int i, int var)
{
  int k1, k2;
  k1=req/(p[i].val);
  k2=req%(p[i].val);
  if(infreq[i]>=k1)
  {
    outfreq[i]=k1;
    if ((req-(k1*p[i].val)) && i+1==var)//Reach the end with protein values unaccounted for---1
    {
      outfreq[0]=-1;
      return;
    }
    if ((req-(k1*p[i].val)) && i+1!=var)
      calc(req-(k1*p[i].val), outfreq, infreq, p, i+1, var);//Apply same code on array minus 0-ith index---2
    if (k2==0)return;
  }
  if(infreq[i]<k1)
  {
    outfreq[i]=infreq[i];
    if ((req-(infreq[i]*p[i].val)) && i+1==var)//---1
    { 
      outfreq[0]=-1;
      return;
    }
    if ((req-(infreq[i]*p[i].val)) && i+1!=var)
      calc(req-(infreq[i]*p[i].val), outfreq, infreq, p, i+1, var);//---2
    if (k2==0)return;
  }  
}

int main()
{
  int t, var, req, i=0, j=0, *a, *b;
  scanf("%d", &t);//Number of Test Cases
  string s;//To store the string for every test case
  protein *p;//To create protein name-value array for every case
  while(t!=0)
    {
      scanf("%d", &var);//Number of characters per test case
      printf("\b");
      p=new protein[var];
      a=new int[var];//To store frequency value of inputted string
      b=new int[var];//To store frequency value of output string
      i=var;
      for(j=0;j<var;j++)
      {
        a[j]=b[j]=0;//Initializing frequencies to 0.
      }
      while(i!=0)
	     {
	       scanf("%d", &p[var-i].val);//getting value for every protein
	       p[var-i].name = 'a'+(var-i);//initializing protein name
	       p[var-i].ind = var-i;
         i--;
	     }
      arrange (p,var);
      cin>>s;//Entering string
      classify(a,s);//classifying the frequency of every character in entered sequence
      scanf("%d", &req);//Required protein value
      calc(req, b, a, p, 0, var);
      if(b[0]==-1)printf("IMPOSSIBLE\n");
      else 
      {
        for(j=0;j<var;j++)
        {
          if(b[j]!=0)
          {
            for(i=0;i<b[j];i++) 
              printf("%c", p[i].name);
            printf("\n");
          }
        }
      }
      for(i=0;i<var;i++)cout<<p[i].name<<" : "<<p[i].val<<" input: "<<a[i]<<" out: "<<b[i]<<endl;
      t--;
      delete []p;
      delete []a;
      delete []b;
    }
  
}
