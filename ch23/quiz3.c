
// ���� ���� �� ���α׷�
// ����=1 ����=2 ��=3
// ��) ����� �Է�(����=1, ����=2, ��=3)
// ��ǻ�� �������� �̰���� ������ ������ ����ϴ� ���α׷�


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand(time(NULL));

    int x; // ��ǻ�� ��
    int y; // ����� ��
    int Money1=10000; // ����� ��
    int Money2; // �ǵ�
    int i,j ; // ���� Ƚ��

    printf("\n���� Ƚ���� �Է��� �ּ��� : ");
    scanf("%d", &j);

    for ( i=0; i <= j; i++)
    {
    
    x=(rand()%3) + 1; // ��ǻ�� ��   //printf("��ǻ�ʹ� %d\n", x);

    printf("\n** ���� ������� ���� %d�� �Դϴ�.\n\n", Money1);

    printf("** �̰�����: + �ǵ� \n** ������ : 0 \n** ������� : �ǵ� /2\n");

    printf("\n1. �ǵ��� �ż���. : ");   // ����� �ǵ� �Է�
    scanf("%d", &Money2);

    printf("2. ����=1, ����=2, ��=3�� �Է��ϼ��� : ");  // ����� ���� ���� �� �Է�
    scanf("%d", &y);

    printf("\n** ��ǻ�ʹ� %d\n", x);
    printf("** ����ڴ� %d\n\n", y);
   
    
    switch (x)
    {
        case 1:  // ����=1, ����=2, ��=3
            if (y==1)
            {
                printf("** �����ϴ� **\n");
                Money1 = Money1 - (Money2/2);
            }
            else if (y==2) 
            {
                printf("** �����ϴ� **\n");
                Money1 = Money1 - (Money2);
            }
            else
            {
                printf("** �̰���ϴ� **\n");
                Money1 = Money1 + (Money2*2);
            }
        break;
        case 2:  // ����=1, ����=2, ��=3
            if (y==1)
            {
                printf("** �̰���ϴ� **\n");
                Money1 = Money1 + (Money2*2);
            }
            else if (y==2) 
            {
                printf("** �����ϴ� **\n");
                Money1 = Money1 - (Money2/2);
            }
            else
            {
                printf("** �����ϴ� **\n");
                Money1 = Money1 - (Money2);
            }
        break;
        case 3:  // ����=1, ����=2, ��=3
            if (y==1)
            {
                printf("** �����ϴ�  **\n");
                Money1 = Money1 - (Money2);
            }
            else if (y==2) 
            {
                printf("** �̰���ϴ�**\n");
                Money1 = Money1 + (Money2*2);
            }
            else
            {
                printf("** �����ϴ� **\n");
                Money1 = Money1 - (Money2/2);
            }
        break;
        default:

    break;
    }

    if (Money1 <= 0)
    {
        printf("����� ���� �Ļ��Ͽ����ϴ�.\n");
        break;
    }
    
    }
}            

