#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],reverse[100];
	gets(s);
	int n,i,j,n1;
	n=strlen(s);
	n1=n;
	int k=0;
	for(i=n-1;i>=0;i--)
	{
		if(s[i]==' ')
		{
			
			for(j=i+1;j<n1;j++)
			{
				reverse[k]=s[j];
				k++;
			}
			reverse[k++]=' ';
			n1=i;
		}
	}
	for(i=0;s[i]!=' ';i++)
	{
		reverse[k]=s[i];
		k++;
	}
	printf("%s",reverse);
}
