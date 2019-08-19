// 야구 게임

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand(time(NULL));

    int x, y, z; // 컴퓨터 값
    int a, b, c; // 사용자 값
    int i, j; // 반복 값

    x = (rand()%9)+1;
    y = (rand()%9)+1;
    z = (rand()%9)+1;
    
    if (x!=y || x!=z || y!=z)
    {
        printf("%d %d %d", x, y, z);
    }   
}