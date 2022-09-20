/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-20 21:24:39
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-20 22:55:00
 * @FilePath: /CCODE/库函数/my_strcat.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

char* my_strstr(const char* s1,const char* s2)
{
    char* order1 = (char*)s1;
    char* order2 = (char*)s2;
    char* ret = (char*)s1;
    //s2位空字符串，肯定是子串
    if(*s2 == '\0')
    {
        return (char*)s1;
    }
    while(*order1)
    {
        //每循环一次 便是与”bbc“匹配的一次尝试,搜索指针order回到上次出发地
        order1 = ret;//ret： 每循环一次 往后滑动1；记录返回点
        order2 = (char*)s2;
        while(*order1 && *order2 && *order1 == *order2)
        {
            order1++;
            order2++;
        }
        if(*order2 == '\0')
        {
            return ret;    //找到子串
        }
        if(*order2 == '\0') //针对”bc“ 和”bcc“这种的情况，提前结束
            return NULL;
        ret++;
    }
    return NULL;
}

int main()
{
    char str1[10] = "abbbcdef";
    char str2[] = "bbd";
    char*ret = my_strstr(str1,str2);
    if(ret == NULL)
    {
        printf("不是子串\n");
    }
    else
    {
        printf("%s\n",ret);
    }
    return 0;
}
