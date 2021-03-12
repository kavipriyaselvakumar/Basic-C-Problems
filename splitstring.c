#include<stdio.h>
void main()
{
	char s1[100];
	int n,i;
	printf("Enter the string:");
	gets(s1);
	n=strlen(s1);
	for(i=0;i<n;i++)
	{
		if(s1[i]==' ')
		{
			printf("\n");
		}
		else{
			printf("%c",s1[i]);
		}
	}
}
