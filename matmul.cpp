#include<iostream>
using namespace std;
int main(){
	int a[20][20],b[20][20],c[20][20],r1,r2,c1,c2,i,j,n1,n2;
	cin>>r1>>c1;
	cin>>r2>>c2;
	if(r1==r2 && c1==c2)
	{
		cout<<"Enter the first matrix";
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				cin>>a[i][j];
			}
		}
		cout<<"Enter the second matrix";
		
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				cin>>b[i][j];
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				c[i][j]=a[i][j]*b[i][j];
			}
		}
		cout<<"The multiplication  of two matrix:";
		cout<<"\n";
		for(i=0;i<r1;i++)
		{
		for(j=0;j<c1;j++)
		{
			cout<<c[i][j]<<" ";
		}
		cout<<"\n";
		}
	
	}
	else{
		cout<<"Enter the correct rows and columns";
	}
}
