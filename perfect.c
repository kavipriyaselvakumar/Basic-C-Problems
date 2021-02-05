#include<stdio.h>
void main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		printf("The given number is perfect number");
	}
	else{
		printf("The given number is not perfect");
	}
}
