//하나의 수를 입력받아서 3보다 크고 10보다 작으면 
//잘못된 입력입니다. 라고 출력  제대로 입력되면 무시
//예) 3보다 크고 10보다 작은수를 입력해주세요: 2
//     잘못된 입력입니다.


#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("3보다 크고 10보다 작은 수를 입력해주세요 : ");
    scanf("%d",x);

    if (   !((x>3) && (x<10));
        printf("잘못된 입력입니다.");
       
    return 0;
}