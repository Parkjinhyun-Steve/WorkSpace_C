
#include <stdio.h>

void main()
{
    int i;
    char str[4]={'a','b','c','\0'};
    char str1[4]="abc";  // -> ���ڿ� �ʱ�ȭ �Ҷ� null ������ ���� ��. (�̰� ����)
    int a[]={0,1,2};  // [ ] �����ϸ� �˾Ƽ� ũ�⿡ �´� ������ ���� ��
    char str2[]="�ȳ��ϼ���";

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
    printf("str�� �迭�� ������ %d",i+1 );


    
}

