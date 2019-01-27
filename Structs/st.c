#include <stdio.h>

struct coords
{
int x;
int y;
} point;
int main()
{
struct coords top;
top.x=15;
top.y=3;
point.x=33;
point.y=0;
printf("top: x-%d\ty-%d\n",top.x, top.y);
printf("points : x-%d\ty-%d\n",point.x, point.y);
return 0;
}

