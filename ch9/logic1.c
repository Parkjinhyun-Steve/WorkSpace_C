// ���� �ϳ��� �Է¹޾Ƽ�
// 100���� ũ�ų� 50���� ������
// good�̶�� ��µǰ� �ƴϸ� bad��� ��µǰ� ����ÿ�

#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("���ڸ� �Է��ϼ��� : ");
    scanf("%d", &x);

    if (x>100 || x<50)
    {
        printf("good");
    }

    else
    {
        printf("bad");
    }
    return 0;
}
