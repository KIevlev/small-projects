#include <stdio.h>

int main()
{
int a = 32;
printf("size of a= %d\n", sizeof(a));
printf("size of int= %d\n", sizeof(int));
struct {int score; char grade;} result;
printf("size of result(struct) = %d\n", sizeof(result));
return 0;
}

