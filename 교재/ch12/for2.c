// 입력된 수의 약수를 모두 출력

#include <stdio.h>

int main(void)
{
 
    int i, input_num, count=0;
    
    printf("숫자를 입력하세요 : ");
    scanf("%d",&input_num);
    
    for ( i = 1; input_num >=i; i++)
    {
        if (input_num % i==0)
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("약수의 개수는 %d개 입니다",count);
    return 0;    

}
