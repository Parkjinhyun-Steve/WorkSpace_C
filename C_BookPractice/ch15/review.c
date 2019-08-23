
// 원하는 문자를 원하는 횟수로 찍는다.

#include <stdio.h>
void printch(char c, int count);

int main(void)
{

    char c;
    int i, count;

    printf("문자를 입력해 주세요 : ");
    scanf("%c", &c);
    
    printf("반복수를 입력해 주세요 : ");
    scanf("%d", &count);

    printch(c, count);

    // for ( i=0; i<count ; i++)
    // {
    //     printf("%c",c);
    // }
    
    return 0;
}

void printch(char c, int count)
{
    int i;
    for (i=0; i < count ; i++)
    {
        printf("%c", c);
    }
    
}