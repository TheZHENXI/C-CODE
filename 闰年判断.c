#include <stdio.h>

int main()
{
    int year,cnt=0;
    for(year = 1000; year <= 2000; year++)
    {
        if( (year%4 == 0 && year%100 != 0) || year % 400 == 0 )
        {
            printf("%d ",year);
            cnt++;
        }
    }
    printf("\n闰年数 = %d\n",cnt);
}


/*
1、普通闰年：公历年份是4的倍数，且不是100的倍数，为普通闰年
（如2004年、2020年就是闰年）。
2、世纪闰年：公历年份是整百数，必须是400的倍数，才是世纪闰年
（如1900年不是世纪闰年，而2000年就是世纪闰年）。
*/
