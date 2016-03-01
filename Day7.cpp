#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

#define NDEPT 23 
const char dep[NDEPT][3] =
{ "AE", "AG", "AR", "BT", "CE", "CH", "CS", "CY", "EC", "EE", "EX", "GG","HS", "IE", "IM", "MA", "ME", "MF", "MI", "MT", "NA", "PH", "QD" };
int nextprime(int);
class student
{
	public:
	char roll[10];
	float cg;
	student()
	{
		char roll[10];
		cg=-1;
	}
	void printstu(student a)
	{	
		if(a.cg == -1)
			cout<<"EMPTY\n"<<endl;
		else if(a.cg == -2)
			cout<<"DELETED\n"<<endl;
		else cout<<a.roll<<" , "<<a.cg<<endl;
	}
	student * emptable(int k)
	{
		int p=nextprime(k);
		student * table= new student[p];
		return table;
	}
	int rehash(student **, int, int *, short int);
	//int insertk(student *, int, int);
	int insert(student **, int, int *, student);
	int search(student *, int *, int, int, student);
	int endelete(student **, int, int *, int *, student);
};
typedef student* stu;
void printhash(student *,int);
int bsearch(char *);
int hashfn(long int, int, int, int , stu);
int hashfnsearch(long int, int, int, int , stu, student);
//Declarations
int nextprime(int p)
{
	int f=((2*p)+1),limit,i,prime,flag=0;
	int g=f;
	while(!flag)
	{
		limit=(int)sqrt(f);
		for(i=2;i<=limit;i++)
		{
			if(g%i==0)break;
			if((i==limit) && (g%i!=0))
			{flag=1;prime=g;}
		}
		g++;
	}
	return prime;				
}

// Binary Search for Department Index Search
int bsearch(char *dept)
{
	int size=23;        
	int f=0;
        int l=size-1;
	int m;
        int flag=0;

        while(!flag && f<=l)
        {
            m=(f+l)/2;
            if (!strcmp(dep[m],dept))
                flag = 1;
            else if (strcmp(dep[m],dept)>0)
                l=m-1;
            else
                f=m+1;
        }
	return m;
}

// Print Function	
void printhash(stu table, int k)
{
	int i=0;
	for(i=0;i<k;i++)
		{
			cout<<"\nEntry "<<i<<" : ";	
			table->printstu(table[i]);
		}
}

// Main Hash Function
int hashfn(long int con, int id, int k, int l,stu table)
{
	long int val=0;
	for(int i=0;i<(l/2) ;i++)
	{
		val=(con+id+i*i)%l;
		if(table[val].cg==-1)break;
	}return val;
}

//Search Implementation
int hashfnsearch(long int con, int id, int k, int l,stu table,student temp)
{
	long int val=0;int place;
	for(int i=0;i<(l/2);i++)
	{
		val=(con+id+i*i)%l;
		if(table[val].cg==-1)
			{
				place=-1;break;
			}
		if(!strcmp(table[val].roll,temp.roll))
			{
				place=val;break;
			}
	}return place;
}
int student::search(student * table, int * address, int k, int l, student temp)
{
	long int k1=1, t=0;
	for(int i=8;i>=0;i--)
		{
			if(i==3)i=i-2;
			t+=(temp.roll[i]-'0')*k1;
			k1*=10;
		}
	char idchar[3];
	idchar[0]=temp.roll[2];idchar[1]=temp.roll[3];idchar[2]='\0';
	int id=bsearch(idchar);
	*address=hashfnsearch(t,id,k,l,table,temp);
	if(*address==-1) 
		return 0;
	else cout<<"\nFound : C.G: "<<table[*address].cg<<endl;
	return 1;
}



//Functions to insert and rehash
int student::insert(student ** table, int i, int *l, student temp)
{
	int j=0, index=-1;
	if(!(search(*table, &index, i, *l, temp)+1))//Check for roll number if it is already present or not	
			return -1;
	if(2*(i+1)>(*l))
		(*l)=(*table)->rehash(table, i, l, 1);
	long int t=0,k1=1;
	for(j=8;j>=0;j--)
	{
		if(j==3)j=j-2;	
		t+=(temp.roll[j]-'0')*k1;
		k1*=10;
	}
	char idchar[3];
	idchar[0]=temp.roll[2];idchar[1]=temp.roll[3];idchar[2]='\0';
	
	int id=bsearch(idchar);
	index=hashfn(t,id,i,*l,(*table));
	
	(*table)[index]=temp;
	return index;

}

