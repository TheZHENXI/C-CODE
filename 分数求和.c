#include <stdio.h>

int main()
{
    int i = 0;
    float sum =0;
    int flag = 1;
    for(i = 1;i <= 100;i++)
    {
        sum += flag*1.0/i;
        flag = -flag;    //巧妙利用flag 计算1-1/2+1/3-1/4+...+1/99-1/100
    }
    printf("%lf\n",sum);
    return 0;
}