#include <stdio.h>

int main(void)
{

    int i=0, x;
    
    printf("몇번 반복하시겠습니까? : ");
    
    scanf("%d", &x);
    
    while (i<x)
    {
        printf("%d. 안녕하세요\n",i);
        i++;
    }
        
    return 0;
}