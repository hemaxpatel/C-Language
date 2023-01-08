#include<stdio.h>
void display();
int main()
{
void (*func_ptr)();
func_ptr=display;
printf("Address of functions display is %u\n",func_ptr);
(*func_ptr)();
printf("\nID-22DCE069");
return 0;
}
void display()
{
puts("By helping others, we help overselves!!");
}
