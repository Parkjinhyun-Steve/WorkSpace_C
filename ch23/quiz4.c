// �߱� ����

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    srand(time(NULL));

    int x, y, z; // ��ǻ�� ��
    int a, b, c; // ����� ��
    int i, j; // �ݺ� ��

    x = (rand()%9)+1;
    y = (rand()%9)+1;
    z = (rand()%9)+1;
    
    if (x!=y || x!=z || y!=z)
    {
        printf("%d %d %d", x, y, z);
    }   
}