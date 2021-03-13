#include<stdio.h>
void main()
{
	int a[100],i,j,n1,n2,b[100],c[100],d[100],k=0;
	printf("Enter the size of the array1 and array2:");
	scanf("%d %d",&n1,&n2);
	printf("Enter the array1 element:");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the array2 element:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("The intersecting elements are:");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d ",a[i]);
			}
		}
	}
	int m=0;
	for(i=n1;i<n1+n2;i++)
	{
		a[i]=b[m];
		m++;
	}
	int temp;
	for(i=0;i<n1+n2;i++)
	{
		for(j=0;j<n1+n2;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n1+n2;i++)
	{
		if(a[i]!=-1)
		{
			for(j=i+1;j<n1+n2;j++)
			{
				if(a[i]==a[j])
				{
					a[i]=-1;
				}
			}
		}
		if(a[i]!=-1)
		{
			a[k++]=a[i];
		}
	}
	printf("\n");
	printf("The union of the array is:");
	for(i=0;i<k;i++)
	{
		printf("%d ",a[i]);
	}
}
