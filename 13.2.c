
#include<stdio.h>
 #include<stdlib.h>
 int main()
{
char *ptr;
ptr = (char*)malloc(10); strcpy(ptr, "programming");
printf("%s, address = %u\n",ptr, ptr);

ptr = (char*)realloc(ptr , 20); strcat(ptr," in 'c'");
printf("%s, address = %u\n",ptr,ptr); free(ptr);
printf("\nId-22DCE069");
return 0;
}
