#include <stdio.h>
#include <math.h>
int main()
{
    int i=0,cnt=0;
    for(i = 101;i <=200;i+=2)
    //for(i = 100;i <= 200; i++)//打印100~200之间的素数
    {
        int j=0;
        for(j = 2;j <= sqrt(i); j++)//只需查询2~sqrt(i)之间的数能否被i整除
        {
            if(i % j == 0)
                break;
        }
        if(j > sqrt(i))
        {
            cnt ++;
            printf("%d ",i);
        }
    }
    printf("\n素数的个数 = %d\n",cnt);
    return 0;

}