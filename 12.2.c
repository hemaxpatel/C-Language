#include<stdio.h>
void main()
{
FILE *fp; int i,k; fp=fopen("E:\\Hemax\\C Tutorial\\prac file\\12.2.txt","w");
printf("Enter the value to store in text file:"); scanf("%d",&i); putw(i,fp); fclose(fp);
fp=fopen("E:\\Hemax\\C Tutorial\\prac file\\12.2.txt","r"); k=getw(fp);
printf("The value stored in the text file is %d",k); fclose(fp);
printf("\nId-22DCE069");
}
