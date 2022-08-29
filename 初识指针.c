#include <stdio.h>

int main()
{
    int a  = 10;
    int* pa = &a;//存放地址的变量，成为指针变量
    *pa = 20;//解引用操作

    printf("%d\n",a);

    return 0;
}