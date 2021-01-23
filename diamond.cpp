#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,n,m,l;
	cout<<"Enter the number";
	cin>>n;
	m=l=n-1;
	for(i=0;i<2*n-1;i++)
	{
		if(i>=n-1)
		{
			for(j=0;j<2*n-1;j++)
		{
			if(j<m || j>l)
			{
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
			m++;
			l--;
		}
		else{
		for(j=0;j<2*n-1;j++)
		{
			if(j<m || j>l)
			{
				cout<<" ";
			}
			else{
				cout<<"*";
			}
		}
		
		m--;
		l++;
	}
		cout<<"\n";
	}
}
