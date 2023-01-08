#include<stdio.h>
main()
{
    int x,y,i=1,ans=1;
    printf("Enter the value of base : ");
    scanf("%d",&x);
    printf("Enter the value of power : ");
    scanf("%d",&y);
    do
    {
        ans=ans*x;
        i++;
    }
    while(i<=y);
    if (y == 0)
    {
        ans=1;
    }
    printf("Value of %d^%d is %d",x,y,ans);
    printf("\nId-22DCE069");
}
