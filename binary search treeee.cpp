#include<iostream>
using namespace std;
class node
{
	public:
		int data;
		node *left;
		node *right;
	node(int data)
	{
		this->data=data;
		this->left=NULL;
		this->right=NULL;
	}
};
node* insert(node *n,int a)
{
	if(n==NULL)
		return new node(a);
	else if(a>n->data)
		n->right=insert(n->right,a);
	else
		n->left=insert(n->left,a);
}
/*
node * insert(node *n,int data)
{
	if(n==NULL)
		return new node(data);
	else if(data>n->data)
		n->right=insert(n->right,data);
	else
		n->left=insert(n->left,data);
}*/
void display(node * n)
{
	if(n==NULL)
		return;
	display(n->left);
	cout<<n->data;
	display(n->right);
}
void display_in(node *n)
{
	if(n==NULL)
	return;
	display_in(n->left);
	cout<<n->data;
	display_in(n->right);
}
main()
{
	node *root=NULL;
	//temp=root;
	int h,n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		root=insert(root,a);
	}
//	h=height(root);
//	cout<<h;
	//leafnode(root);
	display_in(root);
}
