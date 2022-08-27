#include <stdio.h>

int main()
{
    int n = 100;
    int i = 0;
    int cnt = 0;
    for(i = 1;i <= 100;i++)
    {
        if( i % 10 == 9)
            cnt++;
        if( i / 10 == 9)
            cnt++;
    }
    printf("素数个数 = %d\n",cnt);
    
    return 0;
}