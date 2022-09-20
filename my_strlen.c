/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-20 21:01:50
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-20 21:11:55
 * @FilePath: /CCODE/库函数/my_strlen.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
//1.计数器实现
int my_strlen1(char* s)
{
    int cnt = 0;
    while(*s)
    {
        cnt++;
        s++;
    }
    return cnt;
}
//2.递归实现
int my_strlen2(char* s)
{
    if(*s != '\0')
        return 1 + my_strlen2(s+1);
    return 0;
}
//3.指针-指针实现

int main()
{
    char str[] = "abcdef";
    int ret1 = my_strlen1(str);
    int ret2 = my_strlen2(str);
    printf("%d\n",ret1);
    printf("%d\n",ret2);
    return 0;
}