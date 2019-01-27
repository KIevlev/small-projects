#include <stdio.h>

int main()
{
char str[40];
printf("Введите что-то\n");
gets(str);
printf( "fgets() read: " ) ;
puts(str);
return 0;
}

