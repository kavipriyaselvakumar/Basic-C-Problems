#include<iostream>
using namespace std;
int main()
{
	int a[10],n,i,j,pos,num,num1;
	cout<<"Enter the size of the array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the position where you have to insert the element";
	cin>>pos;
	n=n+1;
	cout<<"Enter the element to be inserted";
	cin>>num;
	a[pos]=num;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<"Enter the element to be deleted";
	cin>>num1;
	n=n-1;
	for(i=0;i<n;i++)
	{
		if(a[i]==num1)
		{
			a[i]=a[i+1];
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
