#include<stdio.h>
#include<math.h>
#define pi 3.14
main()
{
    float T,g,l;
    printf("Enter Length(m) : ");
    scanf("%f",&l);
    printf("Enter the acceleration due to(m/s^2) : ");
    scanf("%f",&g);

    T=2*pi*sqrt(l/g);
    printf("%Time period of the pendulum is %0.2f sec",T);
    printf("\nID - 22DCE069");
}

