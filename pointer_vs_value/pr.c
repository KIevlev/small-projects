#include <stdio.h>

void twice(int *ptr);
int tw_value(int a);
void trice(int *ptr);
int tr_value(int a);
int main()
{
int a = 5;
int *ptr = &a;
printf("Начало: Адрес - %p , значение - %d\n", ptr, *ptr);
twice(ptr);
printf("После twice & tw_value: \t%p\t%d\t vs %d\n", ptr,*ptr,tw_value(a));
trice(ptr);
printf("После twice & tw_value: \t%p\t%d\t vs %d\n", ptr,*ptr,tr_value(a));
return 0;
}

void twice (int *number)
{
*number = (*number *2);
}
int tw_value(int number)
{
return number*=2;
}
void trice (int *number)
{
*number = (*number *3);
}
int tr_value(int number)
{
return number*=3;
}

