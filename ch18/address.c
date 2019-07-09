#include <stdio.h>

void main()
{
    int a=100;
    int *p;

    printf("%d\n",a);
    printf("%d\n",&a);

    p=&a;
    printf("%d\n",p);
    printf("%d\n",*p);
    

}