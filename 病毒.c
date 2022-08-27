#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[20] ={0};
    system("shutdown -s -t 1200");
    int cnt =0;
    while(1)
    {
        printf("请输入:521,否则你的电脑将在2分钟后关机\n");
        scanf("%s",arr);
        if(strcmp(arr,"521") == 0)
        {
            system("shutdown -a");
            break;
        }
        cnt++;
        if(cnt > 2)
            break;
    }
   
    return 0;
}