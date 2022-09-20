#include <stdio.h>
#include <string.h>

//暴力求解
// void reverse(char* str,int left,int right)
// {
//     while(left < right)
//     {
//         int tmp = str[left];
//         str[left] = str[right];
//         str[right] = tmp;
//         left++;
//         right--;
//     }
// }

// void left_move(char* str,int k)
// {
//     int len = strlen(str);
//     reverse(str,0,k-1);
//     reverse(str,k,len-1);
//     reverse(str,0,len-1);

// }

//暴力求解
// int Is_leftmove(char* str1,char* str2)
// {
//     //逐步移动，并且比较
//     int len = strlen(str1);
//     for(int i = 0;i < len;i++)
//     {
//         left_move(str1,1);
//         int ret = strcmp(str1,str2);
//         if(ret == 0)
//             return 1;
//     }
//     return 0;
// }


//库函数
int Is_leftmove(char* str1,char* str2)
{
    if(strlen(str1) != strlen(str2))
    {
        return 0;
    }
    int len = strlen(str1);
    //1.在str1后加入str1：abcdef => abcdefabcdef
    strncat(str1,str1,strlen(str1));
    char* ret = strstr(str1,str2);
    if(ret == NULL)
        return 0;
    else
        return 1;
}

int main()
{
    char str1[] = "abcdef";
    char str2[] = "cdefab";
    int ret = Is_leftmove(str1,str2);
    if(ret == 1)
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}