#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char s[100][100]={"sunday","geeksforgeeks","utensils","sss","just"};
	char s1[10];
	cout<<"Enter the character to be checked:";
	cin>>s1;
	int i,j,count=0;
	for(i=0;i<4;i++)
	{
		count=0;
		for(j=0;j<14;j++)
		{
			if(s[i][j]=='s'||s[i][j]=='u'||s[i][j]=='n')
			{
				count++;
			}
		}
		if(count==3)
		{
			cout<<s[i][0]<<endl;
		}
	}
}
