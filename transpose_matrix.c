#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],i,j,r,c;
	printf("Enter the number of rows and columns:");
	scanf("%d %d",&r,&c);
	printf("Enter the matrix element:");
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
			b[i][j]=a[j][i];
		}
	}
	printf("Before Transpose:");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("After Transpose:");
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
