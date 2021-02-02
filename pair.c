#include<stdio.h>
void main()
{
	int a[20],n,i,j,tar;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&tar);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==tar)
			{
				printf("%d %d",a[i],a[j]);
				printf("\n");
			}
		}
	}
}
