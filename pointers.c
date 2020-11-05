#include <stdio.h>

int main(void)
{
    int a=10;
    int *pt1=&a;
    *pt1 = 99;
    printf("%d\n",a);
    printf("%d\n",*pt1);
    printf("Hello world\n");
    for (int i = 0; i < 5; i++)
    {
        printf("My love miri\n");
    }

    int i= 0;
    while(i<3)
    {
        printf("Love you more!\n");
        i++;
    }
    
    return 0;
}
