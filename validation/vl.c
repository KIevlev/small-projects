#include <stdio.h>
#include <ctype.h>

int main()
{
char str[7];
int i;
int flag;
puts("Enter string with 6 digits without spaces");
gets(str);
for (i = 0; i<6;i++)
{
if(!isdigit(str[i]))
{
flag = 0;
if(isalpha(str[i]))
{printf("Letter found (%c)", str[i]);}
else if (ispunct(str[i]))
{printf("punctuation found");}
else if (isspace(str[i]))
{printf("space found");}
}
(flag)? puts("Entry valid"):puts("Entry invalid");
}
return 0;
}

