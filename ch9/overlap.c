//숫자를 입력받아서 100이상이면
//100 이상입니다.


#include <stdio.h>

int main(void)
{
    int x, y, z;
    printf("숫자를 입력해 주세요 : ");
    scanf("%d", &x);
    
    if (x>100)
    {
        printf("100이상입니다.");

        if (x>200)
        {
            printf("200이상입니다.");
        }
        else
        {
            printf("300보다는 작습니다.");
        }
                    
    }
    
    else
    {
        if (x<50)
        {
            printf("50이하입니다.");
        }
        
    }
    
    
}