int student::rehash(student **table, int k, int *l, short int a)
{
	int osize=*l;
    if(a==1)(*l)=nextprime(k+1);
    int i,j=0,n=-1;

    stu ntable=new student[(*l)];
    //fill in the new table with old data
    for (i=0;i<osize; i++)
    {
        if(!(((*table)[i].cg==-1) || ((*table)[i].cg==-2)))
        {	
        	n=ntable->insert(&ntable,j,l,(*table)[i]);
            j++;            
        }
    }
    delete [] (*table);// Delete Old Table
    *table = ntable;
    return *l;
}

//Function to insert k entries in the beginning
/*int student::insertk(student * table, int k, int l)
{	
	student temp;
	int i=0, j=0;
	for(i=0;i<k;i++)
	{	
		cin>>temp.roll>>temp.cg;
		if((i!=0) && !(search(table, &index, i,l)+1))//Check for roll number already present	
			continue;
		long int t=0,k1=1;
		for(j=8;j>=0;j--)
		{
			if(j==3)j=j-2;	
			t+=(temp.roll[j]-'0')*k1;
			k1*=10;
		}
		char idchar[3];
		idchar[0]=temp.roll[2];idchar[1]=temp.roll[3];idchar[2]='\0';
		
		int id=bsearch(idchar);
		int index = -1;

		
		index=hashfn(t,id,k,l,table);
		
		cout<<"\nPosition Inserted at: "<<index<<endl;
		table[index]=temp;
	}
	return k;	
}
*/

//Deletion Function
int student::endelete(student **table, int k, int *l, int *d, student temp)
{
	int j=0, index=-1;
	if(!(search(*table, &index, k, *l, temp)+1))//Check for roll number if it is already present or not	
			return -1;
	long int t=0,k1=1;
	for(j=8;j>=0;j--)
	{
		if(j==3)j=j-2;	
		t+=(temp.roll[j]-'0')*k1;
		k1*=10;
	}
	char idchar[3];
	idchar[0]=temp.roll[2];idchar[1]=temp.roll[3];idchar[2]='\0';
	
	int id=bsearch(idchar);
	index=hashfnsearch(t,id,k,*l,*table,temp);
	(*table)[index].cg=-2;(*d)++;
	if(5*(*d)>=(*l))
		(*l)=(*table)->rehash(table, k, l, 2);
	printhash(*table, *l);
	return 1;
}

//Main

int main()
{
	int k,i,j,l,d=0,n=0,index;
	student temp, t;
	cout<<"Enter no. Entries: ";
	cin>>k;
	l=nextprime(k);
	stu table=table->emptable(l);
	printhash(table, l);
	for(i=0; i<k; i++)
	{
		cin>>temp.roll>>temp.cg;
		index=table->insert(&table,i,&l,temp);
		n++;
		if(index==-1){cout<<"\nUnsuccessful\n";n--;}
	}
	printhash(table, l);

	cout<<"\nEnter Options(0/other than the following to Exit): \n1. Search\n2. Insert \n3. Delete\n";
	cin>>j;
	while(j)
	{
		switch(j)
		{
			case 1:

			//Searching

		{	
			cout<<"\n++++Searching:\t";
			cin>>t.roll;
			if(table->search(table,&index,n,l,t))
			{
				cout<<"\nSuccessful"<<endl;
				cout<<"Address of entry is at: "<<index<<endl;
			}
			else cout<<"\nNot found!";
			//printhash(table, l);
			break;
		}

			//Insertion

			case 2:
			
		{
			cout<<"\n++++Insertion:\t";
			cin>>temp.roll>>temp.cg;
			index=table->insert(&table,n,&l,temp);
			if(index==-1)
				cout<<"\nUnsuccessful!\n";	
			else 
				{
					cout<<"\nPosition Inserted at, index: "<<index<<endl;
					n++;
				}
			printhash(table, l);
			break;
		}
			
			//Deletion
			
			case 3:
			
		{	
			cout<<"\n++++Deleting:\t";
			cin>>t.roll;
			if(table->endelete(&table,n,&l,&d,t)==1)
				{
					cout<<"\nSuccessful!"<<endl;
					n--;
				}
			else cout<<"\nNot found!";
			break;
		}

			default: break;
		}
		cout<<"\nRe-enter option: ";
		cin>>j;
	}
}