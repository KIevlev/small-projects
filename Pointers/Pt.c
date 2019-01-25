#include <stdio.h>

int main()
{
int a = 8;
int *ptr = &a;
printf("a = %d\n", a);
printf("ptr - %p\n", ptr);
printf("*ptr = %d\n", *ptr);
*ptr = 12;
printf("a = %d\n", a);
printf("ptr - %p\n", ptr);
printf("*ptr = %d\n", *ptr);
return 0;
}

