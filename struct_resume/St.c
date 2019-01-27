#include <stdio.h>

typedef struct
{
int x;
int y;
} Point;
typedef struct
{
Point a;
Point b;
} Box;
Box rect = {6,12,18,30};
Point top = {15,24};
Point btm;
int main()
{
btm.x = 5;
btm.y = 8;
printf("Top: x-%d\ty-%d\n",top.x,top.y);
printf("btm: x-%d\ty-%d\n",btm.x,btm.y);
printf("Point a x:%d\n",rect.a.x);
printf("Point a y:%d\n",rect.a.y);
printf("Point b x:%d\n",rect.b.x);
printf("Point b y:%d\n",rect.b.y);
return 0;
}

