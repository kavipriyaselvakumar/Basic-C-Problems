#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j || j==n-1-i)
			{
				cout<<"*";	
			}	
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
