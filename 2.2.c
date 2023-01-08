
#include<stdio.h>
main()
{
    int r;
    printf("Enter Amount : ");
    scanf("%d",&r);
    printf("Requirement of 100 Rs. note : %d",r/100);
    r=r%100;
    printf("\nRequirement of 50 Rs. note : %d",r/50);
    r=r%50;
    printf("\nRequirement of 10 Rs. note : %d",r/10);
    printf("\nChange left : %d",r%10);
    printf("\nId - 22DCE069");
}
