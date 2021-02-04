#include<stdio.h>
void main()
{
	int n,a[100],i,j,num,m,k,sum,m1,k1,sum1,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		k=0;
		k1=0;
		sum=0;
		sum1=0;
		num=a[i];
		while(num!=0)
		{
			m=num%10;
			k=k*10+m;
			num=num/10;
			
		}
		sum=a[i]+k;
		sum1=sum;
		while(sum1!=0)
		{
			m1=sum1%10;
			k1=k1*10+m1;
			sum1=sum1/10;
			
		}
		if(k1==sum)
		{
			printf("%d",k1);
		}
		else{
			if(count==5)
			{
				printf("-1");
			}
			count++;
		}
	}
}
