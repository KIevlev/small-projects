#include <stdio.h>

int main()
{
int a = 7;
(a%2==0)? printf("number is even\n"): printf("num is odd\n");
printf("there %s", (a==1)? "is ": "are ");
printf("%d %s", a, (a==1)? "apple": "apples");
return 0;
}

