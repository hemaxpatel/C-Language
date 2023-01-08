#include<stdio.h>
main()
{
    int h;

    printf("Enter your Height(cm):");
    scanf("%d",&h);

    if(h<150)
    {
        printf("You are dwarf");
    }
    else
    {
        if(h>=150 && h<165)
        {
            printf("You have an Average height");
        }
        else
        {
            if(h>=165 && h<=195)
            {
                printf("You have a tall height");
            }
            else
            {
                printf("You have an Abnormal height");
            }
        }

    }
    printf("\nID - 22DCE069");
}
