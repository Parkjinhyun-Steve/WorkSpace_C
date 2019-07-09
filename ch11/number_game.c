// 숫자 맞추기 게임 (기본 숫자는 10)
// 1. 사용자로부터 숫자 입력
// 2. 숫자비교 후 출력
// 3. 종료조건이 될 때 반복 처리

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand(time(NULL));
    int num;
    int num_max;
    int num_min;
        
    printf("범위(최소값_최대값)을 입력해주세요 : ");
    scanf("%d %d", &num_min, &num_max);

    num= rand() % (num_max+1 - num_min) + num_min;  //min ~ max값을 넣고 싶다.

    int a=0;
    int i=0;
    int i_count=0;
    printf("반복횟수를 입력해주세요 : ");
    scanf("%d",&i_count);

    printf("%d\n",num);
       
    do
    {
        i++;
        printf("숫자를 입력해 주세요 : ");
        scanf("%d",&a);
        if (a>num)
        {
            printf("%d는 큰수입니다. \n", a);
        }
        else if(a<num) printf("%d는 작은수입니다. \n", a);

    } while (!(a == num || i >= i_count));

    if (a == num) printf("정답입니다. \n");

    else printf("실패입니다.");

    return 0;

}
