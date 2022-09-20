#include <stdio.h>
#include <string.h>

//三不翻转法
//abcdef  k = 3
//abc def 两个分别翻转
//cba fed
//defabc  总翻转
void reverse(char* str,int left,int right)
{
    while(left < right)
    {
        int tmp = str[left];
        str[left] = str[right];
        str[right] = tmp;
        left++;
        right--;
    }
}

void left_move(char* str,int k)
{
    int len = strlen(str);
    reverse(str,0,k-1);
    reverse(str,k,len-1);
    reverse(str,0,len-1);

}


// //暴力求解法
// void left_move(char* str,int k)
// {
//     int len = strlen(str);
//     //一个一个移动
//     for(int i = 0;i < k;i++)
//     {
//         int tmp = str[0];//处理第一个字符

//         for(int j = 0;j < len-1;j++)
//         {
//             str[j] = str[j+1];
//         }

//         str[len-1] = tmp;

//     }
// }

int main()
{
    char str[] ="abcdef";
    int k = 0;
    scanf("%d",&k);
    k %=strlen(str);
    left_move(str,k);
    printf("%s\n",str);
    return 0;
}