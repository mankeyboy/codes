#include<iostream>
using namespace std;

class treenode
{
	treenode *l, *r, *p;//Left, right and parent
	int v;//Value
	float pri;//Priority Value 
	public:
	static int k;
	treenode()//Constructor
	{ 
		l=p=r=NULL;
		v=-1;
		pri=0;
		k++;
	}
	~treenode()
	{
		k--;
	}
	treenode * tryinsert(treenode *, int, float, treenode **);
	treenode * treap_in(treenode *,treenode *);
	treenode * trydelete(treenode *, int, float, treenode **);
	treenode * treap_del(treenode *,treenode *);
	treenode * successor(treenode *);
	treenode * findele(treenode *,int);
	treenode * lrotate(treenode *);
	treenode * rrotate(treenode *);
	void preorder(treenode *);
};
int treenode::k=0;
treenode * treenode::tryinsert(treenode *root, int newv,float val, treenode **padd)
{
	treenode *y=NULL, *x=root;
	treenode *n=new treenode;
	n->v=newv;
	n->pri=val;
	if(x==NULL)
	{	
		root=n;
		*padd=root;
		return root;
	}
	if((x->v)==newv)
	{
		delete n;
		return x;
	}
	while(x!=NULL)
	{	
		y=x;
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
	 	y->l=n;
	else if((n->v)>(y->v))
	 	y->r=n;
	else
		return root;
	*padd=n;
	return root;
}
treenode * treenode::lrotate(treenode *q)
{
	treenode *x=q->r;
	q->r=x->l;
	if((x->l)!=NULL)
		(x->l)->p=q;
	x->p=q->p;
	if(q->p!=NULL)
	{
		if(q==(q->p)->l)
			(q->p)->l=x;
		else (q->p)->r=x;
	}
	x->l=q;
	q->p=x;
	return x;
}
treenode * treenode::rrotate(treenode *q)
{
	treenode *x=q->l;
	q->l=x->r;
	if((x->r)!=NULL)
		(x->r)->p=q;
	x->p=q->p;
	if(q->p!=NULL)
	{
		if(q==(q->p)->r)
			(q->p)->r=x;
		else (q->p)->l=x;
	}
	x->r=q;
	q->p=x;
	return x;
}
treenode * treenode::treap_in(treenode *root,treenode *b)
{
	if(b==NULL)return root;
	treenode *a=b;
	treenode *q=a->p;
	while(q!=NULL && ((a->pri)>(q->pri)))
	{
		if(a==q->l)
			a=rrotate(q);			
		else
			a=lrotate(q);
		q=a->p;
	}
	if((a->p)==NULL)root=a;
	return root;
}
void treenode::preorder(treenode *root)//Output
{
	if(root==NULL)
		return;
	else
	{	cout<<root->v<<"("<<root->pri<<") -> ";//<<(root->l)->v<<"("<<(root->l)->c<<") , "<<(root->r)->v<<"("<<(root->r)->c<<")\n";
		if((root->l)==NULL)cout<<"-1(0) , ";
		else cout<<(root->l)->v<<"("<<(root->l)->pri<<") , ";
		if((root->r)==NULL)cout<<"-1(0)\n";
		else cout<<(root->r)->v<<"("<<(root->r)->pri<<")\n";
		preorder(root->l);
		preorder(root->r);
	}
}
treenode * treenode::successor(treenode *x)
{
	treenode *z=x->r;
	if(x->r!=NULL)
		{
			while((z->l)!=NULL)z=z->l;
			return z;
		}
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
treenode * treenode::treap_del(treenode *root, treenode *b)
{
	if(b==NULL)return root;
	int f=0;
	treenode *a=b, *largest=NULL;
	while((!f) && (a->l!=NULL || a->r!=NULL))//leaf Node reached
	{
		largest=a;
		if(a->l!=NULL)
			{
				if((a->pri)<((a->l)->pri))
					largest=a->l;
			}
		if(a->r!=NULL)
			{
				if((largest->pri)<((a->r)->pri))
					largest=a->r;
			}
		if(largest==a)
			f=1;
		if(largest==a->l)
			{
				a=rrotate(a);
				a=a->r;
			}
		if(largest==a->r)
			{
				a=lrotate(a);
				a=a->l;
			}
	}
	if(root==a)	
		{
			while(root->p!=NULL)root=root->p;
		}
	return root;
}
treenode * treenode::trydelete(treenode *root, int newv,float pri, treenode **padd)
{
	treenode *y=NULL, *x=NULL;
	treenode *add=findele(root,newv);
	*padd=add;
	if(add==NULL)//Empty Tree
		return root;
	else
	{
		if((add->l)==NULL || ((add->r)==NULL))
			y=add;
		 else
			y=successor(add);
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
			{
				(add->v)=(y->v);
				(add->pri)=(y->pri);
			}
		delete y;
	}
	return root;
}
int main()
{
	treenode *treeroot=NULL;
	treenode *newadd=NULL;
	int nins=0,ndel, i=0, newv=-1;
	float pri;
	cin>>nins;
	for(i=0;i<nins;i++)
	{
	 	cin>>newv>>pri;
	 	treeroot=treeroot->tryinsert(treeroot,newv,pri,&newadd);
		treeroot=treeroot->treap_in(treeroot,newadd);
	  treeroot->preorder(treeroot);
	  cout<<"\n";
	  newadd=NULL;
	}
	cout<<"\nNo. of Nodes: "<<treeroot->k<<endl;
	cin>>ndel;
	for(i=0;i<ndel;i++)
	{
	 	cin>>newv;
	 	treeroot=treeroot->trydelete(treeroot,newv,pri,&newadd);
	 	treeroot=treeroot->treap_del(treeroot,newadd);
	  treeroot->preorder(treeroot);
	  cout<<"\n";
	  newadd=NULL;
	}
	cout<<"\nNo. of Nodes: "<<treeroot->k<<endl;
	return 0;	
}