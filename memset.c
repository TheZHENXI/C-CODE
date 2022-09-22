/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-21 20:22:10
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-21 20:26:00
 * @FilePath: /CCODE/库函数/字符函数/memset.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <string.h>

int main()
{
    int a[10] = {0};
    //01 01 01 01 01 01 01 01 01 01 00 00 00 00 ...
    memset(a,1,10);//注意第三个参数是字节的个数
    
    return 0;
}