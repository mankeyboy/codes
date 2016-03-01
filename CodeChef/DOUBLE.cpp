#include <iostream>

using namespace std;

int main()
{
	int t;
	long long int k;
	ios_base::sync_with_stdio(false);
	cin>>t;
	while(t>0)
	{
		cin>>k;
		if(k%2==0)
			cout<<k<<"\n";
		else cout<<k-1<<"\n";
		t--;
	}
}