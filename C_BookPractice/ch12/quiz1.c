
//반복 횟수에 따른 주사위 확률 구하기

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dice, count, i;
    int dice_1=0, dice_2=0, dice_3=0, dice_4=0, dice_5=0, dice_6=0;
    srand(time(NULL));     //   ????
    

    //0. 반복횟수 받기
    
    printf("반복횟수를 입력하세요 : ");
    scanf("%d", &count);


    //1. 주사위 던지기
    
    for (i=0; i<count; i++)
    {   dice=rand() % 6 + 1;     // 주사위 던지기 (주사위 눈 확인)
        
        switch (dice)        //2. 주사위 나온회수 저장   
        {
        case 1: dice_1 ++; break;
        case 2: dice_2 ++; break;
        case 3: dice_3 ++; break; 
        case 4: dice_4 ++; break; 
        case 5: dice_5 ++; break;
        case 6: dice_6 ++; break; 
        }

    }

    //3. 각각의 확률 구하기

    printf("1 나올 확률은? %f %%\n", (float)dice_1/count*100);
    printf("2 나올 확률은? %f %%\n", (float)dice_2/count*100);
    printf("3 나올 확률은? %f %%\n", (float)dice_3/count*100);
    printf("4 나올 확률은? %f %%\n", (float)dice_4/count*100);
    printf("5 나올 확률은? %f %%\n", (float)dice_5/count*100);
    printf("6 나올 확률은? %f %%\n", (float)dice_5/count*100);
    

    return 0;

}