

#include <stdio.h>

void main()
{
    int i;
    int a[10];

    for (i =0; i < 10; i++)
    {
        a[i]=i+1;
    }
    
    // for (i = 2; i < 10; i=i+2)
    // {
    //     printf("%d\n",a[i]);
    // }


    for (i = 2; i < 10; i++)
    {
        // printf("%d\n",i);
        
        if (i%2==0)
        {
            printf("%d\n",a[i]);
        }
    
    }
    
    

}