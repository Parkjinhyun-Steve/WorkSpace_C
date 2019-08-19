//1. 8명의 심판으로 점수를 입력받는다.(1~200)
//2. 최대값과 최소값을 제외한 6명의 심판의 점수를 가지고 평균을 낸다.
//3. 점수 출력  
//3-1. 150이상 : 참 잘했어요
//3-2. 100이상 : 잘했어요
//3-3. 100미만 : 노력하세요


#include <stdio.h>

void main()
{
    int x[8];
    int i;
    int sum=0;
    int max, min, avg;

    for (i=0; i<8 ; i++)
    {
        printf("%d번 심판의 점수(1-200)? ", i+1);
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

    printf("최대값 %d\n", max);
    printf("최소값 %d\n", min);

    printf("평균값(최대값 최소값 제외) %d\n", avg);


    if (avg >= 150)
    {
        printf("참 잘했어요");        
    }
    else if (avg >= 100)
    {
        printf("잘 했어요");
    }
    else
    {
        printf("노력하세요");
    }
    
    
    
}
