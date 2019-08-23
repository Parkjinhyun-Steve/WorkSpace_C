

#include <stdio.h>

int main(void)

{
    int i, num, count=0;
    printf("숫자를 입력하세요 : ");
    scanf("%d",&num);

    for (i=1; num>=i; i++)
    {
        if((num % i) == 0)
        {
        printf("%d\n",i);
        count++;
        if (count>2) break;
        }
    }
    
    if (count==2)
        printf("소수입니다");


    return 0;
}
