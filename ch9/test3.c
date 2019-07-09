//두 수를 입력받아서
//작은 수를 출력하는 프로그램 만드시오.

#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("첫번째 숫자를 입력하세요 : ");
    scanf("%d", &x);
    printf("두번째 숫자를 입력하세요 : ");
    scanf("%d", &y);

    if (x<y)
    {
        printf("작은수는 %d", x);
    }
    
    else
    {
        printf("작은수는 %d", y);
    }
        
return 0;

}