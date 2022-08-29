#include <stdio.h>
#include <math.h>

int is_prime(int a)//传值
{
    int j;
    for(j = 2;j <= sqrt(a); j++)
    {
        if(a%j == 0)
            return 0;
    }
    if(j > sqrt(a))
        return 1;
}

int main()
{
    int i = 0;
    for(i=100;i <= 200;i++)
    {
        if(is_prime(i) == 1)
            printf("%d ", i );

    }
    return 0;
}