#include<iostream>
using namespace std;
main()
{
    int n,i,c=0;
cin>>n;
for(i=1;i<=n;i++)
{
if(n%i==0)
{ c++;
}
}
if(c==2)
{
printf("Entered number is prime");
}
else
{
printf("Entered number is not prime");
}
}
