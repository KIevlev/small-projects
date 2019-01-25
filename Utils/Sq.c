#include <stdio.h>
#include "Utils.h"

void getnum();

int main()
{
getnum();
return 0;
}

void getnum()
{
char question;
int num;
printf("Введит число для возведения в квадрат: ");
scanf("%d", &num);
printf("Квадрат числа равен: %d\n", square(num));
printf("Ввести ещё число (Y/N)?:  ");
scanf("%1s", &question);
if ((question == 'N') || (question == 'n')) return;
else getnum();
}

