/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-11 20:12:58
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-11 21:54:38
 * @FilePath: /CCODE/数组存储/作业题2.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int i  =0 ;
    for(i = 0 ; i < 1000; i++)
    {
        a[i] = -1 - i;         //-1,-2,-3,-4,...-128,127,126 ... 2,1,0,-1
    }
    printf("%ld\n",strlen(a));//strlen 遇到'\0'便停止,\0D的ASCII码值为0
}

