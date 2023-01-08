#include<stdio.h> int prime();
int prime()
{
int n,i,c=0;
printf("Enter any positive integer : "); scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{ c++;
}
}
if(c==2)
{
printf("Entered number is prime");
}
else
{
printf("Entered number is not prime");
}
}
void main()
{
prime();
printf("\nId-22DCE069");
return 0;
}



/*ii)
#include<stdio.h>
int prime();
int prime()
{
int i,n,c=0;
printf("Enter a number : "); scanf("%d",&n); for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
return c;
}
void main()
{
int d;
d=prime();
if(d==2)
{
printf("Entered number is prime");
}
else
{
printf("Entered number is not prime");
}
printf("\nId-22DCE069");
}*/



/*iii) #include<stdio.h> void prime(int n); void prime(int n)
{
int c=0,i; for(i=1;i<=n;i++)
{
if(n%i==0)
{ c++;
}
}
if(c==2)
{
printf("Entered number is Prime");
}
else
{
printf("Entered number is not prime");
}
}
int main()
{
int n;
printf("Enter a number : "); scanf("%d",&n);
prime(n);
printf("\nId-22DCE069");
 return 0;
}*/




/*iv) #include<stdio.h> int prime(int n); int main()
{
int c,n;
printf("Enter a number : "); scanf("%d",&n); c=prime(n);
if(c==2)
{
printf("Entered number is prime");
}
else
{
printf("Entered number is not prime");
}
}
int prime(int n)
{
int i,c=0; for(i=1;i<=n;i++)
{
if(n%i==0)
{
c++;
}
}
return c;
printf("\nId-22DCE069");
}*/



