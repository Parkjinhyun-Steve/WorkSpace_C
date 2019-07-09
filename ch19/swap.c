// swap
// a,b의 정수형 변수를 선언 후 값을 넣고
// 두 값을 교환하여 출력
// 예) a=3, b=4 초기화 후 두 값을 교환하여
// a와 4를 출력하면 4,3으로 출력


#include <stdio.h>

void main()
{

    
    int a=3, b=4; // 교환
    
    int c=0;

    c=a;
    a=b;
    b=c;
    
    printf("a=%d  b=%d", a,b);



}