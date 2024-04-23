#include <stdio.h>

// function power

int power(int base, int n)
{
    // int res;

    // res = 1;
    // while (m > 0)
    // {
    //     res = n * n;
    //     m--;
    // }
    // return(res);

    int i, p;

    p = 1;
    for (i = 1; i <= n; ++i)
        p = p * base;
    return p;
}

int main()
{
    int i;
    
    for (i = 0; i < 10; ++i)
    {
        printf("%d, %d, %d\n", i, power(2, i), power(-3, i));
    }
    return 0;
}