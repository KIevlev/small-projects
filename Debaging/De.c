#include <stdio.h>
#undef DEBUG
int main()
{
#if DEBAG == 1
printf("Debag status = 1\n");
#elif DEBAG == 2
printf("Debag status = 2\n");
#else
#ifdef DEBAG
printf("Debag defined!\n");
#endif
#ifndef DEBAG
printf("Debag not defined!\n");
#endif
#endif
return 0;
}



