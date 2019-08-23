// 1~100가지 더하기

#include <stdio.h>

int main(void)
{
    int i=0;
    int sum=0;

    for ( i = 0; i <= 100; i++)
    {
        sum=sum+i;
        
    }

    printf("%d",sum);
    return 0;

}

