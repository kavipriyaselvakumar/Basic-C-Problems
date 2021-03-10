#include<stdio.h>
void main()
{
	int n1,n2,max,i,gcd;
	scanf("%d %d",&n1,&n2);//getting two numbers
	max=(n1>n2) ? n1:n2;//finding the max numbers
	for(i=1;i<=max;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;//finding the gcd of two numbers
		}
	}
	printf("%d",(n1*n2)/gcd);//lcm of two numbers
}
