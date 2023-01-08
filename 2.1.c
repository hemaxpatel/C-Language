#include<stdio.h>
main()
{
    int p,l,m,lm,ilm,w,lw,ilw;

    printf("Total Population : ");
    scanf("%d",&p);

    l=0.48*p;
    printf("Number of Literate (Men + Women) : %d",l);

    m=0.52*p;
    printf("\nNumber of Men : %d",m);

    lm=0.35*p;
    printf("\nNumber of Literate Men : %d",lm);

    ilm=m-lm;
    printf("\nNumber of illiterate Men : %d",ilm);

    w=p-m;
    printf("\nNumber of Women : %d",w);

    lw=l-lm;
    printf("\nNumber of Literate Women : %d",lw);

    ilw=w-lw;
    printf("\nNumber of illiterate Women : %d",ilw);
    printf("\nID - 22DCE069");
}
