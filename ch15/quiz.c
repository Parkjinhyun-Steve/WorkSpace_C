

// 1. ��ǰ ����
// 2. ����� ����
// 3-1. ��ǰ ���ý� ���� 1�� ����
// 3-2. ���� ���ý� ���� 1�� ����
// 4. ��� Ȯ��


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


    printf("�ùķ��̼� �õ� Ƚ�� : \n");
	scanf("%d", &limit);

    //1. 1~3�� �� �� �ϳ��� �ڵ����� ����ֵ��� ����

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

	printf("�ٲ��� �ʴ� ��� ��÷ Ȯ�� = %5.2lf\n", notChangingPercent);


    //1. �ڵ����� �������� ���

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
    

