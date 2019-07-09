#include <stdio.h>

int main(void)
{
    int i;
    printf("%d\n", 3/2);   //정수 연산 결과 정수
    printf("%f\n", 3.0/2);   //실수 정수 연산 결과 실수
    printf("%f\n", (double)3/2);  //정수를 실수로 형변환
                                  //즉, 실수 정수 연산 결과 실수
    i=(int)1.3+(int)1.8; //실수 각각 정수로 형변환하여 연산 결과 정수
    printf("%d\n",i);

    i=1.3 + 1.8;  //실수 연산후 정수 변환 결과 정수
    printf("%d\n", i);


    // 다음 수식이 정확히 계산되도록 수식을 수정하시오. (출력값이 37.777... 이 나아와)
    double temp;
    temp = (double)5/(double)9 * (100-32);
    printf("%f",temp);
    

    return 0;

}