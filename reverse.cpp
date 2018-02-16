#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
node *newnode;
node *start=NULL;
node *temp;
void createnode(int x)
{
	
	newnode=new node();
	newnode->data=x;
	newnode->next=NULL;
}
void reverse()
{
	node *next,*prev=NULL;
	temp=start;
	while(temp!=NULL)
	{
		next=temp->next;
		temp->next=prev;
		prev=temp;
		temp=next;
	}
	start=prev;
	
	
}
main()
{
	
	int x,i;
	cin>>x;
	while(x!=-1)
	{
		createnode(x);
		if(start==NULL)
		{
			
			start=newnode;
		}
		else
		{
			temp=start;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}
			temp->next=newnode;
		}
		cin>>x;
	}
	reverse();
	
	node *a;
	a=start;
	while(a!=NULL)
	{
	 
	  cout<<a->data;
	  a=a->next;
	}
}
