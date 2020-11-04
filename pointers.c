#include <stdio.h>

int main(void)
{
    int a=10;
    int *pt1=&a;
    *pt1 = 99;
    printf("%d\n",a);
    printf("%d\n",*pt1);
    return 0;
}
