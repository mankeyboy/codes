#include <iostream>
using namespace std;
long long factorial(long long i)
{
	if(i==1)return 1;
	return i*factorial(i-1);
}
int main()
{
	long long int i, t, x1, y1, x2, y2, sum1,x,y,sum=0;
	cin>>t;
	while(t!=0)
	{
		cin>>x1>>y1>>x2>>y2;
		x=((x1-x2)>0)?(x1-x2):(-1)*(x1-x2);y=((y1-y2)>0)?(y1-y2):(-1)*(y1-y2);
		sum1=x+y;
		if((x==0 && y==0) || (x==0 && y!=0) || (x!=0 && y==0))sum=1;
		else {sum=(factorial(sum1))/factorial(x);sum/=factorial(y)*2;}
		cout<<sum<<endl;
		t--;
	}

}