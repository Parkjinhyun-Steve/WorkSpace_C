// �Էµ� ���� ����� ��� ���

#include <stdio.h>

int main(void)
{
 
    int i, input_num, count=0;
    
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d",&input_num);
    
    for ( i = 1; input_num >=i; i++)
    {
        if (input_num % i==0)
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("����� ������ %d�� �Դϴ�",count);
    return 0;    

}
