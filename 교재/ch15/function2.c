//�Էµ� ���ڸ�ŭ * ���

#include <stdio.h>

void main()
{
    int num, i;
    printf("�ݺ� Ƚ�� �Է� : ");
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

