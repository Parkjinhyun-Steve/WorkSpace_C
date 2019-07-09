
#include <stdio.h>

int main(void)
{
    int num, i;
    printf("숫자를 입력해 주세요");
    scanf("%d",&num);

    for ( i = num ; i > 1 ; i--)
    {
        printf("%d\n",i);
    }
    
    return 0;
    
}
