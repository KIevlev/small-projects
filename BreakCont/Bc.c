#include <stdio.h>

int main()
{
int i, j;
for (i = 0; i<3; i++)
{
for(j=0;j<3;j++)
{
if (i==2 && j==2) 
{
printf("BREAKING INNER CYCLE");
break;
}
printf("We're at %d %d\n", i,j);
}
}
for (i = 0; i<3; i++)
{
for(j=0;j<3;j++)
{
if (i==2 && j==2) 
{
printf("passing through one step");
continue;
}
printf("We're at %d %d\n", i,j);
}
}
return 0;
}

