#include<stdio.h>
void main()
{
	int n,i,a,count=0,j;
	scanf("%d",&n);
	for(i=1;i*i<=n;i++)
	{
		if(n/i==0)
			count++;
	}
	if(count==0)
		printf("It is prime");
	else
		printf("It is not a prime");
}
