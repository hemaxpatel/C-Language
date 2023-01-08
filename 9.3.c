#include<stdio.h>
void main()
{
int n;
printf("Enter the number : "); scanf("%d",&n); function1(n);
printf("\nId-22DCE069");
}
int function1(int n)
{
if(n!=0)
{
function1(n/2); printf("%d",n%2);
}
else
{
return 0;
}
}
