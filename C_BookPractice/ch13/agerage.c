

#include <stdio.h>
#define num 10

void main()
{
    int score[num];
    int i;
    int sum=0;
    double average;

    // for (i = 0; i < num; i++)
    // {
    //     score[i] = i+1;
    // }
    
  
    for (i = 0; i < num ; i++)
    {
        printf("%d �� ������ ������? : ", i+1);
        scanf("%d", &score[i]);
        sum+=score[i];
    }
        
    printf("��� : %d \n", sum/num);


    


}

