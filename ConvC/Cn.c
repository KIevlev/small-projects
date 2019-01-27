#include <stdio.h>
#include <stdlib.h>

int main()
{
int n[3];
char *s[3]={"12eight","-65.8","x13"};
for (int i = 0; i<3;i++)
{
n[i] = atoi(s[i]);
printf("String %s converts to Integer: %d\n", s[i], n[i]);
};
return 0;
}

