//1. �μ��� �Է¹޾Ƽ� ���ؼ� ������α׷�
//������ 2. ���ϴ� �κ��� �Լ��� ����� ���
int add(int num1, int num2);
#include <stdio.h>

void main()
{
    int num1, num2, a, b, c, d, e, f;
    printf("���ڸ� �Է����ּ���(x, y) : " ) ;
    scanf("%d %d",&num1, &num2);

    a=add1(num1, num2);
    printf("���Ѱ��� %d\n",a);

    b=add2(num1, num2);
    printf("�� ���� %d\n", b);

    c=add3(num1, num2);
    printf("���� ���� %d\n", c);

    d=add4(num1, num2);
    printf("���� ���� %d\n", d);

    e=add5(num1, num2);
    printf("�������� %d\n", e);

}


int add1(int num1, int num2)
{
    return num1 + num2;
}    

int add2(int num1, int num2)
{
    return num1 - num2;
}

int add3(int num1, int num2)
{
    return num1 * num2;
}

int add4(int num1, int num2)
{
    return num1 / num2;
}

int add5(int num1, int num2)
{
    return num1 % num2;
}
