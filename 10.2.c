#include<stdio.h>
union book

{char title [20]; char author[20]; int price;
int flag; int number;
};
void function1(union book b)
{
printf("Enter Accession number : "); scanf("%d",&b.number); printf("Enter Title : "); scanf("%s",&b.title);
printf("Enter Author : "); scanf("%s",&b.author); printf("Enter Price : Rs. "); scanf("%d",&b.price);
printf("Flag : ");
scanf("%d",&b.flag); if(b.flag==1)
{
printf("\nBook Issued\n");
}
else if(b.flag==0)
{
printf("\nBook Not Issued\n");
}
else
{
printf("\nEnter Flag Value 0 or 1\n");
}
}
int main()
{
union book b; function1(b);
printf("\nId-22DCE069");
 return 0;
}
