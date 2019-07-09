

// 1. 상품 선택
// 2. 사용자 선택
// 3-1. 상품 선택시 염소 1개 개봉
// 3-2. 염소 선택시 염소 1개 개봉
// 4. 우승 확률


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));

    int answerDoor;   
	int yourChoise;   
	int openDoor = 0;
	int limit;
	int notChangingWin = 0;
	int changingWin = 0;
	double notChangingPercent = 0.0;
	double ChangingPercent = 0.0;


    printf("시뮬레이션 시도 횟수 : \n");
	scanf("%d", &limit);

    //1. 1~3번 문 중 하나에 자동차가 들어있도록 설정

    for ( i = 0 ; i < limit ; i++)
    {
        answerDoor = (rand() % 3) + 1;
        yourChoise = (rand() % 3) + 1;
        
	    if (answerDoor == yourChoise)
        {
            notChangingWin++;
        }
    
	}

	notChangingPercent = (double)notChangingWin / limit * 100;

	printf("바꾸지 않는 경우 당첨 확률 = %5.2lf\n", notChangingPercent);


    //1. 자동차를 선택했을 경우

    for ( int i = 0 ; i < limit ; i++))
    {
        answerDoor = (rand() % 3) + 1;
        yourChoise = (rand() % 3) + 1;
    }
    
    if (answerDoor==yourChoise)
    {
        do
        {
            openDoor = (rand() % 3) + 1;
        } while (openDoor == yourChoise);        
    }
    
    else
        if ((answerDoor!=1) && (yourChoise!=1))
        {
            openDoor = 1;
        }
        
        else if ((answerDoor!=2) && (yourChoise!=2))
        {
            openDoor=2;
        }
        else
        {
            openDoor=3;
        }
        
       
        
        switch (yourChoise)
        {
        case 1:
            if (openDoor == 2);
            {
                yourChoise = 3
            }
            else yourChoise = 2
            break;
        
        default:
            break;
        }



    }
    

