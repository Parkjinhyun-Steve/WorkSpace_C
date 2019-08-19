//1. 두수를 입력받아서 더해서 출력프로그램
//성공시 2. 더하는 부분을 함수로 만들어 사용
int add(int num1, int num2);
#include <stdio.h>

void main()
{
    int num1, num2, a, b, c, d, e, f;
    printf("숫자를 입력해주세요(x, y) : " ) ;
    scanf("%d %d",&num1, &num2);

    a=add1(num1, num2);
    printf("더한값은 %d\n",a);

    b=add2(num1, num2);
    printf("뺀 값은 %d\n", b);

    c=add3(num1, num2);
    printf("곱한 값은 %d\n", c);

    d=add4(num1, num2);
    printf("나눈 값은 %d\n", d);

    e=add5(num1, num2);
    printf("나머지는 %d\n", e);

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
