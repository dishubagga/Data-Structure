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
node *temp1;
node *prev;
node *start1=NULL;
void createnode(int x)
{
	
	newnode=new node();
	newnode->data=x;
	newnode->next=NULL;
}

void secondlargest()
{
	temp=start;
	int a=0,max1=1,max2=0;
	while(temp!=NULL)
	{
		if(max1<temp->data)
		{
			max2=max1;
			max1=temp->data;
		
		}
		else if(max2<temp->data)
		{
			max2=temp->data;
		}
		/*else
		{
			//cout<<max2;	
		}*/
	temp=temp->next;
	}
	cout<<max2;
	
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
	secondlargest();
	/*node *a;
	a=start;
	while(a!=NULL)
	{
	 
	  cout<<a->data;
	  a=a->next;
	}*/
}
