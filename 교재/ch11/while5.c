// �Է¹��� ���ڰ� 0�̸� ����
// �׷��� ������ ��� �Է� ��û

#include <stdio.h>

int main(void)
{
    int i=1;

    do
    {
        printf("���ڸ� �Է����ּ��� : ");
        scanf("%d",&i);
    }  
    while(i != 0);
    
    printf("����Ǿ����ϴ�.");
    return 0;

}