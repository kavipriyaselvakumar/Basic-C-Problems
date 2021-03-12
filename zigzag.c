#include<stdio.h>
void main()
{
	int a[100][100],sum=0,sum1=0,sum2=0,i,j,r,c;
	printf("Enter the row and column:");
	scanf("%d %d",&r,&c);
	printf("Enter the array elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		if(i==0)
		{
			sum=sum+a[i][j];
		}
		if(i==r-1)
		{
			sum2=sum2+a[i][j];
		}
		if(i+j==r-1 && i<r-1 && j<r-1)
		{
			sum1=sum1+a[i][j];
		}
		}
	}
	printf("%d",sum+sum2+sum1);
}
