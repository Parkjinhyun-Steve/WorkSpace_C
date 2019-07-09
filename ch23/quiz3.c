
// 가위 바위 보 프로그램
// 가위=1 바위=2 보=3
// 예) 사용자 입력(가위=1, 바위=2, 보=3)
// 컴퓨터 랜덤으로 이겼는지 졌는지 비겼는지 출력하는 프로그램


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand(time(NULL));

    int x; // 컴퓨터 값
    int y; // 사용자 값
    int Money1=10000; // 사용자 돈
    int Money2; // 판돈
    int i,j ; // 게임 횟수

    printf("\n게임 횟수를 입력해 주세요 : ");
    scanf("%d", &j);

    for ( i=0; i <= j; i++)
    {
    
    x=(rand()%3) + 1; // 컴퓨터 값   //printf("컴퓨터는 %d\n", x);

    printf("\n** 현재 사용자의 돈은 %d원 입니다.\n\n", Money1);

    printf("** 이겼을때: + 판돈 \n** 졌을때 : 0 \n** 비겼을때 : 판돈 /2\n");

    printf("\n1. 판돈을 거세요. : ");   // 사용자 판돈 입력
    scanf("%d", &Money2);

    printf("2. 가위=1, 바위=2, 보=3를 입력하세요 : ");  // 사용자 가위 바위 보 입력
    scanf("%d", &y);

    printf("\n** 컴퓨터는 %d\n", x);
    printf("** 사용자는 %d\n\n", y);
   
    
    switch (x)
    {
        case 1:  // 가위=1, 바위=2, 보=3
            if (y==1)
            {
                printf("** 비겼습니다 **\n");
                Money1 = Money1 - (Money2/2);
            }
            else if (y==2) 
            {
                printf("** 졌습니다 **\n");
                Money1 = Money1 - (Money2);
            }
            else
            {
                printf("** 이겼습니다 **\n");
                Money1 = Money1 + (Money2*2);
            }
        break;
        case 2:  // 가위=1, 바위=2, 보=3
            if (y==1)
            {
                printf("** 이겼습니다 **\n");
                Money1 = Money1 + (Money2*2);
            }
            else if (y==2) 
            {
                printf("** 비겼습니다 **\n");
                Money1 = Money1 - (Money2/2);
            }
            else
            {
                printf("** 졌습니다 **\n");
                Money1 = Money1 - (Money2);
            }
        break;
        case 3:  // 가위=1, 바위=2, 보=3
            if (y==1)
            {
                printf("** 졌습니다  **\n");
                Money1 = Money1 - (Money2);
            }
            else if (y==2) 
            {
                printf("** 이겼습니다**\n");
                Money1 = Money1 + (Money2*2);
            }
            else
            {
                printf("** 비겼습니다 **\n");
                Money1 = Money1 - (Money2/2);
            }
        break;
        default:

    break;
    }

    if (Money1 <= 0)
    {
        printf("사용자 님은 파산하였습니다.\n");
        break;
    }
    
    }
}            

