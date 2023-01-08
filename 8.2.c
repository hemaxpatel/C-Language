#include<stdio.h>
main()
{

int i,j;

char str[5][50],x[50];
printf("Enter 5 students names : \n"); for(i=0;i<5;++i)
{
fgets(str[i],sizeof(str[i]),stdin);
}
for(i=0;i<5;++i)
{
for(j=i+1;j<5;++j)
{
if(strcmp(str[i],str[j])>0)
{
strcpy(x,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],x);
}
}
}
printf("Student name in alphabetical order is : \n"); for(i=0;i<5;++i)
{
fputs(str[i],stdout);
}
printf("\nId-22DCE069");
return 0;
}
