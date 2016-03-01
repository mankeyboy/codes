#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct node//Basic Node Structure
{ 	
	int num;
	struct node *left;
	struct node *right;
}TREENODE;
//Construct Function
TREENODE* construct(TREENODE *stree,int *arr, int n)
{
	if(n==0)
 	{ 
		stree->left=NULL;
		stree->right=NULL;
		return stree;
	}
	TREENODE *temp=(TREENODE *)malloc(sizeof(TREENODE));	
	stree->left=temp;
	TREENODE *temp2=(TREENODE *)malloc(sizeof(TREENODE));
	stree->right=temp;
	stree->num=*arr;
	//printf("%d\n",stree->num);
	int i;
	i=rand()%3;
	if(i==0)
	{	
		stree->right=construct(stree->right,(arr+1),n-1);
	}
	if(i==1)
	{	
		stree->left=construct(stree->left,(arr+1),n-1);
	}
	if(i==2)
	{
		
		stree->left=construct(stree->left,(arr+1),((n)/2));
		stree->right=construct(stree->right,(arr+1+(n)/2),(n-(n)/2));
	}
}

void preorder (TREENODE *tree)//Preorder Print Algo
{ 
	if( tree==NULL)return;
	printf("%d ", tree->num);
	preorder(tree->left);
	preorder(tree->right);
}	

void main()//Main Function
{
	int n,A[200],i;
	scanf("%d", &n);
	srand((unsigned int)time(NULL));
	fflush(stdin);
	for(i=0;i<n;i++)
		scanf("%d", &A[i]);
	TREENODE *tree,*temp;
	temp=(TREENODE *)malloc(sizeof(TREENODE));
	tree=temp;
	tree=construct(tree,A,n);
	preorder(temp);
	printf("\n Yo!");
}

