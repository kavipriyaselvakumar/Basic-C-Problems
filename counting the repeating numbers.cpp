#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j,k,l,m=0,a[n],b[n][2],count1=0,count2=0,count3;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the k:";
	cin>>k;
	int res=n/k;
	for(i=0;i<n;i++)
	{
		
		count1=1;
		count2=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count1++;
			}
		}
		for(l=0;l<n;l++)
		{
			if(b[l][0]==a[i])
			{
				count2++;
			}
		}
		
		if(count2==0)
		{
		b[m][0]=a[i];
		b[m][1]=count1;
		m=m+1;
		}
	}
	for(i=0;i<m;i++)
	{
		if(b[i][1]>res)
		{
			cout<<b[i][0]<<endl;
		}
	}
}
