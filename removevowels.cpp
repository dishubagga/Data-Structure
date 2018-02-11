#include<iostream>
using namespace std;
class node
{
	public:
	char data;
	node *next;
};
node *newnode;
node *start=NULL;
node *temp;
void createnode(char x)
{
	
	newnode=new node();
	newnode->data=x;
	newnode->next=NULL;
}
void vowels()
{
	temp=start;
	while((temp->data=='a')||(temp->data=='e')||(temp->data=='i')||(temp->data=='o')||(temp->data=='u'))
	{
		cout<<" "<<temp->data<<" ";
		start=temp->next;
		temp=start;
		cout<<" "<<temp->data<<" ";
	}
	while(temp->next!=NULL)
	{
		if((temp->next->data=='a')||(temp->next->data=='e')||(temp->next->data=='i')||(temp->next->data=='o')||(temp->next->data=='u'))
		{
			temp->next=temp->next->next;
		}
		else
		{
			temp=temp->next;
		}
	}
}
main()
{
	
	char x;
	int i;
	cin>>x;
	while(x!='x')
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
	vowels();
	node *a;
	a=start;
	while(a!=NULL)
	{
	 
	  cout<<a->data;
	  a=a->next;
	}
}
