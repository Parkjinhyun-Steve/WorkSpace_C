#include <stdio.h>

//typedef int JUNGSU;

struct point  // point는 이름이라 정하기 나름
{
    int x,y,z;

};

void main()
{
    struct point p1,p2;
//    abc p1, p2;
    p1.x=10; p1.y=20; p1.z=30;

    p2=p1;

    printf("%d %d %d\n", p1.x, p1.y, p1.z); 
//    p1.x=100;
    printf("%d %d %d\n", p2.x, p2.y, p2.z);

    if (p1.x==p2.x && p1.y==p2.y && p1.z == p2.z)
    {
        printf("똑같다");
    }

    struct point p3[100];
    p3[0].x=1;

    
}