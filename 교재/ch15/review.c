
// ���ϴ� ���ڸ� ���ϴ� Ƚ���� ��´�.

#include <stdio.h>
void printch(char c, int count);

int main(void)
{

    char c;
    int i, count;

    printf("���ڸ� �Է��� �ּ��� : ");
    scanf("%c", &c);
    
    printf("�ݺ����� �Է��� �ּ��� : ");
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