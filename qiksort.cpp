#include<iostream>
using namespace std;
int size,a[100],m,p,temp;
int quicksort(int *a,int start,int end)
{
	int i=start;
		int j=end;
		p=a[start];
	if(start<end)
	{
		
		while(a[i]<=p && i<j)
			i++;
		while(a[i]>p &&i<=j)
			j++;
		if(i<=j)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	temp=a[j];
	a[j]=a[start];
	a[start]=temp;
	quicksort(a,start,m-1);
	quicksort(a,m+1,end);
}
main()
{
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	quicksort(a,0,size-1);
	for(int i=0;i<size;i++)
	{
		cout<<a[i];
	}
}
