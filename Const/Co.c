#include <stdio.h>

int main()
{
const float PI = 3.141593;
float diameter;
float radius;
float circ;
float area;
printf("Enter diameter in mm: ");
scanf("%f",&diameter);
circ = PI * diameter;
radius = diameter / 2;
area = PI * (radius*radius);
printf("circumference= %.2f mm", circ);
printf("area= %.2f sq.mm\n", area);
return 0;
}

