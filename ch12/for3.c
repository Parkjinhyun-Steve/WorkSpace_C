

#include <stdio.h>

int main(void)

{
    int i, num, count=0;
    printf("���ڸ� �Է��ϼ��� : ");
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
        printf("�Ҽ��Դϴ�");


    return 0;
}
