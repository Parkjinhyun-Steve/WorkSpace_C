// 참조에 의한 호출 ( Call by reference )  -> 연습 중
// 값에 의한 호출 ( Call by velue )

#include <stdio.h>
void swap(int *p1, int *p2);

void main()
{

    int a=3, b=4;
    swap(&a, &b);
    printf("a=%d  b=%d", a,b);

}

void swap(int *p1, int *p2)  // 주소값을 저장하는 변수 p  // int *p = &a 를 뜻한다. 
                                                        // int *p
                                                        // p = &a;
{

    // p1 -> a의 주소값
    // *p1 -> p1이 가르키는 값. 즉, a의 값
    
    int temp;
    temp = *p1;  // a의 값 대입
    *p1 = *p2;   // b의 값 대입
    *p2 = temp;  // temp 값 대입   
    
}