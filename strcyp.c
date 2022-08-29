#include <stdio.h>
#include <string.h>

int main()
{
    char arr1[10] = "zhang";
    char arr2[10] = "###########";

    strcpy(arr2,arr1);

    printf("%s\n",arr2);
    return 0;
}