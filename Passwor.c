#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

int main()
{
    char password[20] = {0};
    int i;
    for( i = 0; i < 3;i++)
    {
        printf("请输入密码\n");
        scanf("%s",password);
        if(strcmp(password,"123456") == 0)
        {
            printf("密码正确\n");
            break;
        }
        else
            printf("密码错误\n");
    }
    if(3 == i)
    {
        printf("三次密码错误，退出程序");
    }

    return 0;
}

