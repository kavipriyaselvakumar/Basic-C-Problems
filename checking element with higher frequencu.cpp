#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n],i,j,count=0,res=0,max=n/2;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count>max)
		{
			res=a[i];
		}
	}
	cout<<"The result is:"<<res;
}
