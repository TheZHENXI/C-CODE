#include <stdio.h>
/*
int Fib1(int n)
{
    if(n <= 2)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);

}
*/
int Fib2(int n)
{
    int a = 1,b = 1;
    int c = 1;
/*    while( n > 2)
    {
        c = a + b;
        a = b;
        b = c;
        n--;
    }
    return c;
*/    

    for(int i = 3;i <= n;i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}


int main()
{
    int n = 10 ;
    printf("%d\n",Fib2(n));
    return 0;
}