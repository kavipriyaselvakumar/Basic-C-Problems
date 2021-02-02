#include<iostream>
using namespace std;
int main(){
	int a[20],i,j,n,count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=n-1;j>=0;j--)
	{
		count=count+a[j];
	}
	cout<<count;
}
