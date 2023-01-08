#include<stdio.h>
void main()
{
int A[3][3],B[3][3],C[3][3],i,j,x;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter the element A[%d][%d]: ",i+1,j+1); scanf("%d",&A[i][j]);
}
printf("\n");
}

for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter element B[%d][%d]:",i+1,j+1); scanf("%d",&B[i][j]);
}
printf("\n");
}
printf("matrix A\n"); for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
printf("Matrix B\n"); for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",B[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{ C[i][j]=0;
for(x=0;x<3;x++)
{ C[i][j]=C[i][j]+A[i][x]*B[x][j];
}
}
}
printf("Multiplication of Matrix A and Matrix B is\n"); for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",C[i][j]);
}
printf("\n");
}
printf("\nId-22DCE069");
}
