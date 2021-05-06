#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k,a[n];
	for(k=0;k<n;k++)
	{
		cin>>a[k];
	}
	int i=0,j=n-1,max=100,f1,f2,tar;
	cout<<"Enter the target";
	cin>>tar;
	while(i<j)
	{
		int dif=abs(tar-(a[i]+a[j]));
		if(dif<max)
		{
			max=dif;
			f1=i;
			f2=j;
		}
		if(a[i]+a[j]>tar)
		{
			j--;
		}
		else{
			i++;
		}
	}
	cout<<a[f1]<<" "<<a[f2];
}
