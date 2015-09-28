#include <stdlib.h>
#include <stdio.h>
int main()
{
	int t,i,c=0;
	char c1=0,c2=0;
	scanf("%d", &t);
	while(t!=0)
	{
		c=1;
		c1=getch();
		c2=getch();
		while(c1!='\r'|| c2!='\r')
		{
			if((c1-'0')*10+(c2-'0')>0 && (c1-'0')*10+(c2-'0')<=27)
				c++;
			c1=c2;
			c2=getch();
		}
		printf("%d\n",c);t--;
	}
}
