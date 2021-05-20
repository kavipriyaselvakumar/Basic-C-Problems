#include<iostream>
using namespace std;
int main()
{
	int row,column;
	cin>>row>>column;
	int a[row][column],i,j,count,max=INT_MIN,res;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<row;i++)
	{
		count=0;
		for(j=0;j<column;j++)
		{
			if(a[i][j]==1)
				count++;
		}
		if(count>max)
		{
			max=count;
			res=i;
		}
	}
	cout<<res;
}
