//ONP
#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
	int t,b_count=0,i=0,j,k;
	char output[100][400],input[400],op[400];
	cin>>t;
	for(;i<t;i++)
	{
		cin>>input;
		k=0;
		for(j=0;j<strlen(input);j++)
		{
			if(isalpha(input[j])) output[i][k++]=input[j];

			else if(input[j]=='(') continue;
			
			else if(input[j]==')') output[i][k++]=op[(b_count--)-1];

			else op[b_count++]=input[j];
		}
		output[i][k]='\0';
	}
	cout<<endl;
	for(i=0;i<t;i++)
		cout<<output[i]<<endl;
}