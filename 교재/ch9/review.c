//0,1,2,3 �� �Է� �޴´�. (�� ���� ���ڴ� �߸��� �Է��Դϴ�.)
//�Է¹��� ���� �ѱ۷� ����Ѵ�.


#include <stdio.h>

int main(void)

{
    int a, b, c, d;
    printf("���ڸ� �Է����ּ���(only 0,1,2,3) : ");
    scanf("%d",&a);

    if (a==0)
        printf("�Էµ� ���ڴ� %d�Դϴ�.",a);
    else if (a==1)
        printf("�Էµ� ���ڴ� %d�Դϴ�.",a);
    else if (a==2)
        printf("�Էµ� ���ڴ� %d�Դϴ�.",a);
    else if (a==3)
        printf("�Էµ� ���ڴ� %d�Դϴ�.",a);
    else
        printf("�ٽ� �Է��� �ּ���.");

    return 0;
        
}