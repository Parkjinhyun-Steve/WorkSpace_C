// 1~100까지 홀수만 더하기

#include <stdio.h>

int main(void)
{

    int i=0, sum=0;

    while (i<=100)
    {
    
        if(i%3==0)
            sum=sum+i;
        i++;        
    }
    printf("%d\n",sum);
    
    return 0;

}