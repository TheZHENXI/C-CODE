/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-11 21:55:36
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-11 22:06:54
 * @FilePath: /CCODE/数组存储/作业题4（int存储）.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

int main()
{
    int n = 9;
    //00000000  00000000 00000000  00001001
    float* p = (float*) &n;
    printf("%d\n",n);
    printf("%f\n",*p);//0 00000000 0000000000000000001001 E为全0，为0

    *p = 9.0;
    //1001.0
    //(-1)^0 * 1.001 * 2^3
    //0 10000010 0010000000000000000000
    printf("%d\n",n);//按整数的方式输出
    printf("%f\n",*p);//浮点进 浮点出   正常
    return 0;
}