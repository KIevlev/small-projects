#include <stdio.h>

void one();
int two();
int main()
{
int i= 2;
one();
printf("Возвращаемся в Main()\n i = %d\n", i);
i = i*two();
printf("Теперь i = %d\n", i);
return 0;
}
void one() 
{
printf("Мы в ф-ии one()\n");
}
int two()
{
return 2;
}

