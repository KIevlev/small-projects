#include <stdio.h>

typedef struct
{
char *name;
char *popn;
} City;

int main()
{
City ny, la, ch, *ptr;
ny.name = "New York";
ny.popn = "8,270,000";
printf("city: %s\tpopn: %s\n",ny.name,ny.popn);
ptr=&la;
ptr->name="Los Angeles";
ptr->popn="3,380,000";
printf("city: %s\tpopn: %s\n",la.name,la.popn);
ptr=&ch;
ptr->name="New York";
ptr->popn="2,500,000";
printf("city: %s\tpopn: %s\n",ptr->name,ptr->popn);
return 0;
}

