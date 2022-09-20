/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-20 21:24:39
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-20 21:56:53
 * @FilePath: /CCODE/库函数/my_strcat.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

char* my_strcat(char* dest,const char* src)
{
    char* ret = dest;
    //找到‘\0'
    while(*dest) //while(*dest++)为甚不行
    {
        dest++;  
    }
    //开始拷贝
    while(*dest++ = *src++)
    {
        ;
    }
    return ret;
}

int main()
{
    char str1[10] = "abcd";
    char str2[] = "zhang";
    char*ret = my_strcat(str1,str2);
    printf("%s\n",str1);
    return 0;
}