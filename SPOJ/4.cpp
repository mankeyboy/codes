//FCTRL
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int maxpow(int a)
{
  if(a>=5)
    return 1+maxpow(a/5);
  else return 0;
}

int main()
{
  int *p, *q, n;
  scanf("%d", &n);
  p=new int[n];
  q=new int[n];
  for(int i=0;i<n;i++)
    scanf("%d",&p[i]);
  for(int i=0;i<n;i++)
    {
      int k=0;
      k = maxpow(p[i]);
      q[i]=0;
      while(k!=0)
	{ 
	  int a=5;
	  q[i]+=(p[i]/a);
	  p[i]/=5;
	  a*=5;
	  k--;
	}
    }
  printf("\n");
  for(int i=0;i<n;i++)
    printf("%d\n",q[i]);
  return 0;
}
