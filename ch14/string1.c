
#include <stdio.h>

void main()
{
    int i;
    char str[4]={'a','b','c','\0'};
    char str1[4]="abc";  // -> 문자열 초기화 할때 null 값까지 선언 됨. (이게 좋음)
    int a[]={0,1,2};  // [ ] 생략하면 알아서 크기에 맞는 개수로 설정 됨
    char str2[]="안녕하세요";

    // str[0] = 'a';
    // str[1] = 'b';
    // str[2] = 'c';
    // str[3] = '\0';
    
    for ( int i =0 ;  ; i++ )
    {
        if (str[i]=='\0') break;
        {
            printf("%c",str[i]);
            printf("%c",str1[i]);
            
        }
        
    }

    printf("\n%s",str2);

    i=0;
    while (str2[i]!='\0')
    {
        i++;
    }
    printf("str의 배열의 개수는 %d",i+1 );


    
}

