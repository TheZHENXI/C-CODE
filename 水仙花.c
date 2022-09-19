#include <stdio.h>
#include <math.h>
int main()
{
    for(int i = 1;i <= 10000;i++)
    {
        int j = i;
        int bit = 0;
        while (j)
        {
            j = j/10;
            bit++;
        /* code */
        }
        if(pow(i%10,bit)+pow(i%100,bit)+pow(i%1000,bit)+pow(i/10000,bit) == i)
            printf("%d ",i);
    }
    return 0;
}