#include<stdio.h>
main()
{
    int i,j;

    printf("     MULTIPLICATION TABLE (1 TO 7)");
    printf("\n  -----------------------------------\n");
    for(i=1;i<=10;i++)
    {
        printf("\n");
        for(j=1;j<=7;j++)
        {
            printf("%5d",i*j);
        }
    }
    printf("\n  -----------------------------------");
    printf("\nID - 22DCE069");
}
