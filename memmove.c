/*
 * @Author: error: git config user.name && git config user.email & please set dead value or install git
 * @Date: 2022-09-21 19:52:58
 * @LastEditors: error: git config user.name && git config user.email & please set dead value or install git
 * @LastEditTime: 2022-09-21 20:13:54
 * @FilePath: /CCODE/memmove.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include <stdio.h>
#include <assert.h>
#include <string.h>

void* my_memmove(void* dest,const void* src,int cnt)
{
    assert(dest != NULL);
    assert(src != NULL);
    void* ret = dest;
    if(src < dest)
    {
        //从后向前拷贝
        while(cnt--)
        {
            *(char*)(dest+cnt) = *(char*)(src+cnt);
        }
    }
    else
    {
        //从前向后拷贝
        while(cnt--)
        {
            *(char*)dest = *(char*)src;  
            ++dest;//++(char*)dest;
            ++src;//++(char*)src;
        }
    }

    return ret;
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9};
    //int b[] = {8,9,10};
    //memmove(a,a+1,12);
    my_memmove(a,a+2,20);
    
    return 0;
}