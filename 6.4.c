#include<stdio.h>
#include<conio.h>
void main()
{
int i,l,m=21,p;
printf("\nThere are 21 matchsticks\n");
 while(m>1)
{
printf("\nPick 1 or 2 or 3 or 4 matchstick/s : ");
 scanf("%d",&p);
m=m-p;
printf("Computer picked %d matchstick/s",5-p);
 m=m-(5-p);
}
if(m==1)
{
printf("\nMatchstick/s left is 1");
printf("\nComputer won the game");
}
printf("\nId-22DCE069");
}
