#include <stdio.h>

int main(void)
{

    int i=0, x;
    
    printf("��� �ݺ��Ͻðڽ��ϱ�? : ");
    
    scanf("%d", &x);
    
    while (i<x)
    {
        printf("%d. �ȳ��ϼ���\n",i);
        i++;
    }
        
    return 0;
}