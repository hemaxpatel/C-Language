#include <stdio.h>
struct employee
{
char name[20]; int age;
struct details
{
char address[100]; int salary;
}d1;

}e1;
int main()
{
printf("Enter name and age of employee :");
scanf("%s %d",e1.name,&e1.age);
printf("Enter address :");
scanf("%s",e1.d1.address);
printf("Enter salary of employee :");
 scanf("%d",&e1.d1.salary);
 printf("name :%s\nage:%d\naddress:%s\nsalary:Rs %d",e1.name,e1.age,e1.d1.address,e1.d1.salary);
printf("\nId-22DCE069");
}
