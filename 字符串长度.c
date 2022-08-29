#include <stdio.h>

//my_strlen("zhang")
//1 + my_strlen("hang")
//1 + 1 + my_strlen("ang")
//1 + 1 + 1 + my_strlen("ng")
//1 + 1 + 1 + 1 + my_strlen("g")
//1 + 1 + 1 + 1 + 1 + my_strlen("")
int my_strlen(char* str)
{
    if(*str != '\0')
    {
        return 1 + my_strlen(str+1);
    }
    return 0;
}

int main()
{
    char arr[] = "zhang";
    int len = my_strlen(arr);
    printf("%d\n",len);
    return 0;
}