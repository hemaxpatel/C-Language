#include<stdio.h>
main()
{
    char a;
    int b,c;
    printf("Enter value of credit:");
    scanf("%c",&a);
    printf("\nEnter value of order:");
    scanf("%d",&b);
    printf("\nEnter value of stock:");
    scanf("%d",&c);

    if(a=='Y'||a=='y')
    {
        if(a<c)
        {
            printf("\nSupply the stock to customer");
        }
        else
        {
            printf("\nOut of stock");
        }
    }
    else
    {
        if(a=='n'||a=='N')
        {
            printf("\nnot supply");
        }
        else
        {
            printf("\nPlease enter correct amount");
        }
    }
    printf("\n22DCE069");
}
