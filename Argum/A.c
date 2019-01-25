#include <stdio.h>

void display(char str[]);
int square(int a);
int tri(int a);
int main()
{
int a = 3;
char dis[] = "String to be passed to a function";
display(dis);
printf("Отработал square: %d\n", square(a));
printf("Отработал square: %d\n", tri(a));
return 0;
}
void display(char str[])
{
printf("%s\n", str);
}
int square(int a)
{
return a*a;
}
int tri(int a)
{
return square(a)*a;
}



