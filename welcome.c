#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    char arr1[] = "Welcome to home";
    char arr2[] = "###############";
    int left = 0;
    int right = strlen(arr1)-1;//字符串数组 最后会有一个\0,所以不易用sizeof
    while(left <= right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        left++;
        right--;
        Sleep(1000);
        system("cls");
        printf("%s\n",arr2);
    }

    return 0;
}

