// ���� ���߱� ���� (�⺻ ���ڴ� 10)
// 1. ����ڷκ��� ���� �Է�
// 2. ���ں� �� ���
// 3. ���������� �� �� �ݺ� ó��

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void)
{
    srand(time(NULL));
    int num;
    int num_max;
    int num_min;
        
    printf("����(�ּҰ�_�ִ밪)�� �Է����ּ��� : ");
    scanf("%d %d", &num_min, &num_max);

    num= rand() % (num_max+1 - num_min) + num_min;  //min ~ max���� �ְ� �ʹ�.

    int a=0;
    int i=0;
    int i_count=0;
    printf("�ݺ�Ƚ���� �Է����ּ��� : ");
    scanf("%d",&i_count);

    printf("%d\n",num);
       
    do
    {
        i++;
        printf("���ڸ� �Է��� �ּ��� : ");
        scanf("%d",&a);
        if (a>num)
        {
            printf("%d�� ū���Դϴ�. \n", a);
        }
        else if(a<num) printf("%d�� �������Դϴ�. \n", a);

    } while (!(a == num || i >= i_count));

    if (a == num) printf("�����Դϴ�. \n");

    else printf("�����Դϴ�.");

    return 0;

}
