//사용자로부터 숫자를 입력받는다.
//사용자의 숫자가 50인지 확인한다.
//예)           사용자의 숫자를 입력해 주세요 : 50
//   (50일 경우) 당첨되셨습니다.
//               다음기회에.

#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("숫자를 입력해주세요: ");
    scanf("%d",&a);

    if(a==50) printf("당첨되셨습니다.");
    else printf("다음기회에");

    return 0;
       
}

