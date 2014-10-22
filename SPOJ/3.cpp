//PRIME1
#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
	long k1, k2, i=0, j, k, test=0, p[100000];
	scanf("%d",&test);
	cout<<endl;
	int q[10][2];
   	while(i<test)
	{
		cin>>q[i][0];
		cin>>q[i++][1];
		cout<<endl;
	}
	i=0;
	while(i<test)
	{
		k2 = q[i][1]; k1=q[i][0];
		for(j=0;j<(k2-k1);j++)
			p[j]=0;
		if(k2==4)
		{
			if(k1==1)cout<<"\n2\n3";
			else if(k1==2)cout<<"\n3";
		}
		else if(k2==3 && k1==1)cout<<"\n2";
		for(k=2;k<=(int)(sqrt(k2));k++)
		{
			for(j=1;j<(k2-k1);j++)
			{
				if(!p[j])
				{
					if ((j+k1)%k == 0)
					{
						p[j]=1;
					}
				}
			}
		}
		cout<<"\n";
		if(k2>4)
		{
			for(j=1;j<(k2-k1);j++)
			{
				if(p[j]==0)cout<<j+k1<<"\n";
			}
		}
		
		i++;
	}
	
	return 0;
}
