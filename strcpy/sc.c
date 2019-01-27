#include <stdio.h>
#include <string.h>
void print(char s1[],char s2[]);
int main()
{
char s1[] = "Larger text string", s2[] = "Smaller string";
print(s1, s2);
strcpy(s1, s2);
print(s1, s2);
strncpy(s1, s2, 5);
s1[5]='\0';
print(s1, s2);
return 0;
}

void print(char s1[],char s2[])
{
printf("Text is : %s,\tlength is: %u,\t %d charecters\n", s1, sizeof(s1), strlen(s1)); 
printf("Text is : %s,\tlength is: %u,\t %d charecters\n", s2, sizeof(s2), strlen(s2)); 
}
