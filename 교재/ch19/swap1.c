// ������ ���� ȣ�� ( Call by reference )  -> ���� ��
// ���� ���� ȣ�� ( Call by velue )

#include <stdio.h>
void swap(int *p1, int *p2);

void main()
{

    int a=3, b=4;
    swap(&a, &b);
    printf("a=%d  b=%d", a,b);

}

void swap(int *p1, int *p2)  // �ּҰ��� �����ϴ� ���� p  // int *p = &a �� ���Ѵ�. 
                                                        // int *p
                                                        // p = &a;
{

    // p1 -> a�� �ּҰ�
    // *p1 -> p1�� ����Ű�� ��. ��, a�� ��
    
    int temp;
    temp = *p1;  // a�� �� ����
    *p1 = *p2;   // b�� �� ����
    *p2 = temp;  // temp �� ����   
    
}