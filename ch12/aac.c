//반복 횟수에 따른 주사위 확률 구하기
//0. 반복횟수 받기
//1. 주사위 던지기
//2. 주사위 나온회수 저장
//3. 각각의 확률 구하기




#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int dice, i, count;
    int dice_1, dice_2, dice_3, dice_4, dice_5, dice_6;
    
    printf("반복수를 입력하세요 : ");
    scanf("%d",&count);

    dice=rand() % 6 + 1;

    for ( i = 0; i<count ; i++)
    {
        switch (dice)
        {
        case 1: dice_1 ++; break;
        case 2: dice_2 ++; break;
        case 3: dice_3 ++; break;
        case 4: dice_4 ++; break;
        case 5: dice_5 ++; break;
        case 6: dice_6 ++; break;
        
        }
    }
    

    printf ("주사위 1의 확률은? %f %% \n", (double)dice_1/count*100);
    printf ("주사위 2의 확률은? %f %% \n", (double)dice_2/count*100);
    printf ("주사위 3의 확률은? %f %% \n", (double)dice_3/count*100);
    printf ("주사위 4의 확률은? %f %% \n", (double)dice_4/count*100);
    printf ("주사위 5의 확률은? %f %% \n", (double)dice_5/count*100);
    printf ("주사위 6의 확률은? %f %% \n", (double)dice_6/count*100);


    return 0;    


}