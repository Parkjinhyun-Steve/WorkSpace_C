// 숫자를 입력받아서 소수인지 아닌지 판단하는 프로그램
// 단, 수소확인을 함수를 만들어서 확인 리턴값(0:소수, -1:소수아님)


#include <stdio.h>

void main()
{
    int num, check;
    printf("숫자를 입력해주세요 : ");
    scanf("%d",&num);
    check=prich(num);
    if(check==-1)
        printf("소수아님");
    else
        printf("소수");
    
}


// 단, 수소확인을 함수를 만들어서 확인 리턴값(0:소수, -1:소수아님)

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
