// ±¸±¸´Ü

#include <stdio.h>

void main()

{
    int i,j,k;
    int l;

    for ( i=2; i<=9 ;i++)

        for ( j = 2; j <=9 ; j++)
        {
            k=i*j;
            printf("%d * %d = %d\n", i, j, k);
        }
    char *p=NULL;
    printf("%d",sizeof(p));


}    
