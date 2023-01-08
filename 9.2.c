#include<stdio.h>
#include<math.h>
int main()
{
int s,a,b,c;
printf("Enter side a of triangle : "); scanf("%d",&a);
printf("\nEnter side b of triangle : "); scanf("%d",&b);
printf("\nEnter side c of triangle : "); scanf("%d",&c);
if(a+b>=c && a+c>=b && b+c>=a)
{
printf("\nTriangle is valid "); function(a,b,c);
}
else
{
printf("\nTriangle is invalid ");
}
printf("\nId-22DCE069");
}
int functio(int a,int b,int c)
{
int s; s=(a+b+c)/2;
printf("\n\nValue of s is : %d",s); return s;
}
int function(int a,int b,int c)
{
int area,t,s; s=functio(a,b,c); t=s*(s-a)*(s-b)*(s-c); area=sqrt(t);
printf("\n\nArea of triangle with sides a,b,c is : %d",area); return area;
}
