//���ڸ� �Է¹޾Ƽ� 100�̻��̸�
//100 �̻��Դϴ�.


#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("���ڸ� �Է��� �ּ��� : ");
    scanf("%d", &x);
    
    if (x>100)
    {
        printf("100�̻��Դϴ�.");

        if (x>200)
        {
            printf("200�̻��Դϴ�.");
        }
        else
        {
            printf("300���ٴ� �۽��ϴ�.");
        }
                    
    }
    
    else
    {
        if (x<50)
        {
            printf("50�����Դϴ�.");
        }
        
    }
    
    
}