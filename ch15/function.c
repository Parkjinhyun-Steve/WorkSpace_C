
#include <stdio.h>


int main(void)
{

    int sum;
    int a=3, b=7;
    sum=add(a,b);
    printf("%d",sum);

    return 0;
}


int add(int a, int b)   // parameter(ÀÎÀÚ)
{
    int sum;
    sum=a+b;
    return sum;

}