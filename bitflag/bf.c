#include <stdio.h>

int main()
{
int flags = 8;
printf("Было: %d\n", flags);
flags = flags | 2;
printf("Стало: %d\n", flags);
printf("Flag 1 is %s", ((flags & 1)>0)? "ON\n": "OF\n");
printf("Flag 2 is %s", ((flags & 2)>0)? "ON\n": "OF\n");
printf("Flag 3 is %s", ((flags & 4)>0)? "ON\n": "OF\n");
printf("Flag 4 is %s", ((flags & 8)>0)? "ON\n": "OF\n");
flags = flags<<1;
printf("Сдвинули\n");
printf("Flag 1 is %s", ((flags & 1)>0)? "ON\n": "OF\n");
printf("Flag 2 is %s", ((flags & 2)>0)? "ON\n": "OF\n");
printf("Flag 3 is %s", ((flags & 4)>0)? "ON\n": "OF\n");
printf("Flag 4 is %s", ((flags & 8)>0)? "ON\n": "OF\n");
printf("Flags = %d", flags);
flags = flags<<1;
printf("Сдвинули\n");
printf("Flags = %d", flags);
return 0;
}

