#include <stdio.h>
void swap(int x,int y)//传值
{
    int tmp = x;
    x = y;
    y = tmp;
}

void swap1(int* pa,int* pb)//传址
{
    int tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}
int main()
{
    int  a = 10;
    int  b = 20;
    swap(a,b);
    printf("%d,%d\n",a,b);
    swap1(&a,&b);
    printf("%d,%d\n",a,b);
    return 0;
}