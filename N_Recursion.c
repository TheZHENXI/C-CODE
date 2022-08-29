#include <stdio.h>

int DF(int n)
{
    if(n <= 1)
        return 1;
    else
        return n*DF(n-1);
}

int main()
{
    int n =0;
    printf("请输入你要计算的数>");
    scanf("%d",&n);
    int ret = DF(n);
    printf("ret = %d\n",ret);
    
    return 0;
}