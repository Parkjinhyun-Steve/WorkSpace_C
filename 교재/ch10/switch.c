#include <stdio.h>

int main(void)

{
    int a;
    printf("���ڸ� �Է��� �ּ��� : ");
    scanf("%d",&a);

    switch (a)
    {
        case 0: printf("�Էµ� ���ڴ� 0 �Դϴ�");
            break;
        case 1: printf("�Էµ� ���ڴ� 1 �Դϴ�");
            break;
        case 2: printf("�Էµ� ���ڴ� 2 �Դϴ�");
            break;
        case 3: printf("�Էµ� ���ڴ� 3 �Դϴ�");
            break;
        default: printf("�ٽ� �Է��� �ּ���");
            break;

    }
    return 0;

    switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
}