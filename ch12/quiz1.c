
//�ݺ� Ƚ���� ���� �ֻ��� Ȯ�� ���ϱ�

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int dice, count, i;
    int dice_1=0, dice_2=0, dice_3=0, dice_4=0, dice_5=0, dice_6=0;
    srand(time(NULL));     //   ????
    

    //0. �ݺ�Ƚ�� �ޱ�
    
    printf("�ݺ�Ƚ���� �Է��ϼ��� : ");
    scanf("%d", &count);


    //1. �ֻ��� ������
    
    for (i=0; i<count; i++)
    {   dice=rand() % 6 + 1;     // �ֻ��� ������ (�ֻ��� �� Ȯ��)
        
        switch (dice)        //2. �ֻ��� ����ȸ�� ����   
        {
        case 1: dice_1 ++; break;
        case 2: dice_2 ++; break;
        case 3: dice_3 ++; break; 
        case 4: dice_4 ++; break; 
        case 5: dice_5 ++; break;
        case 6: dice_6 ++; break; 
        }

    }

    //3. ������ Ȯ�� ���ϱ�

    printf("1 ���� Ȯ����? %f %%\n", (float)dice_1/count*100);
    printf("2 ���� Ȯ����? %f %%\n", (float)dice_2/count*100);
    printf("3 ���� Ȯ����? %f %%\n", (float)dice_3/count*100);
    printf("4 ���� Ȯ����? %f %%\n", (float)dice_4/count*100);
    printf("5 ���� Ȯ����? %f %%\n", (float)dice_5/count*100);
    printf("6 ���� Ȯ����? %f %%\n", (float)dice_5/count*100);
    

    return 0;

}