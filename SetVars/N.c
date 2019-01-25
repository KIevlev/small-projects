#include <stdio.h>

int main()
{
char letter;
printf("Enter any one keyboard character");
scanf("%c", letter);
char num1, num2;
printf("Enter two integers separated by a space:");
scanf("%c %c", &num1, &num2);
printf("Numbers input: %c and %c \n", num1, num2);
printf("Letter input: %c", letter);
printf("Stored at: %p \n", &letter);
return 0;
}

