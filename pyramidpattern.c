#include<stdio.h>
void main()
{
	int n=4,i,j,m,k,count;
	m=k=n-1;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<2*n-1;j++)
		{
			if(j>=m && j<=k)
			{
				if(j<n)
				{
					count=count+1;
					printf("%d",count);
				}
				else{
					count=count-1;
					printf("%d",count);
				}
			}
			else{
				printf(" ");
			}
		}
			m--;
			k++;
		printf("\n");
	}
}
