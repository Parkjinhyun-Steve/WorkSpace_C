//�� �� �߿��� ū ���� ã�� �Լ� ����

#include <stdio.h>
int get_larger(int x, int y);

int main(void) 
{
    int x,y;

    printf("�� ���� �Է��� �ּ���(x, y):");
    scanf("%d %d", &x, &y);

    printf("ū ���� %d\n", get_larger(x, y));
        
    return 0;
}

int get_larger(int x, int y)
{
    if( x > y ) return (x);
    else return (y);
    
}
