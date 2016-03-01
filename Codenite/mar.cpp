#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void min(string s)
{
  int min=0;
  for(int i=0;i<s.length();i++)
      if(s[min]>s[i])min=i;
  string k1=s.substr(0,min);
  string k2=s.substr(min,s.length());
  s=k2+k1;
  cout<<s<<endl;
}

int main() 
{
    int v, j, i, *val=NULL;
    int k=0;
    char c, beg, end='\0';
    scanf("%d", &v);
    val=new int[v];
    vector<string> str(v);
    string s;
    for(i=0;i<v;i++)
    {   
      cin>>str[i];
    }
    for(i=0;i<v;i++)
    {   
      j=0;val[i]=-1;
      c=str[i][j];
      while(c!='\0' )
	{
	  if(j==0)
	    {
	      beg=c;
	    }
	   if(val[i]!=-1)
	    {
	      if( !( c==str [i][(j%val[i])] ) )
		{val[i]=-1;//k=false;
		}
	    }
	  if(j!=0 && c==beg)
	    {
	      	end=str[i][j-1];
		if(val[i]==-1)	
		   val[i]=j;
	      
	    }
	 
	      
	    
	  j++;
	  c=str[i][j];
	}
      
     
    }
    
    for(i=0;i<v;i++)
    {   
      s=str[i].substr(0,val[i]);
      min(s);
    }
    return 0;
}
