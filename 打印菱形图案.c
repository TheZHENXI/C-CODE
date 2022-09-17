/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-17 22:21:09
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-17 22:46:23
 * @FilePath: /CCODE/指针作业/打印菱形图案.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************      //line定义为上半部分的行数，防止输入偶数，打印不成菱形
// ***********      0     11
//  *********       1     9
//   *******        2     7
//    *****         3     5
//     ***          4     3
//      *           5     1
int main()
{
    int line = 0;
    scanf("%d",&line);
    //1.打印上半部分
    for(int i =0;i < line;i++)
    {
        //每行先打印空格
        for(int j =0 ;j < line-i;j++)
        {
            printf(" ");
        }
        //打印*
        for(int j=0;j < (2*i)+1;j++)
        {
            printf("*");
        }
    }
    //2.打印下班部分
    for(int i =0;i < line - 1;i++)
    {
        //每行先打印空格
        for(int j =0 ;j < i+1;j++)
        {
            printf(" ");
        }
        //打印*
        for(int j=0;j < 2*(line-1-i)-1;j++)
        {
            printf("*");
        }
    }
    return 0;
}