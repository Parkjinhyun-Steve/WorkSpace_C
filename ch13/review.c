
//9���� ������ �迭�� ���� �� �� �迭��
//2���� 2�� ����� �����Ѵ�.
//2 4 6 8 10 12 14 16 18
//�׸��� ����Ѵ�

#include <stdio.h>

void main()
{ 
    int array[9];
    int i=0;

    // for (i = 2; i < 20 ; i=i+2)
    // {
    //     array[i] = i;
    //     printf("%d  ", i);
    // }

    for (i = 0; i <9 ; i++)
    {
        array[i]=2*(i+1);
        
    }
    
    for ( i = 0; i < 9 ; i++)
    {
        printf("%d\n", array[i]);
    }
    

}
