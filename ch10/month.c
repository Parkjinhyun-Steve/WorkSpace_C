
#include <stdio.h>

int main(void)

{
    int month;
    printf("달을 입력해주세요(1-12) : ");
    scanf("%d",&month);

    switch (month)
    {
    case 1:
        printf("%d월은 Januuary 입니다.",month);
        break;
    case 2:
        printf("%d월은 Febuary 입니다.",month);
        break;
    case 3:
        printf("%d월은 March 입니다.",month);
        break;
    case 4:
        printf("%d월은 April 입니다.",month);
        break;
    case 5:
        printf("%d월은 May 입니다.",month);
        break;
    case 6:
        printf("%d월은 June 입니다.",month);
        break;
    case 7:
        printf("%d월은 July 입니다.",month);
        break;
    case 8:
        printf("%d월은 August 입니다.",month);
        break;
    case 9:
        printf("%d월은 September 입니다.",month);
        break;
    case 10:
        printf("%d월은 October 입니다.",month);
        break;
    case 11:
        printf("%d월은 November 입니다.",month);
        break;
    case 12:
        printf("%d월은 Decomber 입니다.",month);
        break;
    
    default:
        printf("잘못된 입력입니다.") ;   
    }
return 0;

}