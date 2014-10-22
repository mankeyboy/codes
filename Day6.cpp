#include<iostream>
using namespace std;
#define NDEPT 18
const char DEPT[NDEPT][3] =
{ "AG", "AR", "BT", "CE", "CH", "CS", "CY", "EC", "EE",
"GG", "HS", "IE", "MA", "ME", "MI", "MT", "NA", "PH" };
class student
{ 
	char roll[10];
	float cg;
	public:
	void input();
	void output();
	void sort(student *,student *,int);
};
void student::input()
	{
		cout<<"\nEnter Roll No. and CGPA: ";
		cin>>roll;
		for(int i=0; i<9;i++)
		{
			if(i==2||i==3)continue;// Except for 3rd and 4th letter, we need the rest as int, not char. 
			roll[i]=roll[i]-'0';
		}
		cout<<" : ";
		cin>>cg;
	}
void student::output()
	{
		cout<<"\nRoll No. and CGPA: ";
		for(int i=0; i<9;i++)
		{
			if(i==2||i==3)continue;//We have to print the characters, not integer values. 
			roll[i]=roll[i]+'0';
		}
		cout<<roll;
		for(int i=0; i<9;i++)
		{
			if(i==2||i==3)continue;// Except for 3rd and 4th letter, we need the rest as int, not char. 
			roll[i]=roll[i]-'0';
		}
		cout<<" : "<<cg;
	}
void student::sort(student *in, student *out, int n)
{
	int C[10];
	int i,j=0,k=8,t,t1;
	for( ;k>=0;k--)
	{	
		t=(int)in[0].roll[k];
		for(i=0;i<10;i++)
			C[i]=0;
		for(j=0;j<n;j++)
		{
			t=(int)(in[j].roll[k]);
			C[t]+=1;
		}
		for(i=1;i<10;i++)
			C[i]+=C[i-1];
		for(j=n-1;j>=0;j--)
		{
			t=(int)(in[j].roll[k]);
			t1=C[t];
			for(i=0;i<9;i++)
			out[t1-1].roll[i]=in[j].roll[i];
			C[t]--;
		}
		for(j=0;j<n;j++)
		{
			cout<<"\nTry "<<j+1;
			out[j].output();
		}
	}	
}
int main()
{
	int n,i;
	student in_list[100];
	student out_list[100];
	cout<<"Enter number of records: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		in_list[i].input();
		out_list[i]=in_list[i];
	}
	for(i=0;i<n;i++)
	{
		out_list[i].output();
	}
	in_list->sort(in_list,out_list,n);
}
	