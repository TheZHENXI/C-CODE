#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    //a中存放最大值，b次之，c中存放最小值
    if(a < b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    if(a < c)
    {
        int tmp = a;
        a = c;
        c = tmp;
    }
    if(b < c)
    {
        int tmp = b;
        b = c;
        c = tmp;
    }
    printf("%d %d %d\n",a,b,c);
    return 0;
     
}