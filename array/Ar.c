#include <stdio.h>

int main()
{
int arr[3];
arr[0] = 100;
arr[1] = 200;
arr[2] = 300;
char text[]= {'C',' ','p','r','o','g','\0'};
printf("1st:\t%d\n",arr[0]);
printf("2st:\t%d\n",arr[1]);
printf("3st:\t%d\n",arr[2]);
printf("string:\t%s\n",text);
return 0;
}

