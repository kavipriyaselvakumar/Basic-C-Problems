#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,res=0,res1,a[n];
	for(i=0;i<n+1;i++)
	{
		cin>>a[i];
	}
	int k=0;
	for(i=0;i<n+1;i++)
	{
		res=res+a[i];
	}
	res1=n*(n+1)/2;
	cout<<"Duplicate is:"<<res-res1;
}
