#include<iostream>
using namespace std;
main()
{
    int m;
    cin>>m;
    if(m%3==0 && m%5==0)
        cout<<"Good Number";
    else if(m%3==0 && m%5!=0)
        cout<<"Bad Number";
    else if(m%3!=0 && m%5==0)
        cout<<"Poor Number";
}
