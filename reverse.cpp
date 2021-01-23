#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,n,len,b[10];
	cout<<"Enter the size of the array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	len=n-1;
	for(j=0;j<n;j++)
	{
		b[j]=a[len];
		cout<<b[j];
		len--;
	}
}
