#include<stdio.h>
struct book
{
char title[20]; char author[20]; int amount;
};
void function1(struct book b)
{
printf("\nBook Title : "); scanf("%s",&b.title); printf("\nAuthor Name : "); scanf("%s",&b.author); printf("\nAmount of the book : Rs. "); scanf("%d",&b.amount);
}
int main()
{
struct book b; function1(b);
printf("\nId-22DCE069");
return 0;
}
