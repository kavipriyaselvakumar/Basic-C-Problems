#include<stdio.h>
void main()
{
	int n,i,j,n1=0,n2=1,sum;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		n1=0;
		n2=1;
		sum=0;
		for(j=0;j<n;j++)
		{
			if(i>=j)
			{
				printf("%d ",n2);
				sum=n1+n2;
				n1=n2;
				n2=sum;
			}
		}
		printf("\n");
	}
}
