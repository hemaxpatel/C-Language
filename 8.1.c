#include<stdio.h>
void main()
{
char s[8];
int a,i,n,e=0,d=0,f=0,m=0; printf("Enter the password : "); gets(s);
a=strlen(s);
printf("Length of password is %d\n",a); for(i=0;i<a;i++)
{
if(s[i]>='a' && s[i]<='z')
{ d=1;
}
if(s[i]>='A' && s[i]<='Z')
{ e=1;
}
if(s[i]>='0' && s[i]<='9')
{ f=1;
}
}
if(f==1)
m++;
if(e==1) m++;
if(d==1) m++;
if(m==3)
printf("Password is strong"); if(m==2)
printf("Password is average"); if(m==1)
printf("Password is poor");
printf("\nId-22DCE069");
}
