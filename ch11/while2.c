
//1���� 100���� ���ϱ�

#include <stdio.h>

int main(void)
{
    int sum=0;
    int i=1;

    while (i <= 100)
    {
        sum=sum+i;
        i++;
    }
    printf("1���� 100���� ���Ѱ��� %d\n",sum);
    printf("i = %d",i);

    return 0;
}