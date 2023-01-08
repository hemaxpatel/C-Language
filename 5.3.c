#include<stdio.h>

main()
{
int ram,shyam,ajay;
    printf("Enter the age of ram:");
    scanf("%d",&ram);
    printf("\nEnter the age of shyam:");
    scanf("%d",&shyam);
    printf("\nEnter the age of ajay:");
    scanf("%d",&ajay);
    if (ram==shyam)
    {
        if(shyam==ajay)
        {
            printf("\nAll are having same age");
        }
        else
        {
            printf("\nram and ajay are having same age");
        }
    }
    else
    {
        if(ram==ajay)
        {
            printf("\nram and ajay are having same age");
        }
        else
        {
            if(shyam==ajay)
            {
                printf("\nshyam and ajay are having same age");
            }
            else
            {
                if(ram>shyam)
                    {
                        printf("\nShyam is younger");
                    }
                else
                    {
                        if(shyam>ajay)
                            {
                                printf("\najay is younger");
                            }
                        else
                        {
                            if(ajay>ram)
                            {
                                printf("\nram is younger");
                            }
                        }
                    }
            }
        }
    }
printf("\n22DCE069");
}

