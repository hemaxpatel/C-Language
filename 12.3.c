#include<stdio.h>
 void main()
{
FILE *fp1; char file1[50];
fp1=fopen("E:\\Hemax\\C Tutorial\\prac file\\12.3.1.txt","w");
printf("Enter the content which you want to store in file1 :"); scanf("%s",file1);
fputs(file1,fp1); fclose(fp1);

FILE *fp2; char file2[50];
fp2=fopen("E:\\Hemax\\C Tutorial\\prac file\\12.3.2.txt","w");
printf("Enter the content which you want to store in file2 :"); scanf("%s",file2);
fputs(file2,fp2); fclose(fp2);

FILE *fp4=fopen("E:\\Hemax\\C Tutorial\\prac file\\12.3.1.txt","r");
FILE *fp5=fopen("E:\\Hemax\\C Tutorial\\prac file\\12.3.2.txt","r");
FILE *fp3=fopen("E:\\Hemax\\C Tutorial\\prac file\\12.3.3.txt","w");
if(fp3==NULL || fp4==NULL || fp3==NULL) printf("The file does not open...");
char c; while((c=fgetc(fp4))!=EOF) fputc(c,fp3);
while((c=fgetc(fp5))!=EOF) fputc(c,fp3);
printf("The text files 1 and 2 is merged in file3."); fclose(fp3);
fclose(fp5);
fclose(fp4);
printf("\nId-22DCE069");
}
