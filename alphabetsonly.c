#include<stdio.h>
void main()
{
	char s1[100],s2[100];
	int n,k,i,m=0;
	gets(s1);
	n=strlen(s1);
	for(i=0;i<n;i++)
	{
		k=s1[i];
		if((k>=65 && k<=90) || (k>=97 && k<=122))
		{
			s2[m]=s1[i];
			m++;
		}
	}
	s2[m]='\0';
	printf("%s",s2);
}
