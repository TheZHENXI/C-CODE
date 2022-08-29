#include <stdio.h>

int jumpFloor(int number ) 
{
    if(number == 1) 
        return 1;
    if(number == 2)
        return 2;
    if(number > 2)
        return jumpFloor(number-1) + jumpFloor(number-2);
    // write code here
}

int main()
{
    int n = 9;
    int cnt = jumpFloor(n);
    printf("cnt = %d\n",cnt);
    return 0;
}