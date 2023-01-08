#include<stdio.h>
int  main()
{
    int a[50],b[50],c[50];
    int n1,n2,n3;               //size of arrays a,b,c
    int i,j,temp;               //variables for sorting

    printf("Enter the size of array A:");
    scanf("%d",&n1);


    for(i=0;i<n1;i++)
    {
        printf("Enter the value of A[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the size of array B:");
    scanf("%d",&n2);


    for(i=0;i<n2;i++)
    {
        printf("Enter the value of B[%d]:",i+1);
        scanf("%d",&b[i]);
    }

    n3=n1+n2;                       //size of merged array
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
        c[i+n1]=b[i];
    }

    for(i=0;i<n3;i++)
    {
        for(j=i+1;j<n3;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
    printf("\nMerge And Sort of Array A and B:\n");
    for(i=0;i<n3;i++)
    {
        printf("%5d",c[i]);
    }
    printf("\nId-22DCE069");
}
