#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],minchar;
	gets(s);
	int n,i,j,n1;
	n=strlen(s);
	int freq[300],min=0;
	for(i=0;i<256;i++)
	{
		freq[i]=0;
	}
	for(i=0;i<n;i++)
	{
		n1=(int)s[i];
		freq[n1]=freq[n1]+1;
	}
	min=0;
	for(i=0;i<256;i++)
	{
		if(freq[i]!=0)
		{
			if(freq[min]==0 || freq[i]<freq[min])
			{
				min=i;
			}
		}
	}
	printf("%c",min);
}
