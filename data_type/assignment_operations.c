#include <stdio.h>

int bitcount (unsigned x)
{
    int b;

    for (b = 0; x != 0; x >>= 1)
    if (x & 01)
    b++;
    return b;
}



int main()
{
    int a = 5;
    printf("%d\n", bitcount(a));
    return 0;
}