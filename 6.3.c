#include<stdio.h>
#include<conio.h>
void main()
{
int amount,i,n;
int c=0;
char t;

printf("\nNumber of Products : ");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{
printf("\nProduct number %d",i);
printf("\nEnter amount of product : Rs.");
scanf("%d",&amount);
c=c+amount;
}
printf("\nPlease enter 0\n");
scanf("%s",&t);
if(t=='0')
{
printf("Total amount : Rs.%d",c);
}
else
{
printf("Please enter 0");

}
printf("\nId-22DCE069");
}
