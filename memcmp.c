/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-21 20:17:49
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-21 20:20:31
 * @FilePath: /CCODE/库函数/字符函数/memcmp.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <string.h>

int main()
{
    int a[] = {1,2,3,4,5};
    int b[] = {1,2,3,6,7};
    int ret = memcmp(a,b,13);
    printf("%d\n",ret);
    return 0;
}