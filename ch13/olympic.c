//1. 8���� �������� ������ �Է¹޴´�.(1~200)
//2. �ִ밪�� �ּҰ��� ������ 6���� ������ ������ ������ ����� ����.
//3. ���� ���  
//3-1. 150�̻� : �� ���߾��
//3-2. 100�̻� : ���߾��
//3-3. 100�̸� : ����ϼ���


#include <stdio.h>

void main()
{
    int x[8];
    int i;
    int sum=0;
    int max, min, avg;

    for (i=0; i<8 ; i++)
    {
        printf("%d�� ������ ����(1-200)? ", i+1);
        scanf("%d", &x[i]);        
    }
        
    max = x[0];
    for (i=0; i<8; i++)
    {
        if (max < x[i])
        {
            max = x[i];
        }
    }

    min = x[0];
    for (i=0; i<8; i++)
    {
        if (min > x[i])
        {
            min = x[i];
        }
    }


    for ( i = 0; i < 8 ; i++)
    {
        sum+=x[i];
    }
    
    sum = sum-max-min;
    avg = sum/6;

    printf("�ִ밪 %d\n", max);
    printf("�ּҰ� %d\n", min);

    printf("��հ�(�ִ밪 �ּҰ� ����) %d\n", avg);


    if (avg >= 150)
    {
        printf("�� ���߾��");        
    }
    else if (avg >= 100)
    {
        printf("�� �߾��");
    }
    else
    {
        printf("����ϼ���");
    }
    
    
    
}
