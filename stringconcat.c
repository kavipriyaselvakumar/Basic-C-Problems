#include<stdio.h>
#include<string.h>
void main()
{
	char s1[100],s2[100],s3[100];
	int n1,n2,n,i,k1,k2;
	gets(s1);
	gets(s2);
	n1=strlen(s1);
	n2=strlen(s2);
	s1[n1]=' ';
	n=n1+1;
	for(i=0;i<n2;i++,n++)
	{
		s1[n]=s2[i];
	}
	s1[n]='\0';
	printf("%s",s1);
}
