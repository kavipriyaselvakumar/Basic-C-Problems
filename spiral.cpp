#include<iostream>
using namespace std;
int main()
{
	int r,c,a[20][20],i,j,k=0,l=0;
	cin>>r;
	cin>>c;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	while(k<r && l<c)
	{
		for(i=l;i<c;i++)
		{
			cout<<a[k][i]<<" ";
		}
		k++;
		for(i=k;i<r;i++)
		{
			cout<<a[i][c-1]<<" ";
		}
		c--;
		if(k<r)
		{
			for(i=c-1;i>=l;i--)
			{
				cout<<a[r-1][i]<<" ";
			}
			r--;
		}
		if(l<c)
		{
			for(i=r-1;i>=k;i--)
			{
				cout<<a[i][l]<<" ";
			}
			l++;
		}
	}
}
