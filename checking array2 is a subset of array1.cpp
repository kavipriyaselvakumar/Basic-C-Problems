#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1;
	cin>>n2;
	int a[n1],b[n2],i,j,count=0;
	cout<<"Enter the first:";
	for(i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the second:";
	for(j=0;j<n2;j++)
	{
		cin>>b[j];
	}
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n1;j++)
		{
			if(b[i]==a[j])
			{
				count++;
			}
		}
	}
	if(count==n2)
	{
		cout<<"Array2 is a subset of Array1";
	}
	else{
		cout<<"Array2 is not a subset of Array1";
	}
}
