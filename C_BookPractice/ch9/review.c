//0,1,2,3 을 입력 받는다. (그 외의 숫자는 잘못된 입력입니다.)
//입력받은 수를 한글로 출력한다.


#include <stdio.h>

int main(void)

{
    int a, b, c, d;
    printf("숫자를 입력해주세요(only 0,1,2,3) : ");
    scanf("%d",&a);

    if (a==0)
        printf("입력된 숫자는 %d입니다.",a);
    else if (a==1)
        printf("입력된 숫자는 %d입니다.",a);
    else if (a==2)
        printf("입력된 숫자는 %d입니다.",a);
    else if (a==3)
        printf("입력된 숫자는 %d입니다.",a);
    else
        printf("다시 입력해 주세요.");

    return 0;
        
}