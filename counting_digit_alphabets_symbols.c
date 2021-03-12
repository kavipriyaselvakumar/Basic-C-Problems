#include<stdio.h>
void main()
{
	char s1[100];
	int n,i,k,c1=0,c2=0,c3=0;
	printf("Enter the string:");
	gets(s1);
	n=strlen(s1);
	for(i=0;i<n;i++)
	{
		k=s1[i];
		if((k>=65 && k<=90)	|| (k>=97 && k<=122))
		{
			c1++;
		}
		else{
			if(k>=48 && k<=57)
			{
				c2++;
			}
			else{
				c3++;
			}
		}
	}
	printf("The number of alphabets in the given string is:%d\n",c1);
	printf("The number of digits in the given string is:%d\n",c2);
	printf("The number of special characters in the given string is:%d\n",c3);
}
