#include<stdio.h>
#include<stdlib.h>
void main()
{
int num, i, *ptr, sum=0; printf("Enter number of elements:"); scanf("%d",&num);
ptr = (int*) malloc(num * sizeof(int));

if(ptr==NULL)
{
printf("Error! memory not allocated."); exit(0);
}
printf("enter elements of array: "); for(i=0;i<num;++i)
{
scanf("%d",ptr + i); sum += *(ptr + i);
}
printf("average = %d",sum/num); free(ptr);
printf("\nId-22DCE069");
return 0;
}
