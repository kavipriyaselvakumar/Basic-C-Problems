#include<stdio.h>
int factorial(int a)
{
	if(a==1)
		return 1;
	else{
		return a*factorial(a-1);
	}
}
void main()
{
	int n,i,sum=0,num,len,res;
	scanf("%d",&n);
	len=n;
	while(len!=0)
	{
		num=len%10;
		res=factorial(num);
		sum=sum+res;
		len=len/10;
	}
	if(sum==n)
	{
		printf("The given number is strong number");
	}
	else{
		printf("The given number is not a strong number");
	}
	
}

