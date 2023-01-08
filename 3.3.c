#include<stdio.h>
main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Before Swapping \n a : %d \n b : %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Swapping \n a : %d \n b : %d",a,b);
    printf("\nId - 22DCE069");
}
