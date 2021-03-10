#include<stdio.h>
void main()
{
	int n,k=0,j,a[100];
	printf("Enter the decimal number:");
	scanf("%d",&n);
	while(n!=0)
	{
		a[k]=n%2;
		n=n/2;
		k++;
	}
	for(j=k-1;j>=0;j--)
	{
		printf("%d",a[j]);
	}
}
