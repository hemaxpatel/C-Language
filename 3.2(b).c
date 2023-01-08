#include<stdio.h>
main()
{
    int y,p,x;
    printf("Enter the value of yellow : ");
    scanf("%d",&y);
    printf("Enter the value of Pink : ");
    scanf("%d",&p);
    x = (++y + y++ + --y) + (++p - --p - --p);
    printf("\nAns : %d",x);
    printf("\nCount of Yellow after execution : %d",y);
    printf("\ncount of Pink after execution : %d",p);
    printf("\nId - 22DCE069");
}

