/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-20 21:57:21
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-20 22:13:02
 * @FilePath: /CCODE/库函数/my_strcmp.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

int my_strcmp(const char* s1,const char* s2)
{
    while(*s1 == *s2)
    {
        if(*s1 == '\0')
            return 0;
        s1++;
        s2++;
    }

    return *s1-*s2;
}

int main()
{
    char a[] = "abcdf";
    char b[] = "abcd";
    int ret = my_strcmp(a,b);
    if(ret > 0)
    {
        printf("a > b\n");
    }
    else if(ret == 0)
    {
        printf("a == b\n");
    }
    else
    {
        printf("a < b\n");
    }
    return 0;
}