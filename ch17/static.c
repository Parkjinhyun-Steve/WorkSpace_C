
#include <stdio.h>

void aaa();

void main()
{
    aaa();
    aaa();
    aaa();

}

void aaa()
{
    static int i=0;  // static을 붙이면 변수 값이 사라지지 않는다. (지역 내 변수)
    i++;
    printf("%d\n",i);

}