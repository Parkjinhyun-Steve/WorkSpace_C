
//1부터 100까지 더하기

#include <stdio.h>

int main(void)
{
    int sum=0;
    int i=1;

    while (i <= 100)
    {
        sum=sum+i;
        i++;
    }
    printf("1에서 100까지 더한값은 %d\n",sum);
    printf("i = %d",i);

    return 0;
}