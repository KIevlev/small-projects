#include <stdio.h>
#define LINE "________________"
#define TITLE "C programm"
#define AUTHOR "KIKA"
#ifdef linux
#define SYSTEM "Linux"
#endif

int main()
{
printf("\n \t %s \n \t %s \n", LINE, TITLE);
printf("\t by %s \n \t %s \n", AUTHOR, LINE);
printf("\n Operating System: %s \n", SYSTEM);
return 0;
}

