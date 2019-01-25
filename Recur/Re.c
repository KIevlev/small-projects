#include <stdio.h>

void count_down(int i);
int main()
{
int i;
printf("Ввдеите число начала отсчёта: ");
scanf("%d", &i);
count_down(i);
printf("Pusk na\n");
return 0;
}
void count_down(int i)
{
if (i<0) return;
else
{
printf("... %d\n", i);
i--;
count_down(i);
}
}


