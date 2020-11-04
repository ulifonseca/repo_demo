#include <stdio.h>

int main(void)
{
    int a=10;
    int *pt1=&a;
    *pt1 = 99;
    printf("%d\n",a);
    return 0;
}