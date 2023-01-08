#include<stdio.h>
void main()
{
int i, T1=0, T2=0;
char passw[6];
printf("\nEnter a alphanumeric password:");
printf("\nMust contain lowercase, uppercase & digits.");
printf("\nEnter a alphanumeric password:");
scanf("%s", &passw);
i=0;
do
{
if(passw[i]>='a'&& passw[i]<='z' || passw[i]>='A'&& passw[i]<='Z')

{
T1=1;
}
else if(passw[i]>='0'&& passw[i]<='9')
{
T2=1;

}
i++;



}while(passw[i]);
if(T1==1 && T2==1)
{
printf("\nPassword is valid");

}
else
{
printf("\nPassword is not valid");
}
printf("\nId-22DCE069");
}




