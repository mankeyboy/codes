#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t;
	ios_base::sync_with_stdio(false);
	double p,s,del,l1,l2,h1,h2, p1, vol=0;
	cin>>t;
	while(t>0)
	{
		cin>>p>>s;
		p1=p/4;
		del=sqrt(4*p1*p1-6*s);
		l1=(del+2*p1)/6;
		l2=(2*p1-del)/6;
		h1=p1-2*l1;
		h2=p1-2*l2;
		vol=max(l1*l1*h1, l2*l2*h2);
		cout<<vol<<"\n";
		t--;
	}


}