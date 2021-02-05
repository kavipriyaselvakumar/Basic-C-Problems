#include<stdio.h>
void main()
{
	int n,i,j,sum=0,num,len;
	scanf("%d",&n);
	len=n;
	while(len!=0)
	{
		num=len%10;
		sum=sum+(num*num*num);
		len=len/10;
	}
	if(sum==n)
	{
		printf("The given number is palindrome");
	}
	else{
		printf("The given number is not palindrome");
	}
}
