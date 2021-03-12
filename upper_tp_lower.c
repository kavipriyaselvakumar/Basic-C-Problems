#include<stdio.h>
void main()
{
	char s[100];
	int n,i,k;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		k=s[i];
		if(k>=65 && k<=90)
		{
			printf("%c",k+32);
		}
		else{
			printf("%c",k-32);
		}
	}
	
}

