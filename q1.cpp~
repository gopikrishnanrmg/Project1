#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;


main()
{

    int i,n,a=6,b=28,d,j=1,c,save;
    cin>>n;
    cout<<"0000"<<a<<endl;//cout<<a<<endl<<b;
    cout<<"000"<<b<<" ";
    c=(b-a)+16+b;
    cout<<"000"<<c<<endl;
    a=b;
    b=c;


    for(i=3;i<=n;i++)
    {

        for(j=0;j<i;j++)
        {
            c=(b-a)+16+b;
            a=b;
            b=c;

           cout<<setfill('0')<<setw(5)<<c<<" ";

        }
        cout<<endl;
    }
    return 0;
}
