// ���ڸ� �Է¹޾Ƽ� �Ҽ����� �ƴ��� �Ǵ��ϴ� ���α׷�
// ��, ����Ȯ���� �Լ��� ���� Ȯ�� ���ϰ�(0:�Ҽ�, -1:�Ҽ��ƴ�)


#include <stdio.h>

void main()
{
    int num, check;
    printf("���ڸ� �Է����ּ��� : ");
    scanf("%d",&num);
    check=prich(num);
    if(check==-1)
        printf("�Ҽ��ƴ�");
    else
        printf("�Ҽ�");
    
}


// ��, ����Ȯ���� �Լ��� ���� Ȯ�� ���ϰ�(0:�Ҽ�, -1:�Ҽ��ƴ�)

int prich(int num)
{
    
    int j;
    for ( j=2; j<num ; j++)
    {
        if( num%j == 0) break;        
    }
    if( j==num ) return 0;
    else return -1;
    
}
