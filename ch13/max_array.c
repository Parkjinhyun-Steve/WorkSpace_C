//�迭�� 10�� ���� �� �� �ִ밪�� ã�´�.
//�迭�� ������ �̿��Ͽ� 1-100���� ���� �ִ´�.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
       
    int x[10];
    int i;
    int max, min;

    srand(time(NULL));

    
    for ( i = 0; i < 10; i++)
    {
        x[i] = (rand()%100) + 1;
        printf("%d\n", x[i]);

        max=x[0];
        if (max < x[i])
        {
            max = x[i];
        }

        min=x[0];
        if (min > x[i])
        {
            min = x[i];
        }
        
    }

    printf("�ִ� �� : %d\n", max);
    printf("�ּ� �� : %d\n", min);

}
