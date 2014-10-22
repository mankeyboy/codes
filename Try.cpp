#include<iostream>
using namespace std;
void swap(long long int *, long long int *);
void quicksort(long long int *, long int, long int);
long int partition(long long int *,long int, long int);
long long int sum(long long int *,long int);
void swap(long long int *x1, long long int *x2)
{   long long int temp=*x2;
    *x2=*x1;
    *x1=temp;
}
void quicksort(long long int *A, long int p, long int r)
{   long int q;
    if(p<r)
        {q=partition(A,p,r);
         quicksort(A,p,q-1);
         quicksort(A,q+1,r);
        }
}
long int partition(long long int *A,long int p, long int r)
{   long long int x,y;
    long int i,j;
    x=A[r];
    i=p-1;
    for(j=p;j<=r-1;j++)
     {  if(A[j]<=x)
        {   i++;
            swap(&A[i],&A[j]);
        }
     }
    swap(&A[i+1],&A[r]);
    return i+1;
}
long long int sum(long long int *A,long int q)
{   long long int k=0;
    long int i=0;
    while(i<q)
        k+=A[i++];
    k=k%1000000007;
    cout<<k;
    return k;
}
int main()
{   long int n,q,i;
    long long int k=0;
    cin>>n;
    cin>>q;
    long long int *A=new long long int[n];
    for(i=0;i<n;i++)
        cin>>A[i];
    long int *B=new long int[q];
    for(i=0;i<q;i++)
        cin>>B[i];
    quicksort(A,1,n);
    for(i=0;i<q;i++)
        cout<<sum(A,B[i])<<"\n";
}