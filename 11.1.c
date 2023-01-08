#include<stdio.h>
void main()
{
int s,*p,pass=0,fail=0,distinction=0,firstclass=0,i,n; p=&s;
printf("\nEnter number of students : "); scanf("%d",&n);
printf("\nEnter marks : \n"); for(i=1;i<=n;i++)
{
scanf("%d",&s); if(*p>=70)
{
printf("DISTINCTION\n\n"); distinction++;
}
else if(*p<=69 && *p>=60)
{
printf("FIRST CLASS\n\n"); firstclass++;
}
else if(*p<=59 && *p>40)
{
printf("PASS\n\n"); pass++;
}
else
{
printf("FAIL\n\n"); fail++;
}
}
printf("\nPass	: %d\nFail	: %d\nFirst Class : %d\nDistinction :%d\n",pass,fail,firstclass,distinction);
printf("\nId-22DCE069");
}

