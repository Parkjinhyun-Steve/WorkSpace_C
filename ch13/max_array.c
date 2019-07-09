//배열을 10개 만들어서 그 중 최대값을 찾는다.
//배열은 랜덤을 이용하여 1-100사이 값을 넣는다.

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

    printf("최대 값 : %d\n", max);
    printf("최소 값 : %d\n", min);

}
