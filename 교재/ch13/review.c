
//9개의 정수형 배열을 선언 후 각 배열에
//2부터 2의 배수를 선언한다.
//2 4 6 8 10 12 14 16 18
//그리고 출력한다

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
