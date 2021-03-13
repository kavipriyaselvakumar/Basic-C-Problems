#include<stdio.h>
void main()
{
	int a[100],b[100],n,i,j,d,m,k,l;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the number of rotation:");
	scanf("%d",&d);
	m=0;
	for(i=0;i<d;i++)
	{
		k=n-1;
		l=a[k];
		for(j=n-1;j>=0;j--)
		{
			k--;
			a[j]=a[k];
		}
		a[0]=l;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
