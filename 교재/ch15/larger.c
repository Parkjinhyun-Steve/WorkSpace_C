//두 수 중에서 큰 수를 찾는 함수 예제

#include <stdio.h>
int get_larger(int x, int y);

int main(void) 
{
    int x,y;

    printf("두 수를 입력해 주세요(x, y):");
    scanf("%d %d", &x, &y);

    printf("큰 수는 %d\n", get_larger(x, y));
        
    return 0;
}

int get_larger(int x, int y)
{
    if( x > y ) return (x);
    else return (y);
    
}
