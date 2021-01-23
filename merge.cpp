#include<iostream>
using namespace std;
int main()
{
    int a[10],b[10],c[20],i,j=0,n1,n2,n;
    cout<<"Enter the size of the first array";
    cin>>n1;
    cout<<"Enter the elements";
    for(i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the size of the second array";
    cin>>n2;
    cout<<"Enter the elements";
    for(i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    n=n1+n2;
    
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<n2;j++)
    {
        c[i]=b[j];
        i++;
    }
    for(i=0;i<n;i++)
    {

        cout<<c[i];
    }
    return 0;
}

