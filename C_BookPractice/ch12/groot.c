//

#include <stdio.h>

int main(void)
{
    int water, i, count;
    
    
    // for (i=0 ;  ; i++)
    // while(1)
    for(;;)
    {
        printf("���� �Է����ּ���(0=�� ���� or 1=��): ");
        scanf("%d", &water);

        if (water==0)
        {
           printf("����~�׷�Ʈ, ���� ���\n");
        }

        else if (water==1)
        {
            printf("(�� ����)\n");
        }
        
    }
   
    return 0;

}