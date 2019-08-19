// 숫자 하나를 입력받아서
// 100보다 크거나 50보다 작으면
// good이라고 출력되고 아니면 bad라고 출력되게 만드시오

#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &x);

    if (x>100 || x<50)
    {
        printf("good");
    }

    else
    {
        printf("bad");
    }
    return 0;
}
