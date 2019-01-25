#include <stdio.h>

int main()
{
enum SNOOKER
{RED=1,YELLOW,GREEN,BROWN,BLUE,PINK,BLACK};
int total;
printf("If r- %d\n", RED);
printf("If b- %d\n", BLACK);
printf("If r- %d\n", RED);
printf("If blue- %d\n", BLUE);
total = RED + BLACK + RED + BLUE;
printf("total - %d", total);
return 0;
}

