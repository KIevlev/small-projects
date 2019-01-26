#include <stdio.h>

int main()
{
int i;
int nums[5]={1,2,3,4,5};
int *ptr0 = &nums[0];
int *ptr1 = &nums[1];
int *ptr2 = &nums[2];
int *ptr3 = &nums[3];
int *ptr4 = &nums[4];
int *ptrs[5] = {ptr0,ptr1,ptr2,ptr3,ptr4};
char str[9] = {'C',' ','i','s',' ','o','k','\0'};
char *string = str;
char *strings[3] = {"Alfa","Bravo","Charlie"};
for (int i =0;i<5;i++)
{
printf("*ptr[%d] adress: %p\tvalue%d\n", i, ptrs[i], *ptrs[i]);
}
printf("String is: %s\n", string);
for (int i=0;i<3;i++)
{
printf("word %d is %s\n", i+1, strings[i]);
}
return 0;
}

