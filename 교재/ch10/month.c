
#include <stdio.h>

int main(void)

{
    int month;
    printf("���� �Է����ּ���(1-12) : ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        printf("%d���� Januuary �Դϴ�.",month);
        break;
    case 2:
        printf("%d���� Febuary �Դϴ�.",month);
        break;
    case 3:
        printf("%d���� March �Դϴ�.",month);
        break;
    case 4:
        printf("%d���� April �Դϴ�.",month);
        break;
    case 5:
        printf("%d���� May �Դϴ�.",month);
        break;
    case 6:
        printf("%d���� June �Դϴ�.",month);
        break;
    case 7:
        printf("%d���� July �Դϴ�.",month);
        break;
    case 8:
        printf("%d���� August �Դϴ�.",month);
        break;
    case 9:
        printf("%d���� September �Դϴ�.",month);
        break;
    case 10:
        printf("%d���� October �Դϴ�.",month);
        break;
    case 11:
        printf("%d���� November �Դϴ�.",month);
        break;
    case 12:
        printf("%d���� Decomber �Դϴ�.",month);
        break;
    
    default:
        printf("�߸��� �Է��Դϴ�.") ;   
    }
return 0;

}