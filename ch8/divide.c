#include <stdio.h>

int main(void)
{
    // 1. 두개의 정수를 입력받음
    
    int x,y;
    scanf("%d %d", &x, &y);

    // 2. 몫과 나머지를 구해서 출력

    printf("%d    ", x/y);
    printf("%d", x%y);
    return 0;
    
}
