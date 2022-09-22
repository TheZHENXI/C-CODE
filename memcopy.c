/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-21 18:26:57
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-21 19:52:18
 * @FilePath: /CCODE/库函数/字符函数/memcopy.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <stdio.h>
#include <assert.h>
#include <string.h>

void* my_memcpy(void* dest,const void* src,int cnt)
{
    assert(dest != NULL);
    assert(src != NULL);

    void* ret = dest;
    while(cnt--)
    {
        *(char*)dest = *(char*)src;  
        ++dest;//++(char*)dest;
        ++src;//++(char*)src;
    }
    return ret;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7};
    int b[] = {8,9,10};
    //memcpy(a,b,12);
    my_memcpy(a,b,12);
    
    return 0;
}