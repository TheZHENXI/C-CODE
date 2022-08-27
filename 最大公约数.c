#include <stdio.h>

int main()
{
    //辗转反除法
    int m = 100, n = 10;
    int r;
    printf("请输入：\n", n);
    scanf("%d%d",&m,&n);

    while(m%n)
    {
        r = m % n;
        m = n;
        n = r;
    }

    printf("最大公约数 = %d\n", n);

    return 0;
}