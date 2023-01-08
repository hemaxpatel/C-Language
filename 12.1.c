#include<stdio.h>
 void main()
{
FILE *fp; char ch; int pos,i=0;
fp=fopen("E:\\Hemax\\C Tutorial\\prac file\\12.1.txt","r"); if(fp==NULL)
printf("The text file is empty..."); fseek(fp,0,SEEK_END); pos=ftell(fp);
while(i<pos)
{ i++;
fseek(fp,-i,SEEK_END); ch=fgetc(fp); printf("%c",ch);
}
printf("\nId-22DCE069");
}
