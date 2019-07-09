//입력된 숫자만큼 * 찍기

#include <stdio.h>

void main()
{
    int num, i;
    printf("반복 횟수 입력 : ");
    scanf("d",&num);

    printstar(num);
    
    // for ( i = 0 ; i < num ; i++)
    // {
    //     printf("*"); 
            
    // }

}

void printstar(int num)
{
    int i;
    for (i = 0; i < num; i++)
    {
        printf("*");
    }
    
}

