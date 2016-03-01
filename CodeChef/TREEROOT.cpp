#include <iostream>

using namespace std;

struct idnode
{
	int id, sid;
};

int main()
{
	int t,n,i,sum=0;
	ios_base::sync_with_stdio(false);
	idnode *k=NULL;
	cin>>t;
	while(t>0)
	{
		cin>>n;
		k = new idnode [n];
		sum=0;
		for(i=0;i<n;i++)
		{
			cin>>k[i].id>>k[i].sid;
			sum += k[i].id-k[i].sid;
		}
		cout<<sum<<"\n";
		delete []k;
		t--;
	}

}