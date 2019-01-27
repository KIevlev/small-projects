#include <stdio.h>
#include <string.h>

int main()
{
char big[] = "Это очень блин большая строка";
char subs[] = "строка";
if (strstr(big,subs)==NULL)
{
printf("string is not found");
}
else
{
printf("Substring \"%s\" was found at %p\n", subs, strstr(big,subs));
printf("%p\n", strstr(big,subs)-4);
printf("Element index number: %ld\n", strstr(big,subs)-big);
}
return 0;
}

