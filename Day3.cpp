#include<iostream>
using namespace std;

class treenode
{
	treenode *l, *r, *p;//Left, right and parent
	int v,c;//Value and Count
	public:
	treenode()//Constructor
	{ 
		l=p=r=NULL;
		v=-1;
		c=0;
		//cout<<"\n"<<v<<"\n";
		//l->v=r->v=-1;
		//l->c=r->c=0;
	}
	treenode * tryinsert(treenode *, int,treenode **);
	treenode * trydelete(treenode *, int,treenode **);
	treenode * successor(treenode *);
	treenode * findele(treenode *,int);
	void incrcount(treenode *);
	void decrcount(treenode *);
	void preorder(treenode *);
};
treenode * treenode::tryinsert(treenode *root, int newv, treenode **padd)
{
	treenode *y=NULL, *x=root;
	treenode *n=new treenode;
	n->v=newv;
	if(x==NULL)
	{	root=n;
		(root->c)++;
		*padd=y;
		return root;
	}
	if((x->v)==newv)
	{
		delete n;
		return x;
	}
	while(x!=NULL)
	{	y=x;
		//cout<<x->v<<"\n"<<newv;
		if((x->v)>newv)
			x=x->l;
		else if((x->v)<newv)
			x=x->r;
		else
		{
			delete n;
			return root;
		}
	}
	n->p=y;
	if((n->v)<(y->v))
	 	{y->l=n;(n->c)++;}
	else if((n->v)>(y->v))
	 	{y->r=n;(n->c)++;}
	else
		return root;
	*padd=y;
	return root;
}
void treenode::incrcount(treenode *padd)
{
	if(padd==NULL)//Either Insert Didn't Work or root reached
	return;
	else 
	{ (padd)->c++;
	  incrcount(((padd)->p));
	}
}
void treenode::preorder(treenode *root)//Output
{
	static int k=0;
	int i=0;
	if(root==NULL)
		return;
	else
	{	cout<<root->v<<"("<<root->c<<") -> ";//<<(root->l)->v<<"("<<(root->l)->c<<") , "<<(root->r)->v<<"("<<(root->r)->c<<")\n";
		if((root->l)==NULL)cout<<"-1(0) , ";
		else cout<<(root->l)->v<<"("<<(root->l)->c<<") , ";
		if((root->r)==NULL)cout<<"-1(0)\n";
		else cout<<(root->r)->v<<"("<<(root->r)->c<<")\n";
		preorder(root->l);
		preorder(root->r);
		cout<<"\n";
	}
}
treenode * treenode::successor(treenode *x)
{
	if(x->r!=NULL)
		while((x->r)->l!=NULL)x->r=(x->r)->l;
	treenode *y=x->p;
	while(y!=NULL && x==(y->r))
	{
		x=y;
		y=y->p;
	}
	return y;
}
treenode * treenode::findele(treenode *root,int newv)
{
	treenode *ele=NULL;
	while(root!=NULL)
	{
		if((root->v)==newv)
		{	
			ele=root;
			break;
		}
		else if((root->v)>newv)
			root=root->l;
		else if((root->v)<newv)
			root=root->r;
	}
	return ele;
}
treenode * treenode::trydelete(treenode *root, int newv, treenode **padd)
{
	treenode *y=NULL, *x=NULL;
	treenode *add=findele(root,newv);
	if(add==NULL)
		return root;
	else
	{
		if((add->l)==NULL || ((add->r)==NULL))
			y=add;
		 else
			y=successor(add);
		*padd=y->p;
		if((y->l)!=NULL)
			x=y->l;
		 else
			x=y->r;

		if(x!=NULL)
			x->p=y->p;

		if((y->p)==NULL)
			root=x;
		 else if(y==((y->p)->l))
		 	((y->p)->l)=x;
		 else 
		 	((y->p)->r)=x;
		
		if(y!=add)
			(add->v)=(y->v);
		delete y;
	}
	return root;
}
void treenode::decrcount(treenode *padd)
{
	if(padd==NULL)//Either Delete Didn't Work or Root Deleted/Reached
	return;
	else 
	{ (padd)->c--;
	  decrcount(((padd)->p));
	}
}
int main()
{
	treenode *treeroot=NULL;
	treenode *newadd=NULL;
	int nins,ndel, i=0, newv=-1;
	cin>>nins;
	for(i=0;i<nins;i++)
	{
	 	cin>>newv;
	 	treeroot=treeroot->tryinsert(treeroot,newv,&newadd);
	  	treeroot->incrcount(newadd);
	  	treeroot->preorder(treeroot);
	  	cout<<"\n";
	  	newadd=NULL;
	}
	cin>>ndel;
	for(i=0;i<ndel;i++)
	{
	 	cin>>newv;
	 	treeroot=treeroot->trydelete(treeroot,newv,&newadd);
	  	treeroot->decrcount(newadd);
	  	treeroot->preorder(treeroot);
	  	cout<<"\n";
	  	newadd=NULL;
	}
	return 0;	
}