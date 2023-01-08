#include<stdio.h>
 void main()
{
int array[25],odd=0,even=0,negative=0,positive=0,i;
printf("Enter 25 elements:\n");
for(i=0;i<25;i++)
{
scanf("%d",&array[i]);

if(array[i]>=0)
{
positive++;
}
else
{
negative++;
}
if(array[i]%2==0)
{
even++;
}
else
{
odd++;
}

}
printf("\nPositive - %d",positive);
printf("\nNegative - %d",negative);
printf("\nEven	- %d",even);
printf("\nOdd	- %d",odd);
printf("\nId-22DCE069");
}
