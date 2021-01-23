#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,n,temp;
	cout<<"Enter the size of the array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Ascending order";
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Descending order";
	cout<<"\n";
	for(i=0;i<n;i++)
	{
		
		cout<<a[i];
	}
}
