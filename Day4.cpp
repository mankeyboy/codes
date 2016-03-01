#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
#define MAX 100
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
class numheap
{
	int A[MAX][2], IDX[MAX],n,N;	
	public:
	void makeheap(int);	
	int parent(int x){return (x/2);}
	int left(int x){ return (2*x);}
	int right(int x){ return (2*x+1);}
	int heapinswap(int,int);
	int upvote(int);
	int downvote(int);
	int deldata(int);
	void insert(int);
	void buildmax();
	void heapify(int);
	void printheap();
	void printiarray();	
	void refresh_id();
};
int numheap::deldata(int id)
{
	int temp=IDX[id];
	if(A[temp][1]==-1 && A[temp][0]==-1)
	{
		cout<<"Data not created\n";
		return 0;
	}
	else if(A[temp][1]==-1 && A[temp][0]!=-1)
	{
		cout<<"Data already deleted\n";
		return 0;
	}
	swap(&A[temp][1],&A[n][1]);
	swap(&A[temp][0],&A[n][0]);
	A[n][1]=-1;
	n--;
	int r=right(temp),i;
	for(i=r;i>0;i--)
		heapify(i);
}
void numheap::refresh_id()// Refreshing the ID Array
{
	int temp;
	for(int j=1;j<=N;j++)
	{
		temp=A[j][0];	
		IDX[temp]=j;
	}
}
int numheap::upvote(int id)// UPVOTE FUNCTION
{
	int temp,id_add=IDX[id];
	if(A[id_add][1]==-1)return 0;
	temp=heapinswap(id_add,A[id_add][1]+1);
	refresh_id();
	printheap();
	printiarray();
	return 1;
}
int numheap::downvote(int id)//DOWNVOTE FUNCTION
{
	int id_add=IDX[id];
	if(A[id_add][1]==-1)
	{	
		cout<<"Data deleted";
		return 0;
	}
	if(A[id_add][1]!=0)
		A[id_add][1]--;
	 else return 0;
	int temp=id_add;
	int r=right(temp),i=1;
	for(i=r;i>0;i--)
		heapify(i);
	refresh_id();
	printheap();
	printiarray();
	return 1;

}
void numheap::printheap()//PRINTING THE HEAP
{
	cout<<"\nCurrent heap: ("<<n<<" nodes)\n";	
	for(int i=1;i<=n;i++)
		cout<<"("<<A[i][0]<<","<<A[i][1]<<") ";
}
void numheap::printiarray()
{
	cout<<"\nCurrent Index array: ("<<N<<" cells used)\n";
	int temp=1;
	for(int i=1;i<=N;i++)
	{	
		temp=IDX[i];
		cout<<"("<<A[temp][0]<<","<<A[temp][1]<<") ";
	}		
	cout<<"\n-----------------------------\n";
}
void numheap::buildmax()
{
	int i;
	for(i=n/2;i>0;i--)
		heapify(i);
}
void numheap::heapify(int i)
{
	int l,r,largest;
	l=left(i);
	r=right(i);
	if(l!=-1 && l<=n && A[l][1]>A[i][1]) 
		largest=l;
	 else largest=i;
	if(r!=-1 && r<=n && A[r][1]>A[l][1])
		largest=r;
	if(largest!=i)
	{
		swap(&A[largest][1],&A[i][1]);
		swap(&A[largest][0],&A[i][0]);
		heapify(largest);
	}
}
void numheap::makeheap(int nint)
{
	int j=0,i=1,temp=0;
	n=N=nint;
	for(j=0;j<MAX;j++)
		A[j][0]=A[j][1]=-1;	
	for(j=0;j<nint;j++,i++)
	{
		A[i][1]=rand()%11;
		A[i][0]=i;
	}
	n=N=nint;
	printheap();
	cout<<"\nHeapifying";
	buildmax();
	refresh_id();
	cout<<"\n----------------------------\n";
	printheap();
	printiarray();
}
int numheap::heapinswap(int i,int rating)  //For maintaining heap property at insert
{
	int temp=0;
	if(rating<A[i][1])
		return temp;
	A[i][1]=rating;
	while(i>1 && A[(parent(i))][1]<A[i][1])
	{	
		swap(&(A[i][1]),&(A[(parent(i))][1]));
		swap(&(A[i][0]),&(A[(parent(i))][0]));
		i=parent(i);
		temp=1;
	}
	return temp;
}
void numheap::insert(int rating)
{
	int temp;
	for(int i=N;i>n;i--)
		A[i+1][0]=A[i][0];
	n=n+1;
	N=N+1;
	A[n][0]=N;
	A[n][1]=-200;
	temp=heapinswap(n,rating);
	refresh_id();
}
int main()
{
	srand((unsigned int)time(NULL));
	int nint,i=1,j,a=1,flag;	
	cin>>nint;
	numheap HEAP;
	HEAP.makeheap(nint);
	cout<<"\n1. INSERT(1) \n2. UPVOTE(2) \n3. DOWNVOTE(3)\n4. DELETE(4)\n";
	cin>>a;
	while(a==1 || a==2 ||a==3 || a==4)
	{
		switch(a)
		{
			case 1:
			{
				cout<<"\nINSERT(rating): ";
				cin>>i;
				i%=11;
				HEAP.insert(i);
				HEAP.printheap();
				HEAP.printiarray();
				cout<<"Choice: ";
				cin>>a;
				break;
			}	
			case 2:
			{
				cout<<"\nUPVOTE(id)(should be valid id): ";
				cin>>i;
				flag=HEAP.upvote(i);
				if(flag)cout<<"\nSuccessful!\n";
				cout<<"Choice: ";
				cin>>a;
				break;
			}
			case 3:
			{
				cout<<"\nDOWNVOTE(id)(should be valid id): ";
				cin>>i;
				flag=HEAP.downvote(i);
				if(flag)cout<<"\nSuccessful!\n";
				cout<<"Choice: ";
				cin>>a;
				break;
			}
			case 4:
			{
				cout<<"\nDELETE(id)(should be valid id): ";
				cin>>i;
				flag=HEAP.deldata(i);
				if(flag)cout<<"\nSuccessful!\n";
				HEAP.printheap();
				HEAP.printiarray();
				cout<<"Choice: ";
				cin>>a;
				break;
			}
			default:
			{
				cout<<"\nPeace";
				break;
			}
		}	
	}
}