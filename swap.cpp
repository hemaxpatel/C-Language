#include<iostream>
using namespace std;
main()
{
    int a,b;
    cin>>a>>b;
    cout<<"a = "<<a<<" and b = "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\na = "<<a<<" and b = "<<b;
}
