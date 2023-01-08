#include<stdio.h>
main()
{
    float sal,da,hra,ma,ta,pf,it,all,ded,gs,ns;
    printf("Enter your Basic Salary : ");
    scanf("%f",&sal);
    da=0.7*sal;
    printf("DA of Basic Salary: %.0f",da);
    hra=0.07*sal;
    printf("\nHRA of Basic Salary: %.0f",hra);
    ma=0.02*sal;
    printf("\nMA of Basic Salary: %.0f",ma);
    ta=0.04*sal;
    printf("\nTA of Basic Salary: %.0f",ta);
    pf=0.12*sal;
    printf("\nPF of Basic Salary: %.0f",pf);
    it=500;
    printf("\nIT of Basic Salary: %.0f",it);
    all=da+hra+ma+ta;
    printf("\nAllowance : %.0f",all);
    gs=sal+all;
    printf("\nGross salary : %.0f",gs);
    ded=pf+it;
    printf("\nDeduction : %.0f",ded);
    ns=gs-ded;
    printf("\nNet salary : %.0f",ns);
    printf("\nID - 22DCE069");
}
