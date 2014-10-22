#include <iostream>

using namespace std;

int main()
{
	int a, flag=1, out[10], n=0, i=0;
	cout<<"Input"<<endl;
	for(;i<5;i++)//Input 5 integers
	{
		cin>>a;
		if(a==42)
		{
			flag=0;
		}
		if(flag) 
		{
			out[i]=a;n++;
		}
	}
	cout<<"Output"<<endl;
	for(i=0;i<n;i++)//Output
		cout<<out[i]<<endl;
}