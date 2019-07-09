#include <stdio.h>

int main(void)

{
    int a;
    printf("숫자를 입력해 주세요 : ");
    scanf("%d",&a);

    switch (a)
    {
        case 0: printf("입력된 숫자는 0 입니다");
            break;
        case 1: printf("입력된 숫자는 1 입니다");
            break;
        case 2: printf("입력된 숫자는 2 입니다");
            break;
        case 3: printf("입력된 숫자는 3 입니다");
            break;
        default: printf("다시 입력해 주세요");
            break;

    }
    return 0;

    switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
}