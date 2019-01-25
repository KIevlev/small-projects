#include <stdio.h>

int main()
{
enum SNOOKER
{RED=1,YELLOW, GREEN, BROWN, BLUE, PINK, BLACK};
enum SNOOKER pair = RED + BLACK;
printf("pair red & black = %d \n",pair);
typedef unsigned short int USINT;
USINT num = 16;
printf("num - %d\n", num);
return 0;
}

