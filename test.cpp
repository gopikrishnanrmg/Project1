#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double t,n,i=0,a[10000];
    cin>>t;
    long double p=22;p=p/7;
    while(p!=0)
    a[i]=p%10;
    while(p!='\0')
    {
    i=0;
    cout<<a[i];
    i++;}
    for(i=0;i<t;i++)
    {
        cin>>n;

    }
    return 0;
}

