#include<stdio.h>
void main()
{
	char s[100];
	int i,n,count=0;
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if((s[i]=='t'||s[i]=='T')  && (s[i+1]=='h'|| s[i+1]=='H')    &&  (s[i+2]=='e' || s[i+2]=='E'))
		{
			count++;
		}
	}
	printf("%d",count);
}
