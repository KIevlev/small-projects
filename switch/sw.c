#include <stdio.h>

int main()
{
int num;
printf("введите число: ");
scanf("%d", &num);
switch(num)
{
case 1: case 2: case 3: printf("число от 1 до 3\n"); break;
default: printf("Число не от 1 до 3\n");
}
return 0;
}

